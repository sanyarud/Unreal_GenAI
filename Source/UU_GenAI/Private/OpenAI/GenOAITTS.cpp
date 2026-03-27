// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "OpenAI/GenOAITTS.h"
#include "GenAIUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint async node
// ─────────────────────────────────────────────────────────────────────────────

UGenOAITTSAsync* UGenOAITTSAsync::RequestOpenAITextToSpeech(
    UObject* WorldContextObject,
    const FString& InputText,
    const FGenOAITTSSettings& Settings)
{
    UGenOAITTSAsync* Node = NewObject<UGenOAITTSAsync>(WorldContextObject);
    Node->CachedText = InputText;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenOAITTSAsync::Activate()
{
    TWeakObjectPtr<UGenOAITTSAsync> WeakThis(this);

    UGenOAITTS::SendTextToSpeechRequest(CachedText, CachedSettings,
        FOnOAITTSCompleteNative::CreateLambda(
            [WeakThis](const TArray<uint8>& Audio, const FString& Format, bool bSuccess)
            {
                if (!WeakThis.IsValid()) return;
                if (bSuccess)
                    WeakThis->OnComplete.Broadcast(Audio, Format, true);
                else
                    WeakThis->OnFailure.Broadcast(Audio, Format, false);
                WeakThis->SetReadyToDestroy();
            }));
}

void UGenOAITTSAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static implementation
// ─────────────────────────────────────────────────────────────────────────────

void UGenOAITTS::SendTextToSpeechRequest(
    const FString& InputText,
    const FGenOAITTSSettings& Settings,
    FOnOAITTSCompleteNative OnComplete)
{
    const FString ApiKey = FGenAIUtils::GetOpenAIKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI TTS] API key not set."));
        OnComplete.ExecuteIfBound(TArray<uint8>(), TEXT(""), false);
        return;
    }

    const FString BaseUrl = FGenAIUtils::GetOpenAIBaseUrl();
    const FString Endpoint = BaseUrl + TEXT("/audio/speech");

    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();
    Root->SetStringField(TEXT("model"), FGenAIUtils::OAITTSModelToString(Settings.Model));
    Root->SetStringField(TEXT("input"), InputText);
    Root->SetStringField(TEXT("voice"), FGenAIUtils::OAITTSVoiceToString(Settings.Voice));
    Root->SetStringField(TEXT("response_format"), FGenAIUtils::OAIAudioFormatToString(Settings.ResponseFormat));
    Root->SetNumberField(TEXT("speed"), Settings.Speed);
    if (!Settings.Instructions.IsEmpty())
        Root->SetStringField(TEXT("instructions"), Settings.Instructions);

    FString Body;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
    FJsonSerializer::Serialize(Root.ToSharedRef(), Writer);

    FGenAIUtils::LogRequest(TEXT("OpenAI TTS"), Endpoint, Body);

    const FString AudioFormat = FGenAIUtils::OAIAudioFormatToString(Settings.ResponseFormat);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + ApiKey);
    Request->SetContentAsString(Body);

    Request->OnProcessRequestComplete().BindLambda(
        [OnComplete, AudioFormat](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI TTS] Network error."));
                OnComplete.ExecuteIfBound(TArray<uint8>(), TEXT(""), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI TTS] HTTP %d: %s"),
                    Code, *Response->GetContentAsString());
                OnComplete.ExecuteIfBound(TArray<uint8>(), TEXT(""), false);
                return;
            }

            OnComplete.ExecuteIfBound(Response->GetContent(), AudioFormat, true);
        });

    Request->ProcessRequest();
}
