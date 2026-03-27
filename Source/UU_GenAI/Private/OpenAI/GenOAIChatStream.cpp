// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "OpenAI/GenOAIChatStream.h"
#include "GenAIUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

// ─────────────────────────────────────────────────────────────────────────────
//  Shared request body builder (stream=true)
// ─────────────────────────────────────────────────────────────────────────────

static FString BuildOAIStreamBody(
    const TArray<FGenChatMessage>& Messages,
    const FGenOAIChatSettings& Settings)
{
    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();

    Root->SetStringField(TEXT("model"), FGenAIUtils::ResolveOAIModel(Settings));
    Root->SetArrayField(TEXT("messages"),
        FGenAIUtils::BuildOAIMessages(Messages, Settings.SystemPrompt));
    Root->SetNumberField(TEXT("temperature"), Settings.Temperature);
    Root->SetNumberField(TEXT("max_tokens"), Settings.MaxTokens);

    if (Settings.Tools.Num() > 0)
    {
        Root->SetArrayField(TEXT("tools"), FGenAIUtils::BuildOAITools(Settings.Tools));
        Root->SetStringField(TEXT("tool_choice"),
            FGenAIUtils::ToolChoiceToString(Settings.ToolChoice));
    }

    Root->SetBoolField(TEXT("stream"), true);

    // stream_options: include_usage for token counts on stream end
    TSharedPtr<FJsonObject> StreamOpts = MakeShared<FJsonObject>();
    StreamOpts->SetBoolField(TEXT("include_usage"), true);
    Root->SetObjectField(TEXT("stream_options"), StreamOpts);

    FString Body;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
    FJsonSerializer::Serialize(Root.ToSharedRef(), Writer);
    return Body;
}

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint async node
// ─────────────────────────────────────────────────────────────────────────────

