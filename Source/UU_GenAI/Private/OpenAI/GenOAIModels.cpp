// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "OpenAI/GenOAIModels.h"
#include "GenAIUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint async node
// ─────────────────────────────────────────────────────────────────────────────

UGenOAIModelsAsync* UGenOAIModelsAsync::RequestGetAllOpenAIModels(
    UObject* WorldContextObject,
    const FString& ApiKeyOverride)
{
    UGenOAIModelsAsync* Node = NewObject<UGenOAIModelsAsync>(WorldContextObject);
    Node->CachedApiKeyOverride = ApiKeyOverride;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenOAIModelsAsync::Activate()
{
    TWeakObjectPtr<UGenOAIModelsAsync> WeakThis(this);
    UGenOAIModels::SendListModelsRequest(CachedApiKeyOverride,
        FOnOAIModelsCompleteNative::CreateLambda(
            [WeakThis](const TArray<FGenModelInfo>& Models, bool bSuccess)
            {
                if (!WeakThis.IsValid()) return;
                if (bSuccess) WeakThis->OnComplete.Broadcast(Models, true);
                else          WeakThis->OnFailure.Broadcast(Models, false);
                WeakThis->SetReadyToDestroy();
            }));
}

void UGenOAIModelsAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static implementation
// ─────────────────────────────────────────────────────────────────────────────

void UGenOAIModels::SendListModelsRequest(
    const FString& ApiKeyOverride,
    FOnOAIModelsCompleteNative OnComplete)
{
    const FString ApiKey = FGenAIUtils::GetOpenAIKey(ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Models] API key not set."));
        OnComplete.ExecuteIfBound(TArray<FGenModelInfo>(), false);
        return;
    }

    const FString BaseUrl = FGenAIUtils::GetOpenAIBaseUrl();
    const FString Endpoint = BaseUrl + TEXT("/models");

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("GET"));
    Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + ApiKey);

    Request->OnProcessRequestComplete().BindLambda(
        [OnComplete](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                OnComplete.ExecuteIfBound(TArray<FGenModelInfo>(), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Models] HTTP %d"), Code);
                OnComplete.ExecuteIfBound(TArray<FGenModelInfo>(), false);
                return;
            }

            TArray<FGenModelInfo> Models;
            TSharedPtr<FJsonObject> Root = FGenAIUtils::ParseJsonString(Response->GetContentAsString());
            if (!Root.IsValid())
            {
                OnComplete.ExecuteIfBound(Models, false);
                return;
            }

            const TArray<TSharedPtr<FJsonValue>>* DataArr;
            if (Root->TryGetArrayField(TEXT("data"), DataArr))
            {
                for (const TSharedPtr<FJsonValue>& Val : *DataArr)
                {
                    const TSharedPtr<FJsonObject>* ObjPtr;
                    if (!Val->TryGetObject(ObjPtr)) continue;

                    FGenModelInfo Info;
                    (*ObjPtr)->TryGetStringField(TEXT("id"), Info.Id);
                    (*ObjPtr)->TryGetStringField(TEXT("owned_by"), Info.OwnedBy);

                    double Created = 0.0;
                    if ((*ObjPtr)->TryGetNumberField(TEXT("created"), Created))
                        Info.Created = (int64)Created;

                    Models.Add(Info);
                }
            }

            // Sort alphabetically by ID
            Models.Sort([](const FGenModelInfo& A, const FGenModelInfo& B)
            {
                return A.Id < B.Id;
            });

            OnComplete.ExecuteIfBound(Models, true);
        });

    Request->ProcessRequest();
}
