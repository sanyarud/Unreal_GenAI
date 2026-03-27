// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenOAIChat.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOAIChatComplete,
    const FGenChatResponse&, Response,
    bool, bSuccess);

/**
 * Blueprint async node: Request OpenAI Chat Completion
 *
 * Sends a chat completion request to the OpenAI API (or any OpenAI-compatible endpoint).
 * Supports vision (multimodal), function/tool calling, and structured JSON output.
 *
 * Usage (Blueprint):
 *   [RequestOpenAIChatCompletion] → OnComplete(Response, bSuccess)
 *                                 → OnFailure(Response, bSuccess)
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenOAIChatAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    /** Fires when the request succeeds */
    UPROPERTY(BlueprintAssignable)
    FOnOAIChatComplete OnComplete;

    /** Fires when the request fails (network error, invalid key, etc.) */
    UPROPERTY(BlueprintAssignable)
    FOnOAIChatComplete OnFailure;

    /**
     * Send a chat completion request to OpenAI.
     *
     * @param Messages      Conversation history. The model enum in Settings determines which model is used.
     * @param Settings      Model configuration including temperature, max tokens, tools, etc.
     */
    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request OpenAI Chat Completion",
                Keywords = "openai gpt chat ai llm completion"),
        Category = "GenAI|OpenAI")
    static UGenOAIChatAsync* RequestOpenAIChatCompletion(
        UObject* WorldContextObject,
        const TArray<FGenChatMessage>& Messages,
        const FGenOAIChatSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    TArray<FGenChatMessage> CachedMessages;
    FGenOAIChatSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;

    void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
};

// ─────────────────────────────────────────────────────────────────────────────
//  C++ Static API
// ─────────────────────────────────────────────────────────────────────────────

DECLARE_DELEGATE_TwoParams(FOnOAIChatCompleteNative,
    const FGenChatResponse& /*Response*/,
    bool /*bSuccess*/);

/**
 * C++ static interface for OpenAI chat completions.
 *
 * Usage:
 *   TWeakObjectPtr<AMyActor> WeakThis(this);
 *   UGenOAIChat::SendChatRequest(Messages, Settings,
 *       FOnOAIChatCompleteNative::CreateLambda([WeakThis](const FGenChatResponse& R, bool bOK)
 *       {
 *           if (!WeakThis.IsValid()) return;
 *           // use R
 *       }));
 */
UCLASS()
class UU_GENAI_API UGenOAIChat : public UObject
{
    GENERATED_BODY()

public:
    static void SendChatRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenOAIChatSettings& Settings,
        FOnOAIChatCompleteNative OnComplete);
};
