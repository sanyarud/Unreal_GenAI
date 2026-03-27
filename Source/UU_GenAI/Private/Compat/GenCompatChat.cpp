// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "Compat/GenCompatChat.h"
#include "GenAIUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

// ─────────────────────────────────────────────────────────────────────────────
//  Shared body builder (identical to OpenAI — they're compatible)
// ─────────────────────────────────────────────────────────────────────────────

static FString BuildCompatBody(
    const TArray<FGenChatMessage>& Messages,
    const FString& ModelId,
    const FString& SystemPrompt,
    float Temperature,
    int32 MaxTokens,
    bool bStream = false)
{
    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();
    Root->SetStringField(TEXT("model"), ModelId);

    TArray<TSharedPtr<FJsonValue>> MsgArray = FGenAIUtils::BuildOAIMessages(Messages, SystemPrompt);
    Root->SetArrayField(TEXT("messages"), MsgArray);
    Root->SetNumberField(TEXT("temperature"), Temperature);
    Root->SetNumberField(TEXT("max_tokens"), MaxTokens);
    Root->SetBoolField(TEXT("stream"), bStream);

    FString Body;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
    FJsonSerializer::Serialize(Root.ToSharedRef(), Writer);
    return Body;
}

static void SendToEndpoint(
    const FString& Endpoint,
    const FString& ApiKey,
    const FString& Body,
    const FString& ProviderName,
    FOnCompatChatCompleteNative OnComplete)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + ApiKey);
    Request->SetContentAsString(Body);

    Request->OnProcessRequestComplete().BindLambda(
        [OnComplete, ProviderName](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][%s] Network error."), *ProviderName);
                OnComplete.ExecuteIfBound(FGenChatResponse(), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            const FString ResponseStr = Response->GetContentAsString();

            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][%s] HTTP %d: %s"),
                    *ProviderName, Code, *ResponseStr);
                OnComplete.ExecuteIfBound(FGenChatResponse(), false);
                return;
            }

            // All OpenAI-compatible providers return the same response format
            OnComplete.ExecuteIfBound(FGenAIUtils::ParseOAIChatResponse(ResponseStr), true);
        });

    Request->ProcessRequest();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint: DeepSeek
// ─────────────────────────────────────────────────────────────────────────────

