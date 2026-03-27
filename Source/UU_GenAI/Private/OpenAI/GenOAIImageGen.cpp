// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "OpenAI/GenOAIImageGen.h"
#include "GenAIUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint: Image Generation
// ─────────────────────────────────────────────────────────────────────────────

UGenOAIImageGenAsync* UGenOAIImageGenAsync::RequestOpenAIImageGeneration(
    UObject* WorldContextObject,
    const FString& Prompt,
    const FGenOAIImageSettings& Settings)
{
    UGenOAIImageGenAsync* Node = NewObject<UGenOAIImageGenAsync>(WorldContextObject);
    Node->CachedPrompt = Prompt;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenOAIImageGenAsync::Activate()
{
    TWeakObjectPtr<UGenOAIImageGenAsync> WeakThis(this);
    UGenOAIImageGen::SendImageGenerationRequest(CachedPrompt, CachedSettings,
        FOnOAIImageCompleteNative::CreateLambda(
            [WeakThis](const TArray<FGenImageResult>& Results, bool bSuccess)
            {
                if (!WeakThis.IsValid()) return;
                if (bSuccess) WeakThis->OnComplete.Broadcast(Results, true);
                else          WeakThis->OnFailure.Broadcast(Results, false);
                WeakThis->SetReadyToDestroy();
            }));
}

void UGenOAIImageGenAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint: Image Edit
// ─────────────────────────────────────────────────────────────────────────────

UGenOAIImageEditAsync* UGenOAIImageEditAsync::RequestOpenAIImageEdit(
    UObject* WorldContextObject,
    const FString& Prompt,
    const TArray<uint8>& ImagePngData,
    const TArray<uint8>& MaskPngData,
    const FGenOAIImageSettings& Settings)
{
    UGenOAIImageEditAsync* Node = NewObject<UGenOAIImageEditAsync>(WorldContextObject);
    Node->CachedPrompt = Prompt;
    Node->CachedImage = ImagePngData;
    Node->CachedMask = MaskPngData;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenOAIImageEditAsync::Activate()
{
    TWeakObjectPtr<UGenOAIImageEditAsync> WeakThis(this);
    UGenOAIImageGen::SendImageEditRequest(
        CachedPrompt, CachedImage, CachedMask, CachedSettings,
        FOnOAIImageCompleteNative::CreateLambda(
            [WeakThis](const TArray<FGenImageResult>& Results, bool bSuccess)
            {
                if (!WeakThis.IsValid()) return;
                if (bSuccess) WeakThis->OnComplete.Broadcast(Results, true);
                else          WeakThis->OnFailure.Broadcast(Results, false);
                WeakThis->SetReadyToDestroy();
            }));
}

void UGenOAIImageEditAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Shared response parser
// ─────────────────────────────────────────────────────────────────────────────

static TArray<FGenImageResult> ParseImageResponse(const FString& JsonString)
{
    TArray<FGenImageResult> Results;
    TSharedPtr<FJsonObject> Root = FGenAIUtils::ParseJsonString(JsonString);
    if (!Root.IsValid()) return Results;

    const TArray<TSharedPtr<FJsonValue>>* DataArr;
    if (!Root->TryGetArrayField(TEXT("data"), DataArr)) return Results;

    for (const TSharedPtr<FJsonValue>& Val : *DataArr)
    {
        const TSharedPtr<FJsonObject>* ObjPtr;
        if (!Val->TryGetObject(ObjPtr)) continue;

        FGenImageResult Result;
        (*ObjPtr)->TryGetStringField(TEXT("url"), Result.Url);
        (*ObjPtr)->TryGetStringField(TEXT("b64_json"), Result.B64Json);
        (*ObjPtr)->TryGetStringField(TEXT("revised_prompt"), Result.RevisedPrompt);
        Results.Add(Result);
    }

    return Results;
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static: Image Generation
// ─────────────────────────────────────────────────────────────────────────────

void UGenOAIImageGen::SendImageGenerationRequest(
    const FString& Prompt,
    const FGenOAIImageSettings& Settings,
    FOnOAIImageCompleteNative OnComplete)
{
    const FString ApiKey = FGenAIUtils::GetOpenAIKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Image] API key not set."));
        OnComplete.ExecuteIfBound(TArray<FGenImageResult>(), false);
        return;
    }

    const FString BaseUrl = FGenAIUtils::GetOpenAIBaseUrl();
    const FString Endpoint = BaseUrl + TEXT("/images/generations");

    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();
    Root->SetStringField(TEXT("model"), FGenAIUtils::OAIImageModelToString(Settings.Model));
    Root->SetStringField(TEXT("prompt"), Prompt);
    Root->SetStringField(TEXT("size"), FGenAIUtils::OAIImageSizeToString(Settings.Size));
    Root->SetStringField(TEXT("response_format"), FGenAIUtils::OAIImageResponseFormatToString(Settings.ResponseFormat));
    Root->SetNumberField(TEXT("n"), Settings.N);

    if (Settings.Model == EGenOAIImageModel::DallE_3)
    {
        Root->SetStringField(TEXT("quality"), FGenAIUtils::OAIImageQualityToString(Settings.Quality));
        Root->SetStringField(TEXT("style"), FGenAIUtils::OAIImageStyleToString(Settings.Style));
    }

    FString Body;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
    FJsonSerializer::Serialize(Root.ToSharedRef(), Writer);

    FGenAIUtils::LogRequest(TEXT("OpenAI Image"), Endpoint, Body);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + ApiKey);
    Request->SetContentAsString(Body);

    Request->OnProcessRequestComplete().BindLambda(
        [OnComplete](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                OnComplete.ExecuteIfBound(TArray<FGenImageResult>(), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            const FString ResponseStr = Response->GetContentAsString();

            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Image] HTTP %d: %s"), Code, *ResponseStr);
                OnComplete.ExecuteIfBound(TArray<FGenImageResult>(), false);
                return;
            }

            OnComplete.ExecuteIfBound(ParseImageResponse(ResponseStr), true);
        });

    Request->ProcessRequest();
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static: Image Edit
// ─────────────────────────────────────────────────────────────────────────────

