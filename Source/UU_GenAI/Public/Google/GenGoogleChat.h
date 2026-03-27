// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenGoogleChat.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoogleChatComplete,
    const FGenChatResponse&, Response,
    bool, bSuccess);

/**
 * Blueprint async node: Request Google Gemini Chat Completion
 *
 * Sends a message to the Google Gemini API (generateContent).
 * Supports vision, system instructions, and function calling.
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenGoogleChatAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnGoogleChatComplete OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnGoogleChatComplete OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request Google Gemini Chat Completion",
                Keywords = "google gemini chat ai llm completion"),
        Category = "GenAI|Google")
    static UGenGoogleChatAsync* RequestGoogleChatCompletion(
        UObject* WorldContextObject,
        const TArray<FGenChatMessage>& Messages,
        const FGenGoogleChatSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    TArray<FGenChatMessage> CachedMessages;
    FGenGoogleChatSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

/**
 * Blueprint async node: Request Google Gemini Chat Stream
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoogleStreamDelta,
    const FGenStreamDelta&, Delta,
    bool, bSuccess);

UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenGoogleChatStreamAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnGoogleStreamDelta OnDelta;

    UPROPERTY(BlueprintAssignable)
    FOnGoogleStreamDelta OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnGoogleStreamDelta OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request Google Gemini Chat Stream",
                Keywords = "google gemini stream chat ai"),
        Category = "GenAI|Google")
    static UGenGoogleChatStreamAsync* RequestGoogleChatStream(
        UObject* WorldContextObject,
        const TArray<FGenChatMessage>& Messages,
        const FGenGoogleChatSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    TArray<FGenChatMessage> CachedMessages;
    FGenGoogleChatSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

// ─────────────────────────────────────────────────────────────────────────────
//  C++ Static API
// ─────────────────────────────────────────────────────────────────────────────

DECLARE_DELEGATE_TwoParams(FOnGoogleChatCompleteNative,
    const FGenChatResponse& /*Response*/,
    bool /*bSuccess*/);

DECLARE_DELEGATE_TwoParams(FOnGoogleStreamDeltaNative,
    const FGenStreamDelta& /*Delta*/,
    bool /*bSuccess*/);

UCLASS()
class UU_GENAI_API UGenGoogleChat : public UObject
{
    GENERATED_BODY()

public:
    static void SendChatRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenGoogleChatSettings& Settings,
        FOnGoogleChatCompleteNative OnComplete);

    static TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> SendStreamChatRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenGoogleChatSettings& Settings,
        FOnGoogleStreamDeltaNative OnDelta);
};
