// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenGoogleTTS.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGoogleTTSComplete,
    const TArray<uint8>&, AudioData,
    const FString&, AudioEncoding,
    bool, bSuccess);

/**
 * Blueprint async node: Request Google Text To Speech
 *
 * Converts text to audio using Google Cloud Text-to-Speech.
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenGoogleTTSAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnGoogleTTSComplete OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnGoogleTTSComplete OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request Google Text To Speech",
                Keywords = "google tts text speech audio"),
        Category = "GenAI|Google")
    static UGenGoogleTTSAsync* RequestGoogleTextToSpeech(
        UObject* WorldContextObject,
        const FString& InputText,
        const FGenGoogleTTSSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    FString CachedText;
    FGenGoogleTTSSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

// ─────────────────────────────────────────────────────────────────────────────
//  C++ Static API
// ─────────────────────────────────────────────────────────────────────────────

DECLARE_DELEGATE_ThreeParams(FOnGoogleTTSCompleteNative,
    const TArray<uint8>& /*AudioData*/,
    const FString& /*AudioEncoding*/,
    bool /*bSuccess*/);

UCLASS()
class UU_GENAI_API UGenGoogleTTS : public UObject
{
    GENERATED_BODY()

public:
    static void SendTextToSpeechRequest(
        const FString& InputText,
        const FGenGoogleTTSSettings& Settings,
        FOnGoogleTTSCompleteNative OnComplete);
};
