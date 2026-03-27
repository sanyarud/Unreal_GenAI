// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "Interfaces/IHttpRequest.h"
#include "GenAITypes.h"
#include "GenOAIModels.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOAIModelsComplete,
    const TArray<FGenModelInfo>&, Models,
    bool, bSuccess);

/**
 * Blueprint async node: Request Get All OpenAI Models
 *
 * Fetches the list of available models from the OpenAI API in real-time.
 */
UCLASS(meta = (HideThen = true))
class UU_GENAI_API UGenOAIModelsAsync : public UCancellableAsyncAction
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnOAIModelsComplete OnComplete;

    UPROPERTY(BlueprintAssignable)
    FOnOAIModelsComplete OnFailure;

    UFUNCTION(BlueprintCallable,
        meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
                DisplayName = "Request Get All OpenAI Models",
                Keywords = "openai models list available"),
        Category = "GenAI|OpenAI")
    static UGenOAIModelsAsync* RequestGetAllOpenAIModels(
        UObject* WorldContextObject,
        const FString& ApiKeyOverride);

    virtual void Activate() override;
    virtual void Cancel() override;

private:
    FString CachedApiKeyOverride;
    TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest;
};

// ─────────────────────────────────────────────────────────────────────────────
//  C++ Static API
// ─────────────────────────────────────────────────────────────────────────────

DECLARE_DELEGATE_TwoParams(FOnOAIModelsCompleteNative,
    const TArray<FGenModelInfo>& /*Models*/,
    bool /*bSuccess*/);

UCLASS()
class UU_GENAI_API UGenOAIModels : public UObject
{
    GENERATED_BODY()

public:
    static void SendListModelsRequest(
        const FString& ApiKeyOverride,
        FOnOAIModelsCompleteNative OnComplete);
};
