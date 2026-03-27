// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenOllamaChatStream.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOllamaStreamDelta,
    const FGenStreamDelta&, Delta,
    bool, bSuccess);

/**
 * Blueprint async node: Request Ollama Chat Stream
 *
 * Streams token-by-token output from a local Ollama instance.
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenOllamaChatStreamAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    /** Fires for every token delta received */
    UPROPERTY(BlueprintAssignable)
    FOnOllamaStreamDelta OnDelta;

    /** Fires once the stream is complete */
    UPROPERTY(BlueprintAssignable)
    FOnOllamaStreamDelta OnComplete;

    /** Fires on error */
    UPROPERTY(BlueprintAssignable)
    FOnOllamaStreamDelta OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request Ollama Chat Stream",
                Keywords = "ollama local stream chat ai llm streaming"),
        Category = "GenAI|Ollama")
    static UGenOllamaChatStreamAsync* RequestOllamaChatStream(
        UObject* WorldContextObject,
        const TArray<FGenChatMessage>& Messages,
        const FGenOllamaChatSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    TArray<FGenChatMessage> CachedMessages;
    FGenOllamaChatSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

// ─────────────────────────────────────────────────────────────────────────────
//  C++ Static API
// ─────────────────────────────────────────────────────────────────────────────

DECLARE_DELEGATE_TwoParams(FOnOllamaStreamDeltaNative,
    const FGenStreamDelta& /*Delta*/,
    bool /*bSuccess*/);

UCLASS()
class UU_GENAI_API UGenOllamaChatStream : public UObject
{
    GENERATED_BODY()

public:
    static TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> SendStreamChatRequest(
        const TArray<FGenChatMessage>& Messages,
        const FGenOllamaChatSettings& Settings,
        FOnOllamaStreamDeltaNative OnDelta);
};
