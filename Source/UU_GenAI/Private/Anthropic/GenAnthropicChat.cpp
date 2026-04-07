// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "Anthropic/GenAnthropicChat.h"
#include "GenAISettings.h"
#include "GenAIUtils.h"
#include "GenAIOAuth.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

#ifndef ANTHROPIC_BASE_URL
#define ANTHROPIC_BASE_URL TEXT("https://api.anthropic.com/v1")
#endif

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint async node
// ─────────────────────────────────────────────────────────────────────────────

UGenAnthropicChatAsync* UGenAnthropicChatAsync::RequestAnthropicChatCompletion(
    UObject* WorldContextObject,
    const TArray<FGenChatMessage>& Messages,
    const FGenAnthropicChatSettings& Settings)
{
    UGenAnthropicChatAsync* Node = NewObject<UGenAnthropicChatAsync>(WorldContextObject);
    Node->CachedMessages = Messages;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenAnthropicChatAsync::Activate()
{
    TWeakObjectPtr<UGenAnthropicChatAsync> WeakThis(this);
    UGenAnthropicChat::SendChatRequest(CachedMessages, CachedSettings,
        FOnAnthropicChatCompleteNative::CreateLambda(
            [WeakThis](const FGenChatResponse& Response, bool bSuccess)
            {
                if (!WeakThis.IsValid()) return;
                if (bSuccess) WeakThis->OnComplete.Broadcast(Response, true);
                else          WeakThis->OnFailure.Broadcast(Response, false);
                WeakThis->SetReadyToDestroy();
            }));
}

void UGenAnthropicChatAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Body builder
// ─────────────────────────────────────────────────────────────────────────────

static FString BuildAnthropicBody(
    const TArray<FGenChatMessage>& Messages,
    const FGenAnthropicChatSettings& Settings)
{
    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();

    Root->SetStringField(TEXT("model"), FGenAIUtils::ResolveAnthropicModel(Settings));
    Root->SetNumberField(TEXT("max_tokens"), Settings.MaxTokens);

    // Extract system prompt — either from Settings or from a System role message
    FString SystemText = Settings.SystemPrompt;
    if (SystemText.IsEmpty())
    {
        for (const FGenChatMessage& Msg : Messages)
        {
            if (Msg.Role == EGenChatRole::System)
            {
                SystemText = Msg.Content;
                break;
            }
        }
    }
    if (!SystemText.IsEmpty())
    {
        Root->SetStringField(TEXT("system"), SystemText);
    }

    Root->SetArrayField(TEXT("messages"), FGenAIUtils::BuildAnthropicMessages(Messages));

    if (Settings.Temperature != 1.0f)
        Root->SetNumberField(TEXT("temperature"), Settings.Temperature);
    if (Settings.TopP != 1.0f)
        Root->SetNumberField(TEXT("top_p"), Settings.TopP);
    if (Settings.TopK > 0)
        Root->SetNumberField(TEXT("top_k"), Settings.TopK);

    if (Settings.Tools.Num() > 0)
    {
        Root->SetArrayField(TEXT("tools"), FGenAIUtils::BuildAnthropicTools(Settings.Tools));

        TSharedPtr<FJsonObject> ToolChoice = MakeShared<FJsonObject>();
        switch (Settings.ToolChoice)
        {
        case EGenToolChoice::None:
            ToolChoice->SetStringField(TEXT("type"), TEXT("none"));
            break;
        case EGenToolChoice::Required:
            ToolChoice->SetStringField(TEXT("type"), TEXT("any"));
            break;
        default:
            ToolChoice->SetStringField(TEXT("type"), TEXT("auto"));
            break;
        }
        Root->SetObjectField(TEXT("tool_choice"), ToolChoice);
    }

    Root->SetBoolField(TEXT("stream"), false);

    FString Body;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
    FJsonSerializer::Serialize(Root.ToSharedRef(), Writer);
    return Body;
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static implementation
// ─────────────────────────────────────────────────────────────────────────────

void UGenAnthropicChat::SendChatRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenAnthropicChatSettings& Settings,
    FOnAnthropicChatCompleteNative OnComplete)
{
    // Try OAuth token first, fall back to API key
    FString ApiKey = FGenAIUtils::GetAnthropicKey(Settings.ApiKeyOverride);
    const bool bUseOAuth = ApiKey.IsEmpty() && FGenAIOAuth::Get().IsLoggedIn();

    if (ApiKey.IsEmpty() && !bUseOAuth)
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][Anthropic] API key not set and not logged in via OAuth."));
        OnComplete.ExecuteIfBound(FGenChatResponse(), false);
        return;
    }

    const FString Endpoint = FString(ANTHROPIC_BASE_URL) + TEXT("/messages");
    const FString Body = BuildAnthropicBody(Messages, Settings);

    FGenAIUtils::LogRequest(TEXT("Anthropic"), Endpoint, Body);

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

    Request->OnProcessRequestComplete().BindLambda(
        [OnComplete](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][Anthropic] Network error."));
                OnComplete.ExecuteIfBound(FGenChatResponse(), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            const FString ResponseStr = Response->GetContentAsString();
            FGenAIUtils::LogResponse(TEXT("Anthropic"), Code, ResponseStr);

            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][Anthropic] HTTP %d: %s"), Code, *ResponseStr);
                OnComplete.ExecuteIfBound(FGenChatResponse(), false);
                return;
            }

            OnComplete.ExecuteIfBound(FGenAIUtils::ParseAnthropicChatResponse(ResponseStr), true);
        });

    Request->ProcessRequest();
}
