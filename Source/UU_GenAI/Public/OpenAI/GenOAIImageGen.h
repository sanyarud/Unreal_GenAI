// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenOAIImageGen.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOAIImageComplete,
    const TArray<FGenImageResult>&, Results,
    bool, bSuccess);

/**
 * Blueprint async node: Request OpenAI Image Generation
 *
 * Generates images using DALL-E 2, DALL-E 3, or gpt-image-1.
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenOAIImageGenAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnOAIImageComplete OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnOAIImageComplete OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request OpenAI Image Generation",
                Keywords = "openai dalle image generation ai art"),
        Category = "GenAI|OpenAI")
    static UGenOAIImageGenAsync* RequestOpenAIImageGeneration(
        UObject* WorldContextObject,
        const FString& Prompt,
        const FGenOAIImageSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    FString CachedPrompt;
    FGenOAIImageSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

/**
 * Blueprint async node: Request OpenAI Image Edit
 *
 * Edit or extend an existing image using DALL-E.
 * Requires a base image and optional mask (both as RGBA PNG bytes).
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenOAIImageEditAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnOAIImageComplete OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnOAIImageComplete OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request OpenAI Image Edit",
                Keywords = "openai dalle image edit inpaint"),
        Category = "GenAI|OpenAI")
    static UGenOAIImageEditAsync* RequestOpenAIImageEdit(
        UObject* WorldContextObject,
        const FString& Prompt,
        const TArray<uint8>& ImagePngData,
        const TArray<uint8>& MaskPngData,
        const FGenOAIImageSettings& Settings);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    FString CachedPrompt;
    TArray<uint8> CachedImage;
    TArray<uint8> CachedMask;
    FGenOAIImageSettings CachedSettings;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

// ─────────────────────────────────────────────────────────────────────────────
//  C++ Static API
// ─────────────────────────────────────────────────────────────────────────────

DECLARE_DELEGATE_TwoParams(FOnOAIImageCompleteNative,
    const TArray<FGenImageResult>& /*Results*/,
    bool /*bSuccess*/);

UCLASS()
class UU_GENAI_API UGenOAIImageGen : public UObject
{
    GENERATED_BODY()

public:
    static void SendImageGenerationRequest(
        const FString& Prompt,
        const FGenOAIImageSettings& Settings,
        FOnOAIImageCompleteNative OnComplete);

    static void SendImageEditRequest(
        const FString& Prompt,
        const TArray<uint8>& ImagePngData,
        const TArray<uint8>& MaskPngData,
        const FGenOAIImageSettings& Settings,
        FOnOAIImageCompleteNative OnComplete);
};
