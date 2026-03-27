// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenOAIChatStream.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOAIStreamDelta,
    const FGenStreamDelta&, Delta,
    bool, bSuccess);

/**
 * Blueprint async node: Request OpenAI Chat Stream
 *
 * Streams token-by-token output from OpenAI using Server-Sent Events (SSE).
 * OnDelta fires for each incremental token. OnComplete fires when streaming ends.
 *
 * Usage (Blueprint):
 *   [RequestOpenAIChatStream] → OnDelta(Delta, bSuccess)   ← fires per token
 *                             → OnComplete(Delta, bSuccess) ← fires once at end
 *                             → OnFailure(Delta, bSuccess)  ← fires on error
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenOAIChatStreamAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    /** Fires for every token delta received */
    UPROPERTY(BlueprintAssignable)
    FOnOAIStreamDelta OnDelta;

    /** Fires once the stream is complete */
    UPROPERTY(BlueprintAssignable)
    FOnOAIStreamDelta OnComplete;

    /** Fires on error */
    UPROPERTY(BlueprintAssignable)
    FOnOAIStreamDelta OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request OpenAI Chat Stream",
                Keywords = "openai gpt stream chat ai llm streaming"),
        Category = "GenAI|OpenAI")
    static UGenOAIChatStreamAsync* RequestOpenAIChatStream(
        UObject* WorldContextObject,
        const TArray<FGenChatMessage>& Messages,
        const FGenOAIChatSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    TArray<FGenChatMessage> CachedMessages;
    FGenOAIChatSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;

    FString AccumulatedContent;
    FString LeftoverBuffer; // Incomplete SSE line buffer

    void OnRequestProgress(FHttpRequestPtr Request, uint64 BytesSent, uint64 BytesReceived);
    void OnRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnected);
    void ProcessSSEBuffer(const FString& NewData);
};

// ─────────────────────────────────────────────────────────────────────────────
//  C++ Static API
// ─────────────────────────────────────────────────────────────────────────────

DECLARE_DELEGATE_TwoParams(FOnOAIStreamDeltaNative,
    const FGenStreamDelta& /*Delta*/,
    bool /*bSuccess*/);

UCLASS()
class UU_GENAI_API UGenOAIChatStream : public UObject
{
    GENERATED_BODY()

public:
    /**
     * Stream a chat completion from OpenAI.
     * OnDelta is called on every token (bSuccess=true).
     * When bIsDone is true in Delta, streaming has finished.
     * OnDelta is called once more with bSuccess=false if an error occurs.
     */
    static TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> SendStreamChatRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenOAIChatSettings& Settings,
        FOnOAIStreamDeltaNative OnDelta);
};
