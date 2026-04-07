// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "Anthropic/GenAnthropicChatStream.h"
#include "GenAISettings.h"
#include "GenAIUtils.h"
#include "GenAIOAuth.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

#ifndef ANTHROPIC_BASE_URL
#define ANTHROPIC_BASE_URL TEXT("https://api.anthropic.com/v1")
#endif

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint async node
// ─────────────────────────────────────────────────────────────────────────────

UGenAnthropicChatStreamAsync* UGenAnthropicChatStreamAsync::RequestAnthropicChatStream(
    UObject* WorldContextObject,
    const TArray<FGenChatMessage>& Messages,
    const FGenAnthropicChatSettings& Settings)
{
    UGenAnthropicChatStreamAsync* Node = NewObject<UGenAnthropicChatStreamAsync>(WorldContextObject);
    Node->CachedMessages = Messages;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenAnthropicChatStreamAsync::Activate()
{
    TWeakObjectPtr<UGenAnthropicChatStreamAsync> WeakThis(this);

    HttpRequest = UGenAnthropicChatStream::SendStreamChatRequest(
        CachedMessages, CachedSettings,
        FOnAnthropicStreamDeltaNative::CreateLambda(
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

void UGenAnthropicChatStreamAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Body builder
// ─────────────────────────────────────────────────────────────────────────────

static FString BuildAnthropicStreamBody(
    const TArray<FGenChatMessage>& Messages,
    const FGenAnthropicChatSettings& Settings)
{
    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();

    Root->SetStringField(TEXT("model"), FGenAIUtils::ResolveAnthropicModel(Settings));
    Root->SetNumberField(TEXT("max_tokens"), Settings.MaxTokens);

    FString SystemText = Settings.SystemPrompt;
    if (SystemText.IsEmpty())
    {
        for (const FGenChatMessage& Msg : Messages)
        {
            if (Msg.Role == EGenChatRole::System) { SystemText = Msg.Content; break; }
        }
    }
    if (!SystemText.IsEmpty())
        Root->SetStringField(TEXT("system"), SystemText);

    Root->SetArrayField(TEXT("messages"), FGenAIUtils::BuildAnthropicMessages(Messages));

    if (Settings.Temperature != 1.0f)
        Root->SetNumberField(TEXT("temperature"), Settings.Temperature);
    if (Settings.TopP != 1.0f)
        Root->SetNumberField(TEXT("top_p"), Settings.TopP);
    if (Settings.TopK > 0)
        Root->SetNumberField(TEXT("top_k"), Settings.TopK);

    if (Settings.Tools.Num() > 0)
        Root->SetArrayField(TEXT("tools"), FGenAIUtils::BuildAnthropicTools(Settings.Tools));

    Root->SetBoolField(TEXT("stream"), true);

    FString Body;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
    FJsonSerializer::Serialize(Root.ToSharedRef(), Writer);
    return Body;
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static implementation
// ─────────────────────────────────────────────────────────────────────────────

struct FAnthropicStreamState
{
    FString LeftoverBuffer;
    FString AccumulatedContent;
    FString PendingEvent;
    bool bDone = false;
    FOnAnthropicStreamDeltaNative Callback;
};

TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> UGenAnthropicChatStream::SendStreamChatRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenAnthropicChatSettings& Settings,
    FOnAnthropicStreamDeltaNative OnDelta)
{
    // Try OAuth token first, fall back to API key
    FString ApiKey = FGenAIUtils::GetAnthropicKey(Settings.ApiKeyOverride);
    const bool bUseOAuth = ApiKey.IsEmpty() && FGenAIOAuth::Get().IsLoggedIn();

    if (ApiKey.IsEmpty() && !bUseOAuth)
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][Anthropic Stream] API key not set and not logged in via OAuth."));
        OnDelta.ExecuteIfBound(FGenStreamDelta(), false);
        return nullptr;
    }

    const FString Endpoint = FString(ANTHROPIC_BASE_URL) + TEXT("/messages");
    const FString Body = BuildAnthropicStreamBody(Messages, Settings);

    FGenAIUtils::LogRequest(TEXT("Anthropic Stream"), Endpoint, Body);

    const UGenAISettings* GenSettings = GetDefault<UGenAISettings>();
    const FString ApiVersion = GenSettings ? GenSettings->AnthropicApiVersion : TEXT("2023-06-01");

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

    if (bUseOAuth)
    {
        Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + FGenAIOAuth::Get().GetAccessToken());
    }
    else
    {
        Request->SetHeader(TEXT("x-api-key"), ApiKey);
    }

    Request->SetHeader(TEXT("anthropic-version"), ApiVersion);
    Request->SetContentAsString(Body);

    TSharedPtr<FAnthropicStreamState> State = MakeShared<FAnthropicStreamState>();
    State->Callback = OnDelta;
    TSharedPtr<int32> ProcessedBytesPtr = MakeShared<int32>(0);

    Request->OnRequestProgress64().BindLambda(
        [State, ProcessedBytesPtr](FHttpRequestPtr Req, uint64 /*Sent*/, uint64 /*Received*/)
        {
            if (State->bDone || !Req.IsValid() || !Req->GetResponse().IsValid()) return;

            const FString FullSoFar = Req->GetResponse()->GetContentAsString();
            if (FullSoFar.Len() <= *ProcessedBytesPtr) return;

            FString NewData = FullSoFar.Mid(*ProcessedBytesPtr);
            *ProcessedBytesPtr = FullSoFar.Len();

            State->LeftoverBuffer += NewData;

            TArray<FString> Lines;
            State->LeftoverBuffer.ParseIntoArrayLines(Lines, false);

            bool bEndsWithNewline = State->LeftoverBuffer.EndsWith(TEXT("\n"));
            FString Leftover;
            if (!bEndsWithNewline && Lines.Num() > 0)
            {
                Leftover = Lines.Last();
                Lines.RemoveAt(Lines.Num() - 1);
            }
            State->LeftoverBuffer = Leftover;

            // Anthropic SSE: alternating "event: ..." and "data: ..." lines
            for (const FString& Line : Lines)
            {
                FString Trimmed = Line.TrimStartAndEnd();
                if (Trimmed.IsEmpty())
                {
                    State->PendingEvent.Empty();
                    continue;
                }

                if (Trimmed.StartsWith(TEXT("event: ")))
                {
                    State->PendingEvent = Trimmed;
                }
                else if (Trimmed.StartsWith(TEXT("data: ")) && !State->PendingEvent.IsEmpty())
                {
                    FGenStreamDelta Delta;
                    if (FGenAIUtils::ParseAnthropicStreamChunk(State->PendingEvent, Trimmed, Delta))
                    {
                        Delta.ContentAccumulated = State->AccumulatedContent + Delta.ContentDelta;
                        State->AccumulatedContent = Delta.ContentAccumulated;

                        if (Delta.bIsDone)
                        {
                            State->bDone = true;
                        }

                        State->Callback.ExecuteIfBound(Delta, true);
                    }
                    State->PendingEvent.Empty();
                }
            }
        });

    Request->OnProcessRequestComplete().BindLambda(
        [State](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][Anthropic Stream] Network error."));
                State->Callback.ExecuteIfBound(FGenStreamDelta(), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][Anthropic Stream] HTTP %d: %s"),
                    Code, *Response->GetContentAsString());
                State->Callback.ExecuteIfBound(FGenStreamDelta(), false);
                return;
            }

            if (!State->bDone)
            {
                FGenStreamDelta FinalDelta;
                FinalDelta.bIsDone = true;
                FinalDelta.ContentAccumulated = State->AccumulatedContent;
                FinalDelta.FinishReason = EGenFinishReason::EndTurn;
                State->Callback.ExecuteIfBound(FinalDelta, true);
            }
        });

    Request->ProcessRequest();
    return Request;
}
