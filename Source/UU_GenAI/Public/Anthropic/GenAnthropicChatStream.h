// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenAnthropicChatStream.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnthropicStreamDelta,
    const FGenStreamDelta&, Delta,
    bool, bSuccess);

/**
 * Blueprint async node: Request Anthropic Chat Stream
 *
 * Streams token-by-token output from the Anthropic Claude API using SSE.
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenAnthropicChatStreamAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnAnthropicStreamDelta OnDelta;

    UPROPERTY(BlueprintAssignable)
    FOnAnthropicStreamDelta OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnAnthropicStreamDelta OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request Anthropic Chat Stream",
                Keywords = "anthropic claude stream chat ai llm streaming"),
        Category = "GenAI|Anthropic")
    static UGenAnthropicChatStreamAsync* RequestAnthropicChatStream(
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

DECLARE_DELEGATE_TwoParams(FOnAnthropicStreamDeltaNative,
    const FGenStreamDelta& /*Delta*/,
    bool /*bSuccess*/);

UCLASS()
class UU_GENAI_API UGenAnthropicChatStream : public UObject
{
    GENERATED_BODY()

public:
    static TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> SendStreamChatRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenAnthropicChatSettings& Settings,
        FOnAnthropicStreamDeltaNative OnDelta);
};
