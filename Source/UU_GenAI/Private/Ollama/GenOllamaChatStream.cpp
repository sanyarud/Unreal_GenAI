// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "Ollama/GenOllamaChatStream.h"
#include "GenAIUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

UGenOllamaChatStreamAsync* UGenOllamaChatStreamAsync::RequestOllamaChatStream(
    UObject* WorldContextObject,
    const TArray<FGenChatMessage>& Messages,
    const FGenOllamaChatSettings& Settings)
{
    UGenOllamaChatStreamAsync* Node = NewObject<UGenOllamaChatStreamAsync>(WorldContextObject);
    Node->CachedMessages = Messages;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenOllamaChatStreamAsync::Activate()
{
    TWeakObjectPtr<UGenOllamaChatStreamAsync> WeakThis(this);

    HttpRequest = UGenOllamaChatStream::SendStreamChatRequest(
        CachedMessages, CachedSettings,
        FOnOllamaStreamDeltaNative::CreateLambda(
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

void UGenOllamaChatStreamAsync::Cancel()
{
    if (HttpRequest.IsValid())
    {
        HttpRequest->CancelRequest();
    }
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────

struct FOllamaStreamState
{
    FString LeftoverBuffer;
    FString AccumulatedContent;
    bool bDone = false;
    FOnOllamaStreamDeltaNative Callback;
};

TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> UGenOllamaChatStream::SendStreamChatRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenOllamaChatSettings& Settings,
    FOnOllamaStreamDeltaNative OnDelta)
{
    FString BaseUrl = Settings.BaseUrl;
    if (BaseUrl.IsEmpty()) BaseUrl = TEXT("http://localhost:11434");
    const FString Endpoint = BaseUrl + TEXT("/api/chat");

    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();
    Root->SetStringField(TEXT("model"), FGenAIUtils::ResolveOllamaModel(Settings));
    Root->SetArrayField(TEXT("messages"), FGenAIUtils::BuildOAIMessages(Messages, Settings.SystemPrompt));
    Root->SetBoolField(TEXT("stream"), true);

    TSharedPtr<FJsonObject> Options = MakeShared<FJsonObject>();
    Options->SetNumberField(TEXT("temperature"), Settings.Temperature);
    Options->SetNumberField(TEXT("num_predict"), Settings.MaxTokens);
    Root->SetObjectField(TEXT("options"), Options);

    FString Body = FGenAIUtils::JsonObjectToString(Root);
    FGenAIUtils::LogRequest(TEXT("Ollama"), Endpoint, Body);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetContentAsString(Body);

    TSharedRef<FOllamaStreamState> State = MakeShared<FOllamaStreamState>();
    State->Callback = OnDelta;

    int32* ProcessedBytes = new int32(0);
    TSharedPtr<int32> ProcessedBytesPtr(ProcessedBytes);

    Request->OnRequestProgress64().BindLambda(
        [State, ProcessedBytesPtr](FHttpRequestPtr Req, uint64 /*Sent*/, uint64 /*Received*/)
        {
            if (State->bDone || !Req->GetResponse().IsValid()) return;

            const FString FullSoFar = Req->GetResponse()->GetContentAsString();
            if (FullSoFar.Len() <= *ProcessedBytesPtr) return;

            FString NewData = FullSoFar.Mid(*ProcessedBytesPtr);
            *ProcessedBytesPtr = FullSoFar.Len();

            State->LeftoverBuffer += NewData;

            TArray<FString> Lines;
            State->LeftoverBuffer.ParseIntoArrayLines(Lines, false);

            if (!State->LeftoverBuffer.EndsWith(TEXT("\n")) && Lines.Num() > 0)
            {
                State->LeftoverBuffer = Lines.Last();
                Lines.RemoveAt(Lines.Num() - 1);
            }
            else
            {
                State->LeftoverBuffer.Empty();
            }

            for (const FString& Line : Lines)
            {
                FString Trimmed = Line.TrimStartAndEnd();
                if (Trimmed.IsEmpty()) continue;

                FGenStreamDelta Delta;
                if (FGenAIUtils::ParseOllamaStreamChunk(Trimmed, Delta))
                {
                    Delta.ContentAccumulated = State->AccumulatedContent + Delta.ContentDelta;
                    State->AccumulatedContent = Delta.ContentAccumulated;
                    if (Delta.bIsDone) State->bDone = true;
                    State->Callback.ExecuteIfBound(Delta, true);
                }
            }
        });

    Request->OnProcessRequestComplete().BindLambda(
        [State](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid() || Response->GetResponseCode() != 200)
            {
                State->Callback.ExecuteIfBound(FGenStreamDelta(), false);
                return;
            }

            // Process final line if it didn't end with newline
            if (!State->LeftoverBuffer.IsEmpty())
            {
                FGenStreamDelta Delta;
                if (FGenAIUtils::ParseOllamaStreamChunk(State->LeftoverBuffer.TrimStartAndEnd(), Delta))
                {
                    Delta.ContentAccumulated = State->AccumulatedContent + Delta.ContentDelta;
                    State->AccumulatedContent = Delta.ContentAccumulated;
                    State->Callback.ExecuteIfBound(Delta, true);
                }
            }

            if (!State->bDone)
            {
                FGenStreamDelta Final;
                Final.bIsDone = true;
                Final.ContentAccumulated = State->AccumulatedContent;
                State->Callback.ExecuteIfBound(Final, true);
            }
        });

    Request->ProcessRequest();
    return Request;
}
