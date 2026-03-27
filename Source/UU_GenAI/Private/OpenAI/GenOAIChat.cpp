// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "OpenAI/GenOAIChat.h"
#include "GenAIUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint async node
// ─────────────────────────────────────────────────────────────────────────────

UGenOAIChatAsync* UGenOAIChatAsync::RequestOpenAIChatCompletion(
    UObject* WorldContextObject,
    const TArray<FGenChatMessage>& Messages,
    const FGenOAIChatSettings& Settings)
{
    UGenOAIChatAsync* Node = NewObject<UGenOAIChatAsync>(WorldContextObject);
    Node->CachedMessages = Messages;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenOAIChatAsync::Activate()
{
    TWeakObjectPtr<UGenOAIChatAsync> WeakThis(this);

    UGenOAIChat::SendChatRequest(CachedMessages, CachedSettings,
        FOnOAIChatCompleteNative::CreateLambda(
            [WeakThis](const FGenChatResponse& Response, bool bSuccess)
            {
                if (!WeakThis.IsValid()) return;

                if (bSuccess)
                    WeakThis->OnComplete.Broadcast(Response, true);
                else
                    WeakThis->OnFailure.Broadcast(Response, false);

                WeakThis->SetReadyToDestroy();
            }));
}

void UGenOAIChatAsync::Cancel()
{
    if (HttpRequest.IsValid())
    {
        HttpRequest->CancelRequest();
    }
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static implementation
// ─────────────────────────────────────────────────────────────────────────────

static FString BuildOAIChatBody(
    const TArray<FGenChatMessage>& Messages,
    const FGenOAIChatSettings& Settings)
{
    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();

    Root->SetStringField(TEXT("model"), FGenAIUtils::ResolveOAIModel(Settings));
    Root->SetArrayField(TEXT("messages"),
        FGenAIUtils::BuildOAIMessages(Messages, Settings.SystemPrompt));
    Root->SetNumberField(TEXT("temperature"), Settings.Temperature);
    Root->SetNumberField(TEXT("max_tokens"), Settings.MaxTokens);

    if (Settings.TopP != 1.0f)
        Root->SetNumberField(TEXT("top_p"), Settings.TopP);
    if (Settings.FrequencyPenalty != 0.0f)
        Root->SetNumberField(TEXT("frequency_penalty"), Settings.FrequencyPenalty);
    if (Settings.PresencePenalty != 0.0f)
        Root->SetNumberField(TEXT("presence_penalty"), Settings.PresencePenalty);
    if (Settings.Seed != 0)
        Root->SetNumberField(TEXT("seed"), Settings.Seed);

    if (Settings.Stop.Num() > 0)
    {
        TArray<TSharedPtr<FJsonValue>> StopArr;
        for (const FString& S : Settings.Stop)
            StopArr.Add(MakeShared<FJsonValueString>(S));
        Root->SetArrayField(TEXT("stop"), StopArr);
    }

    if (Settings.Tools.Num() > 0)
    {
        Root->SetArrayField(TEXT("tools"), FGenAIUtils::BuildOAITools(Settings.Tools));
        Root->SetStringField(TEXT("tool_choice"),
            FGenAIUtils::ToolChoiceToString(Settings.ToolChoice));
    }

    if (Settings.bStructuredOutput && !Settings.StructuredOutputSchema.IsEmpty())
    {
        TSharedPtr<FJsonObject> RF = MakeShared<FJsonObject>();
        RF->SetStringField(TEXT("type"), TEXT("json_schema"));

        TSharedPtr<FJsonObject> Schema = MakeShared<FJsonObject>();
        Schema->SetStringField(TEXT("name"), Settings.StructuredOutputName);
        Schema->SetBoolField(TEXT("strict"), true);

        TSharedPtr<FJsonObject> SchemaObj = FGenAIUtils::ParseJsonString(Settings.StructuredOutputSchema);
        if (SchemaObj.IsValid())
            Schema->SetObjectField(TEXT("schema"), SchemaObj);

        RF->SetObjectField(TEXT("json_schema"), Schema);
        Root->SetObjectField(TEXT("response_format"), RF);
    }

    Root->SetBoolField(TEXT("stream"), false);

    FString Body;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
    FJsonSerializer::Serialize(Root.ToSharedRef(), Writer);
    return Body;
}

void UGenOAIChat::SendChatRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenOAIChatSettings& Settings,
    FOnOAIChatCompleteNative OnComplete)
{
    const FString ApiKey = FGenAIUtils::GetOpenAIKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI] API key is not set. Configure it in Project Settings > Plugins > GenAI Plugin."));
        OnComplete.ExecuteIfBound(FGenChatResponse(), false);
        return;
    }

    const FString BaseUrl = FGenAIUtils::GetOpenAIBaseUrl();
    const FString Endpoint = BaseUrl + TEXT("/chat/completions");
    const FString Body = BuildOAIChatBody(Messages, Settings);

    FGenAIUtils::LogRequest(TEXT("OpenAI"), Endpoint, Body);

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
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI] Network error or no response."));
                OnComplete.ExecuteIfBound(FGenChatResponse(), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            const FString ResponseStr = Response->GetContentAsString();
            FGenAIUtils::LogResponse(TEXT("OpenAI"), Code, ResponseStr);

            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OpenAI] HTTP %d: %s"), Code, *ResponseStr);
                OnComplete.ExecuteIfBound(FGenChatResponse(), false);
                return;
            }

            FGenChatResponse ParsedResponse = FGenAIUtils::ParseOAIChatResponse(ResponseStr);
            OnComplete.ExecuteIfBound(ParsedResponse, true);
        });

    Request->ProcessRequest();
}
