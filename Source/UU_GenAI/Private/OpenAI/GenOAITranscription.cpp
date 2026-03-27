// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "OpenAI/GenOAITranscription.h"
#include "GenAIUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint async node
// ─────────────────────────────────────────────────────────────────────────────

UGenOAITranscriptionAsync* UGenOAITranscriptionAsync::RequestOpenAITranscription(
    UObject* WorldContextObject,
    const TArray<uint8>& AudioData,
    const FString& Filename,
    const FGenOAITranscriptionSettings& Settings)
{
    UGenOAITranscriptionAsync* Node = NewObject<UGenOAITranscriptionAsync>(WorldContextObject);
    Node->CachedAudio = AudioData;
    Node->CachedFilename = Filename;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenOAITranscriptionAsync::Activate()
{
    TWeakObjectPtr<UGenOAITranscriptionAsync> WeakThis(this);

    UGenOAITranscription::SendTranscriptionRequest(
        CachedAudio, CachedFilename, CachedSettings,
        FOnOAITranscriptionCompleteNative::CreateLambda(
            [WeakThis](const FString& Text, const FString& Language, bool bSuccess)
            {
                if (!WeakThis.IsValid()) return;
                if (bSuccess)
                    WeakThis->OnComplete.Broadcast(Text, Language, true);
                else
                    WeakThis->OnFailure.Broadcast(Text, Language, false);
                WeakThis->SetReadyToDestroy();
            }));
}

void UGenOAITranscriptionAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static implementation — multipart/form-data upload
// ─────────────────────────────────────────────────────────────────────────────

void UGenOAITranscription::SendTranscriptionRequest(
    const TArray<uint8>& AudioData,
    const FString& Filename,
    const FGenOAITranscriptionSettings& Settings,
    FOnOAITranscriptionCompleteNative OnComplete)
{
    const FString ApiKey = FGenAIUtils::GetOpenAIKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Transcription] API key not set."));
        OnComplete.ExecuteIfBound(TEXT(""), TEXT(""), false);
        return;
    }

    if (AudioData.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Transcription] AudioData is empty."));
        OnComplete.ExecuteIfBound(TEXT(""), TEXT(""), false);
        return;
    }

    const FString BaseUrl = FGenAIUtils::GetOpenAIBaseUrl();
    const FString Endpoint = BaseUrl + TEXT("/audio/transcriptions");

    // Build multipart/form-data body
    const FString Boundary = TEXT("----GenAIBoundary7MA4YWxkTrZu0gW");
    const FString CRLF = TEXT("\r\n");

    TArray<uint8> Body;
    auto AppendStr = [&Body](const FString& Str)
    {
        FTCHARToUTF8 Conv(*Str);
        Body.Append((const uint8*)Conv.Get(), Conv.Length());
    };

    // file field
    AppendStr(TEXT("--") + Boundary + CRLF);
    AppendStr(FString::Printf(TEXT("Content-Disposition: form-data; name=\"file\"; filename=\"%s\"\r\n"), *Filename));
    AppendStr(TEXT("Content-Type: application/octet-stream") + CRLF + CRLF);
    Body.Append(AudioData);
    AppendStr(CRLF);

    // model field
    AppendStr(TEXT("--") + Boundary + CRLF);
    AppendStr(TEXT("Content-Disposition: form-data; name=\"model\"") + CRLF + CRLF);
    AppendStr(Settings.Model + CRLF);

    if (!Settings.Language.IsEmpty())
    {
        AppendStr(TEXT("--") + Boundary + CRLF);
        AppendStr(TEXT("Content-Disposition: form-data; name=\"language\"") + CRLF + CRLF);
        AppendStr(Settings.Language + CRLF);
    }

    if (!Settings.Prompt.IsEmpty())
    {
        AppendStr(TEXT("--") + Boundary + CRLF);
        AppendStr(TEXT("Content-Disposition: form-data; name=\"prompt\"") + CRLF + CRLF);
        AppendStr(Settings.Prompt + CRLF);
    }

    // response_format: verbose_json gives us language
    AppendStr(TEXT("--") + Boundary + CRLF);
    AppendStr(TEXT("Content-Disposition: form-data; name=\"response_format\"") + CRLF + CRLF);
    AppendStr(TEXT("verbose_json") + CRLF);

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
                OnComplete.ExecuteIfBound(TEXT(""), TEXT(""), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            const FString ResponseStr = Response->GetContentAsString();

            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI Transcription] HTTP %d: %s"),
                    Code, *ResponseStr);
                OnComplete.ExecuteIfBound(TEXT(""), TEXT(""), false);
                return;
            }

            TSharedPtr<FJsonObject> Root = FGenAIUtils::ParseJsonString(ResponseStr);
            FString Text, Language;
            if (Root.IsValid())
            {
                Root->TryGetStringField(TEXT("text"), Text);
                Root->TryGetStringField(TEXT("language"), Language);
            }

            OnComplete.ExecuteIfBound(Text, Language, true);
        });

    Request->ProcessRequest();
}