UGenDeepSeekChatAsync* UGenDeepSeekChatAsync::RequestDeepSeekChatCompletion(
    UObject* WorldContextObject,
    const TArray<FGenChatMessage>& Messages,
    const FGenDeepSeekChatSettings& Settings)
{
    UGenDeepSeekChatAsync* Node = NewObject<UGenDeepSeekChatAsync>(WorldContextObject);
    Node->CachedMessages = Messages;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenDeepSeekChatAsync::Activate()
{
    TWeakObjectPtr<UGenDeepSeekChatAsync> WeakThis(this);
    UGenCompatChat::SendDeepSeekRequest(CachedMessages, CachedSettings,
        FOnCompatChatCompleteNative::CreateLambda(
            [WeakThis](const FGenChatResponse& R, bool bOK)
            {
                if (!WeakThis.IsValid()) return;
                if (bOK) WeakThis->OnComplete.Broadcast(R, true);
                else     WeakThis->OnFailure.Broadcast(R, false);
                WeakThis->SetReadyToDestroy();
            }));
}

void UGenDeepSeekChatAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint: Mistral
// ─────────────────────────────────────────────────────────────────────────────

UGenMistralChatAsync* UGenMistralChatAsync::RequestMistralChatCompletion(
    UObject* WorldContextObject,
    const TArray<FGenChatMessage>& Messages,
    const FGenMistralChatSettings& Settings)
{
    UGenMistralChatAsync* Node = NewObject<UGenMistralChatAsync>(WorldContextObject);
    Node->CachedMessages = Messages;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenMistralChatAsync::Activate()
{
    TWeakObjectPtr<UGenMistralChatAsync> WeakThis(this);
    UGenCompatChat::SendMistralRequest(CachedMessages, CachedSettings,
        FOnCompatChatCompleteNative::CreateLambda(
            [WeakThis](const FGenChatResponse& R, bool bOK)
            {
                if (!WeakThis.IsValid()) return;
                if (bOK) WeakThis->OnComplete.Broadcast(R, true);
                else     WeakThis->OnFailure.Broadcast(R, false);
                WeakThis->SetReadyToDestroy();
            }));
}

void UGenMistralChatAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint: Generic Compatible
// ─────────────────────────────────────────────────────────────────────────────

UGenCompatChatAsync* UGenCompatChatAsync::RequestCompatChatCompletion(
    UObject* WorldContextObject,
    const TArray<FGenChatMessage>& Messages,
    const FGenOAIChatSettings& Settings,
    const FString& BaseUrl,
    const FString& ApiKey)
{
    UGenCompatChatAsync* Node = NewObject<UGenCompatChatAsync>(WorldContextObject);
    Node->CachedMessages = Messages;
    Node->CachedSettings = Settings;
    Node->CachedBaseUrl = BaseUrl;
    Node->CachedApiKey = ApiKey;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenCompatChatAsync::Activate()
{
    TWeakObjectPtr<UGenCompatChatAsync> WeakThis(this);
    UGenCompatChat::SendCompatRequest(CachedMessages, CachedSettings,
        CachedBaseUrl, CachedApiKey,
        FOnCompatChatCompleteNative::CreateLambda(
            [WeakThis](const FGenChatResponse& R, bool bOK)
            {
                if (!WeakThis.IsValid()) return;
                if (bOK) WeakThis->OnComplete.Broadcast(R, true);
                else     WeakThis->OnFailure.Broadcast(R, false);
                WeakThis->SetReadyToDestroy();
            }));
}

void UGenCompatChatAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Internal Streaming Helper
// ─────────────────────────────────────────────────────────────────────────────

struct FCompatStreamState
{
    FString LeftoverBuffer;
    FString AccumulatedContent;
    bool bDone = false;
    FOnCompatStreamDeltaNative Callback;
};

static TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> SendStreamToEndpoint(
    const FString& Endpoint,
    const FString& ApiKey,
    const FString& Body,
    const FString& ProviderName,
    FOnCompatStreamDeltaNative OnDelta)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + ApiKey);
    Request->SetContentAsString(Body);

    TSharedPtr<FCompatStreamState> State = MakeShared<FCompatStreamState>();
    State->Callback = OnDelta;

    TSharedPtr<int32> ProcessedBytes = MakeShared<int32>(0);

    Request->OnRequestProgress64().BindLambda(
        [State, ProcessedBytes](FHttpRequestPtr Req, uint64 /*Sent*/, uint64 /*Received*/)
        {
            if (State->bDone || !Req.IsValid()) return;
            if (!Req->GetResponse().IsValid()) return;

            const FString FullSoFar = Req->GetResponse()->GetContentAsString();
            if (FullSoFar.Len() <= *ProcessedBytes) return;

            FString NewData = FullSoFar.Mid(*ProcessedBytes);
            *ProcessedBytes = FullSoFar.Len();

            State->LeftoverBuffer += NewData;

            TArray<FString> Lines;
            State->LeftoverBuffer.ParseIntoArrayLines(Lines, false);

            bool bEndsWithNewline = State->LeftoverBuffer.EndsWith(TEXT("\n"));
            if (!bEndsWithNewline && Lines.Num() > 0)
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
                if (FGenAIUtils::ParseOAIStreamChunk(Trimmed, Delta))
                {
                    Delta.ContentAccumulated = State->AccumulatedContent + Delta.ContentDelta;
                    State->AccumulatedContent = Delta.ContentAccumulated;

                    if (Delta.bIsDone) State->bDone = true;
                    State->Callback.ExecuteIfBound(Delta, true);
                }
            }
        });

    Request->OnProcessRequestComplete().BindLambda(
        [State, ProviderName](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid() || Response->GetResponseCode() != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][%s Stream] Request failed."), *ProviderName);
                State->Callback.ExecuteIfBound(FGenStreamDelta(), false);
                return;
            }

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

void UGenCompatChat::SendDeepSeekRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenDeepSeekChatSettings& Settings,
    FOnCompatChatCompleteNative OnComplete)
{
    const FString ApiKey = FGenAIUtils::GetDeepSeekKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][DeepSeek] API key not set."));
        OnComplete.ExecuteIfBound(FGenChatResponse(), false);
        return;
    }

    const FString ModelId = Settings.ModelString.IsEmpty()
        ? FGenAIUtils::DeepSeekModelToString(Settings.Model)
        : Settings.ModelString;

    const FString Body = BuildCompatBody(Messages, ModelId,
        Settings.SystemPrompt, Settings.Temperature, Settings.MaxTokens);
    const FString Endpoint = TEXT("https://api.deepseek.com/v1/chat/completions");

    SendToEndpoint(Endpoint, ApiKey, Body, TEXT("DeepSeek"), OnComplete);
}

TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> UGenCompatChat::SendStreamDeepSeekRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenDeepSeekChatSettings& Settings,
    FOnCompatStreamDeltaNative OnDelta)
{
    const FString ApiKey = FGenAIUtils::GetDeepSeekKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty()) return nullptr;

    const FString ModelId = Settings.ModelString.IsEmpty()
        ? FGenAIUtils::DeepSeekModelToString(Settings.Model)
        : Settings.ModelString;

    const FString Body = BuildCompatBody(Messages, ModelId,
        Settings.SystemPrompt, Settings.Temperature, Settings.MaxTokens, true);
    const FString Endpoint = TEXT("https://api.deepseek.com/v1/chat/completions");

    return SendStreamToEndpoint(Endpoint, ApiKey, Body, TEXT("DeepSeek"), OnDelta);
}

void UGenCompatChat::SendMistralRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenMistralChatSettings& Settings,
    FOnCompatChatCompleteNative OnComplete)
{
    const FString ApiKey = FGenAIUtils::GetMistralKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][Mistral] API key not set."));
        OnComplete.ExecuteIfBound(FGenChatResponse(), false);
        return;
    }

    const FString ModelId = Settings.ModelString.IsEmpty()
        ? FGenAIUtils::MistralModelToString(Settings.Model)
        : Settings.ModelString;

    const FString Body = BuildCompatBody(Messages, ModelId,
        Settings.SystemPrompt, Settings.Temperature, Settings.MaxTokens);
    const FString Endpoint = TEXT("https://api.mistral.ai/v1/chat/completions");

    SendToEndpoint(Endpoint, ApiKey, Body, TEXT("Mistral"), OnComplete);
}

TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> UGenCompatChat::SendStreamMistralRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenMistralChatSettings& Settings,
    FOnCompatStreamDeltaNative OnDelta)
{
    const FString ApiKey = FGenAIUtils::GetMistralKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty()) return nullptr;

    const FString ModelId = Settings.ModelString.IsEmpty()
        ? FGenAIUtils::MistralModelToString(Settings.Model)
        : Settings.ModelString;

    const FString Body = BuildCompatBody(Messages, ModelId,
        Settings.SystemPrompt, Settings.Temperature, Settings.MaxTokens, true);
    const FString Endpoint = TEXT("https://api.mistral.ai/v1/chat/completions");

    return SendStreamToEndpoint(Endpoint, ApiKey, Body, TEXT("Mistral"), OnDelta);
}

void UGenCompatChat::SendCompatRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenOAIChatSettings& Settings,
    const FString& BaseUrl,
    const FString& ApiKey,
    FOnCompatChatCompleteNative OnComplete)
{
    const FString ModelId = FGenAIUtils::ResolveOAIModel(Settings);
    const FString Body = BuildCompatBody(Messages, ModelId,
        Settings.SystemPrompt, Settings.Temperature, Settings.MaxTokens);
    const FString Endpoint = BaseUrl + TEXT("/chat/completions");

    SendToEndpoint(Endpoint, ApiKey, Body, TEXT("CompatProvider"), OnComplete);
}

TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> UGenCompatChat::SendStreamCompatRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenOAIChatSettings& Settings,
    const FString& BaseUrl,
    const FString& ApiKey,
    FOnCompatStreamDeltaNative OnDelta)
{
    const FString ModelId = FGenAIUtils::ResolveOAIModel(Settings);
    const FString Body = BuildCompatBody(Messages, ModelId,
        Settings.SystemPrompt, Settings.Temperature, Settings.MaxTokens, true);
    const FString Endpoint = BaseUrl + TEXT("/chat/completions");

    return SendStreamToEndpoint(Endpoint, ApiKey, Body, TEXT("CompatProvider"), OnDelta);
}
