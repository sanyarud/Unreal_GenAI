// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenOAITTS.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnOAITTSComplete,
    const TArray<uint8>&, AudioData,
    const FString&, AudioFormat,
    bool, bSuccess);

/**
 * Blueprint async node: Request OpenAI Text To Speech
 *
 * Converts text to audio using OpenAI TTS models (tts-1, tts-1-hd, gpt-4o-mini-tts).
 * Returns raw audio bytes that can be played back or saved to disk.
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenOAITTSAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnOAITTSComplete OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnOAITTSComplete OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request OpenAI Text To Speech",
                Keywords = "openai tts text speech audio voice"),
        Category = "GenAI|OpenAI")
    static UGenOAITTSAsync* RequestOpenAITextToSpeech(
        UObject* WorldContextObject,
        const FString& InputText,
        const FGenOAITTSSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    FString CachedText;
    FGenOAITTSSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

// ─────────────────────────────────────────────────────────────────────────────
//  C++ Static API
// ─────────────────────────────────────────────────────────────────────────────

DECLARE_DELEGATE_ThreeParams(FOnOAITTSCompleteNative,
    const TArray<uint8>& /*AudioData*/,
    const FString& /*AudioFormat*/,
    bool /*bSuccess*/);

UCLASS()
class UU_GENAI_API UGenOAITTS : public UObject
{
    GENERATED_BODY()

public:
    static void SendTextToSpeechRequest(
        const FString& InputText,
        const FGenOAITTSSettings& Settings,
        FOnOAITTSCompleteNative OnComplete);
};
