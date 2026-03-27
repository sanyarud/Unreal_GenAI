// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenAnthropicChat.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnthropicChatComplete,
    const FGenChatResponse&, Response,
    bool, bSuccess);

/**
 * Blueprint async node: Request Anthropic Chat Completion
 *
 * Sends a message to the Anthropic Claude API (Messages API).
 * Supports vision, tool use, and extended thinking.
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenAnthropicChatAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnAnthropicChatComplete OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnAnthropicChatComplete OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request Anthropic Chat Completion",
                Keywords = "anthropic claude chat ai llm completion"),
        Category = "GenAI|Anthropic")
    static UGenAnthropicChatAsync* RequestAnthropicChatCompletion(
        UObject* WorldContextObject,
        const TArray<FGenChatMessage>& Messages,
        const FGenAnthropicChatSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    TArray<FGenChatMessage> CachedMessages;
    FGenAnthropicChatSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

// ─────────────────────────────────────────────────────────────────────────────
//  C++ Static API
// ─────────────────────────────────────────────────────────────────────────────

DECLARE_DELEGATE_TwoParams(FOnAnthropicChatCompleteNative,
    const FGenChatResponse& /*Response*/,
    bool /*bSuccess*/);

UCLASS()
class UU_GENAI_API UGenAnthropicChat : public UObject
{
    GENERATED_BODY()

public:
    static void SendChatRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenAnthropicChatSettings& Settings,
        FOnAnthropicChatCompleteNative OnComplete);
};