void UGenOAIImageGen::SendImageEditRequest(
    const FString& Prompt,
    const TArray<uint8>& ImagePngData,
    const TArray<uint8>& MaskPngData,
    const FGenOAIImageSettings& Settings,
    FOnOAIImageCompleteNative OnComplete)
{
    const FString ApiKey = FGenAIUtils::GetOpenAIKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Image Edit] API key not set."));
        OnComplete.ExecuteIfBound(TArray<FGenImageResult>(), false);
        return;
    }

    const FString BaseUrl = FGenAIUtils::GetOpenAIBaseUrl();
    const FString Endpoint = BaseUrl + TEXT("/images/edits");

    const FString Boundary = TEXT("----GenAIBoundary9QXwZpLmNdKr3hT");
    const FString CRLF = TEXT("\r\n");

    TArray<uint8> Body;
    auto AppendStr = [&Body](const FString& Str)
    {
        FTCHARToUTF8 Conv(*Str);
        Body.Append((const uint8*)Conv.Get(), Conv.Length());
    };

    // image
    AppendStr(TEXT("--") + Boundary + CRLF);
    AppendStr(TEXT("Content-Disposition: form-data; name=\"image\"; filename=\"image.png\"") + CRLF);
    AppendStr(TEXT("Content-Type: image/png") + CRLF + CRLF);
    Body.Append(ImagePngData);
    AppendStr(CRLF);

    // mask
    if (MaskPngData.Num() > 0)
    {
        AppendStr(TEXT("--") + Boundary + CRLF);
        AppendStr(TEXT("Content-Disposition: form-data; name=\"mask\"; filename=\"mask.png\"") + CRLF);
        AppendStr(TEXT("Content-Type: image/png") + CRLF + CRLF);
        Body.Append(MaskPngData);
        AppendStr(CRLF);
    }

    // prompt
    AppendStr(TEXT("--") + Boundary + CRLF);
    AppendStr(TEXT("Content-Disposition: form-data; name=\"prompt\"") + CRLF + CRLF);
    AppendStr(Prompt + CRLF);

    // n
    AppendStr(TEXT("--") + Boundary + CRLF);
    AppendStr(TEXT("Content-Disposition: form-data; name=\"n\"") + CRLF + CRLF);
    AppendStr(FString::FromInt(Settings.N) + CRLF);

    // size
    AppendStr(TEXT("--") + Boundary + CRLF);
    AppendStr(TEXT("Content-Disposition: form-data; name=\"size\"") + CRLF + CRLF);
    AppendStr(FGenAIUtils::OAIImageSizeToString(Settings.Size) + CRLF);

    AppendStr(TEXT("--") + Boundary + TEXT("--") + CRLF);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + ApiKey);
    Request->SetHeader(TEXT("Content-Type"),
        TEXT("multipart/form-data; boundary=") + Boundary);
    Request->SetContent(Body);

    Request->OnProcessRequestComplete().BindLambda(
        [OnComplete](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                OnComplete.ExecuteIfBound(TArray<FGenImageResult>(), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Image Edit] HTTP %d: %s"),
                    Code, *Response->GetContentAsString());
                OnComplete.ExecuteIfBound(TArray<FGenImageResult>(), false);
                return;
            }

            OnComplete.ExecuteIfBound(ParseImageResponse(Response->GetContentAsString()), true);
        });

    Request->ProcessRequest();
}
