// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenCompatChat.generated.h"

/**
 * OpenAI-compatible providers (DeepSeek, Mistral, Groq, Together, etc.)
 * These use the same /chat/completions endpoint format as OpenAI,
 * but with a different base URL and API key.
 */

// ─── DeepSeek ─────────────────────────────────────────────────────────────────

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeepSeekChatComplete,
    const FGenChatResponse&, Response,
    bool, bSuccess);

UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenDeepSeekChatAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnDeepSeekChatComplete OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnDeepSeekChatComplete OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request DeepSeek Chat Completion",
                Keywords = "deepseek chat ai llm"),
        Category = "GenAI|DeepSeek")
    static UGenDeepSeekChatAsync* RequestDeepSeekChatCompletion(
        UObject* WorldContextObject,
        const TArray<FGenChatMessage>& Messages,
        const FGenDeepSeekChatSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    TArray<FGenChatMessage> CachedMessages;
    FGenDeepSeekChatSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

// ─── Mistral ─────────────────────────────────────────────────────────────────

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMistralChatComplete,
    const FGenChatResponse&, Response,
    bool, bSuccess);

UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenMistralChatAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnMistralChatComplete OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnMistralChatComplete OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request Mistral Chat Completion",
                Keywords = "mistral mixtral chat ai llm"),
        Category = "GenAI|Mistral")
    static UGenMistralChatAsync* RequestMistralChatCompletion(
        UObject* WorldContextObject,
        const TArray<FGenChatMessage>& Messages,
        const FGenMistralChatSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    TArray<FGenChatMessage> CachedMessages;
    FGenMistralChatSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

/**
 * Generic OpenAI-compatible provider.
 * Set BaseUrl to any endpoint that follows the /chat/completions spec.
 * Examples: Groq (api.groq.com/openai/v1), Together AI, Ollama (localhost:11434/v1), etc.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCompatChatComplete,
    const FGenChatResponse&, Response,
    bool, bSuccess);

UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenCompatChatAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnCompatChatComplete OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnCompatChatComplete OnFailure;

    /**
     * Send a chat completion to any OpenAI-compatible endpoint.
     *
     * @param BaseUrl   Base URL of the endpoint, e.g. "https://api.groq.com/openai/v1"
     * @param ApiKey    API key for this provider
     * @param ModelId   Model identifier string
     */
    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request OpenAI-Compatible Chat Completion",
                Keywords = "compatible openai groq together ollama chat ai"),
        Category = "GenAI|Compatible")
    static UGenCompatChatAsync* RequestCompatChatCompletion(
        UObject* WorldContextObject,
        const TArray<FGenChatMessage>& Messages,
        const FGenOAIChatSettings& Settings,
        const FString& BaseUrl,
        const FString& ApiKey);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    TArray<FGenChatMessage> CachedMessages;
    FGenOAIChatSettings CachedSettings;
    FString CachedBaseUrl;
    FString CachedApiKey;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

// ─────────────────────────────────────────────────────────────────────────────
//  C++ Static
// ─────────────────────────────────────────────────────────────────────────────

DECLARE_DELEGATE_TwoParams(FOnCompatChatCompleteNative, const FGenChatResponse&, bool);
DECLARE_DELEGATE_TwoParams(FOnCompatStreamDeltaNative, const FGenStreamDelta&, bool);

UCLASS()
class UU_GENAI_API UGenCompatChat : public UObject
{
    GENERATED_BODY()

public:
    /** Send to DeepSeek (https://api.deepseek.com/v1) */
    static void SendDeepSeekRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenDeepSeekChatSettings& Settings,
        FOnCompatChatCompleteNative OnComplete);

    /** Stream from DeepSeek */
    static TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> SendStreamDeepSeekRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenDeepSeekChatSettings& Settings,
        FOnCompatStreamDeltaNative OnDelta);

    /** Send to Mistral (https://api.mistral.ai/v1) */
    static void SendMistralRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenMistralChatSettings& Settings,
        FOnCompatChatCompleteNative OnComplete);

    /** Stream from Mistral */
    static TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> SendStreamMistralRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenMistralChatSettings& Settings,
        FOnCompatStreamDeltaNative OnDelta);

    /** Send to any OpenAI-compatible endpoint */
    static void SendCompatRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenOAIChatSettings& Settings,
        const FString& BaseUrl,
        const FString& ApiKey,
        FOnCompatChatCompleteNative OnComplete);

    /** Stream from any OpenAI-compatible endpoint */
    static TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> SendStreamCompatRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenOAIChatSettings& Settings,
        const FString& BaseUrl,
        const FString& ApiKey,
        FOnCompatStreamDeltaNative OnDelta);
};