UGenOAIChatStreamAsync* UGenOAIChatStreamAsync::RequestOpenAIChatStream(
    UObject* WorldContextObject,
    const TArray<FGenChatMessage>& Messages,
    const FGenOAIChatSettings& Settings)
{
    UGenOAIChatStreamAsync* Node = NewObject<UGenOAIChatStreamAsync>(WorldContextObject);
    Node->CachedMessages = Messages;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenOAIChatStreamAsync::Activate()
{
    TWeakObjectPtr<UGenOAIChatStreamAsync> WeakThis(this);

    HttpRequest = UGenOAIChatStream::SendStreamChatRequest(
        CachedMessages, CachedSettings,
        FOnOAIStreamDeltaNative::CreateLambda(
            [WeakThis](const FGenStreamDelta& Delta, bool bSuccess)
            {
                if (!WeakThis.IsValid()) return;

                if (!bSuccess)
                {
                    WeakThis->OnFailure.Broadcast(Delta, false);
                    WeakThis->SetReadyToDestroy();
                    return;
                }

                WeakThis->OnDelta.Broadcast(Delta, true);

                if (Delta.bIsDone)
                {
                    WeakThis->OnComplete.Broadcast(Delta, true);
                    WeakThis->SetReadyToDestroy();
                }
            }));
}

void UGenOAIChatStreamAsync::Cancel()
{
    if (HttpRequest.IsValid())
    {
        HttpRequest->CancelRequest();
    }
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static implementation
// ─────────────────────────────────────────────────────────────────────────────

struct FStreamState
{
    FString LeftoverBuffer;
    FString AccumulatedContent;
    FString AccumulatedToolArgs;
    bool bDone = false;
    FOnOAIStreamDeltaNative Callback;
};

TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> UGenOAIChatStream::SendStreamChatRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenOAIChatSettings& Settings,
    FOnOAIStreamDeltaNative OnDelta)
{
    const FString ApiKey = FGenAIUtils::GetOpenAIKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Stream] API key not set."));
        OnDelta.ExecuteIfBound(FGenStreamDelta(), false);
        return nullptr;
    }

    const FString BaseUrl = FGenAIUtils::GetOpenAIBaseUrl();
    const FString Endpoint = BaseUrl + TEXT("/chat/completions");
    const FString Body = BuildOAIStreamBody(Messages, Settings);

    FGenAIUtils::LogRequest(TEXT("OpenAI Stream"), Endpoint, Body);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + ApiKey);
    Request->SetContentAsString(Body);

    // Shared mutable state across progress + completion callbacks
    TSharedPtr<FStreamState> State = MakeShared<FStreamState>();
    State->Callback = OnDelta;

    Request->OnRequestProgress64().BindLambda(
        [State](FHttpRequestPtr /*Req*/, uint64 /*Sent*/, uint64 /*Received*/)
        {
            if (State->bDone) return;

            // OnRequestProgress doesn't give us the new bytes directly —
            // we read the accumulated content and diff against what we've processed.
            // The proper approach is OnHeaderReceived + reading chunked content.
            // UE's HTTP layer gives us the full content so far each call.
        });

    // UE's built-in streaming via OnRequestProgress gives us the full content so far.
    // We process it in OnProcessRequestComplete or intercept via OnHeaderReceived.
    // For true streaming, we bind to OnRequestProgress and diff the accumulated response.

    int32* ProcessedBytes = new int32(0); // heap-allocated to survive lambda captures
    TSharedPtr<int32> ProcessedBytesPtr(ProcessedBytes);

    Request->OnRequestProgress64().BindLambda(
        [State, ProcessedBytesPtr](FHttpRequestPtr Req, uint64 /*Sent*/, uint64 /*Received*/)
        {
            if (State->bDone || !Req.IsValid()) return;

            const TArray<uint8>& Content = Req->GetContent();
            const int32 TotalBytes = Req->GetResponse().IsValid()
                ? Req->GetResponse()->GetContent().Num()
                : 0;

            if (!Req->GetResponse().IsValid()) return;

            const FString FullSoFar = Req->GetResponse()->GetContentAsString();
            if (FullSoFar.Len() <= *ProcessedBytesPtr) return;

            FString NewData = FullSoFar.Mid(*ProcessedBytesPtr);
            *ProcessedBytesPtr = FullSoFar.Len();

            // Append to buffer and process complete lines
            State->LeftoverBuffer += NewData;

            TArray<FString> Lines;
            State->LeftoverBuffer.ParseIntoArrayLines(Lines, false);

            // If buffer doesn't end with newline, last element is incomplete
            bool bEndsWithNewline = State->LeftoverBuffer.EndsWith(TEXT("\n"));
            FString Leftover;
            if (!bEndsWithNewline && Lines.Num() > 0)
            {
                Leftover = Lines.Last();
                Lines.RemoveAt(Lines.Num() - 1);
            }
            State->LeftoverBuffer = Leftover;

            for (const FString& Line : Lines)
            {
                FString Trimmed = Line.TrimStartAndEnd();
                if (Trimmed.IsEmpty()) continue;

                FGenStreamDelta Delta;
                if (FGenAIUtils::ParseOAIStreamChunk(Trimmed, Delta))
                {
                    Delta.ContentAccumulated = State->AccumulatedContent + Delta.ContentDelta;
                    State->AccumulatedContent = Delta.ContentAccumulated;

                    if (Delta.bIsDone)
                    {
                        State->bDone = true;
                    }

                    State->Callback.ExecuteIfBound(Delta, true);
                }
            }
        });

    Request->OnProcessRequestComplete().BindLambda(
        [State](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Stream] Network error."));
                State->Callback.ExecuteIfBound(FGenStreamDelta(), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Stream] HTTP %d: %s"),
                    Code, *Response->GetContentAsString());
                State->Callback.ExecuteIfBound(FGenStreamDelta(), false);
                return;
            }

            // Process any remaining lines in the buffer
            if (!State->LeftoverBuffer.IsEmpty())
            {
                FGenStreamDelta Delta;
                if (FGenAIUtils::ParseOAIStreamChunk(State->LeftoverBuffer.TrimStartAndEnd(), Delta))
                {
                    Delta.ContentAccumulated = State->AccumulatedContent + Delta.ContentDelta;
                    State->AccumulatedContent = Delta.ContentAccumulated;
                    State->Callback.ExecuteIfBound(Delta, true);
                }
            }

            // Ensure we always fire a final "done" event
            if (!State->bDone)
            {
                FGenStreamDelta FinalDelta;
                FinalDelta.bIsDone = true;
                FinalDelta.ContentAccumulated = State->AccumulatedContent;
                FinalDelta.FinishReason = EGenFinishReason::Stop;
                State->Callback.ExecuteIfBound(FinalDelta, true);
            }
        });

    Request->ProcessRequest();
    return Request;
}
