// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "Google/GenGoogleTTS.h"
#include "GenAIUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"
#include "Misc/Base64.h"

static const FString GoogleTTSUrl = TEXT("https://texttospeech.googleapis.com/v1/text:synthesize");

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint async node
// ─────────────────────────────────────────────────────────────────────────────

UGenGoogleTTSAsync* UGenGoogleTTSAsync::RequestGoogleTextToSpeech(
    UObject* WorldContextObject,
    const FString& InputText,
    const FGenGoogleTTSSettings& Settings)
{
    UGenGoogleTTSAsync* Node = NewObject<UGenGoogleTTSAsync>(WorldContextObject);
    Node->CachedText = InputText;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenGoogleTTSAsync::Activate()
{
    TWeakObjectPtr<UGenGoogleTTSAsync> WeakThis(this);
    UGenGoogleTTS::SendTextToSpeechRequest(CachedText, CachedSettings,
        FOnGoogleTTSCompleteNative::CreateLambda(
            [WeakThis](const TArray<uint8>& Audio, const FString& Encoding, bool bSuccess)
            {
                if (!WeakThis.IsValid()) return;
                if (bSuccess) WeakThis->OnComplete.Broadcast(Audio, Encoding, true);
                else          WeakThis->OnFailure.Broadcast(Audio, Encoding, false);
                WeakThis->SetReadyToDestroy();
            }));
}

void UGenGoogleTTSAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static implementation
// ─────────────────────────────────────────────────────────────────────────────

void UGenGoogleTTS::SendTextToSpeechRequest(
    const FString& InputText,
    const FGenGoogleTTSSettings& Settings,
    FOnGoogleTTSCompleteNative OnComplete)
{
    const FString ApiKey = FGenAIUtils::GetGoogleKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][Google TTS] API key not set."));
        OnComplete.ExecuteIfBound(TArray<uint8>(), TEXT(""), false);
        return;
    }

    const FString Endpoint = GoogleTTSUrl + TEXT("?key=") + ApiKey;

    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();

    // Input
    TSharedPtr<FJsonObject> Input = MakeShared<FJsonObject>();
    Input->SetStringField(TEXT("text"), InputText);
    Root->SetObjectField(TEXT("input"), Input);

    // Voice
    TSharedPtr<FJsonObject> Voice = MakeShared<FJsonObject>();
    Voice->SetStringField(TEXT("languageCode"), Settings.LanguageCode);
    Voice->SetStringField(TEXT("name"),
        FGenAIUtils::GoogleTTSVoiceToString(Settings.Voice, Settings.VoiceString));
    Root->SetObjectField(TEXT("voice"), Voice);

    // Audio config
    TSharedPtr<FJsonObject> AudioConfig = MakeShared<FJsonObject>();
    AudioConfig->SetStringField(TEXT("audioEncoding"), Settings.AudioEncoding);
    AudioConfig->SetNumberField(TEXT("speakingRate"), Settings.SpeakingRate);
    AudioConfig->SetNumberField(TEXT("pitch"), Settings.Pitch);
    Root->SetObjectField(TEXT("audioConfig"), AudioConfig);

    FString Body;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
    FJsonSerializer::Serialize(Root.ToSharedRef(), Writer);

    FGenAIUtils::LogRequest(TEXT("Google TTS"), Endpoint, Body);

    const FString AudioEncoding = Settings.AudioEncoding;

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetContentAsString(Body);

    Request->OnProcessRequestComplete().BindLambda(
        [OnComplete, AudioEncoding](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                OnComplete.ExecuteIfBound(TArray<uint8>(), TEXT(""), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            const FString ResponseStr = Response->GetContentAsString();

            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][Google TTS] HTTP %d: %s"), Code, *ResponseStr);
                OnComplete.ExecuteIfBound(TArray<uint8>(), TEXT(""), false);
                return;
            }

            TSharedPtr<FJsonObject> Root = FGenAIUtils::ParseJsonString(ResponseStr);
            if (!Root.IsValid())
            {
                OnComplete.ExecuteIfBound(TArray<uint8>(), TEXT(""), false);
                return;
            }

            FString AudioContent;
            Root->TryGetStringField(TEXT("audioContent"), AudioContent);

            TArray<uint8> AudioBytes;
            FBase64::Decode(AudioContent, AudioBytes);

            OnComplete.ExecuteIfBound(AudioBytes, AudioEncoding, true);
        });

    Request->ProcessRequest();
}
