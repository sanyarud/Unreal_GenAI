// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenOAITranscription.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnOAITranscriptionComplete,
    const FString&, TranscribedText,
    const FString&, DetectedLanguage,
    bool, bSuccess);

/**
 * Blueprint async node: Request OpenAI Audio Transcription
 *
 * Transcribes audio to text using OpenAI Whisper.
 * Accepts raw audio bytes (WAV, MP3, M4A, FLAC, OGG, WEBM).
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenOAITranscriptionAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnOAITranscriptionComplete OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnOAITranscriptionComplete OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request OpenAI Audio Transcription",
                Keywords = "openai whisper transcription audio speech to text"),
        Category = "GenAI|OpenAI")
    static UGenOAITranscriptionAsync* RequestOpenAITranscription(
        UObject* WorldContextObject,
        const TArray<uint8>& AudioData,
        const FString& Filename,
        const FGenOAITranscriptionSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    TArray<uint8> CachedAudio;
    FString CachedFilename;
    FGenOAITranscriptionSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

// ─────────────────────────────────────────────────────────────────────────────
//  C++ Static API
// ─────────────────────────────────────────────────────────────────────────────

DECLARE_DELEGATE_ThreeParams(FOnOAITranscriptionCompleteNative,
    const FString& /*Text*/,
    const FString& /*Language*/,
    bool /*bSuccess*/);

UCLASS()
class UU_GENAI_API UGenOAITranscription : public UObject
{
    GENERATED_BODY()

public:
    static void SendTranscriptionRequest(
        const TArray<uint8>& AudioData,
        const FString& Filename,
        const FGenOAITranscriptionSettings& Settings,
        FOnOAITranscriptionCompleteNative OnComplete);
};
