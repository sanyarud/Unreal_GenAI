// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "Google/GenGoogleChat.h"
#include "GenAIUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

static const FString GoogleBaseUrl = TEXT("https://generativelanguage.googleapis.com/v1beta/models");

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint: Chat
// ─────────────────────────────────────────────────────────────────────────────

UGenGoogleChatAsync* UGenGoogleChatAsync::RequestGoogleChatCompletion(
    UObject* WorldContextObject,
    const TArray<FGenChatMessage>& Messages,
    const FGenGoogleChatSettings& Settings)
{
    UGenGoogleChatAsync* Node = NewObject<UGenGoogleChatAsync>(WorldContextObject);
    Node->CachedMessages = Messages;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenGoogleChatAsync::Activate()
{
    TWeakObjectPtr<UGenGoogleChatAsync> WeakThis(this);
    UGenGoogleChat::SendChatRequest(CachedMessages, CachedSettings,
        FOnGoogleChatCompleteNative::CreateLambda(
            [WeakThis](const FGenChatResponse& Response, bool bSuccess)
            {
                if (!WeakThis.IsValid()) return;
                if (bSuccess) WeakThis->OnComplete.Broadcast(Response, true);
                else          WeakThis->OnFailure.Broadcast(Response, false);
                WeakThis->SetReadyToDestroy();
            }));
}

void UGenGoogleChatAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Blueprint: Stream
// ─────────────────────────────────────────────────────────────────────────────

UGenGoogleChatStreamAsync* UGenGoogleChatStreamAsync::RequestGoogleChatStream(
    UObject* WorldContextObject,
    const TArray<FGenChatMessage>& Messages,
    const FGenGoogleChatSettings& Settings)
{
    UGenGoogleChatStreamAsync* Node = NewObject<UGenGoogleChatStreamAsync>(WorldContextObject);
    Node->CachedMessages = Messages;
    Node->CachedSettings = Settings;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UGenGoogleChatStreamAsync::Activate()
{
    TWeakObjectPtr<UGenGoogleChatStreamAsync> WeakThis(this);
    HttpRequest = UGenGoogleChat::SendStreamChatRequest(
        CachedMessages, CachedSettings,
        FOnGoogleStreamDeltaNative::CreateLambda(
            [WeakThis](const FGenStreamDelta& Delta, bool bSuccess)
            {
                if (!WeakThis.IsValid()) return;
                if (!bSuccess) { WeakThis->OnFailure.Broadcast(Delta, false); WeakThis->SetReadyToDestroy(); return; }
                WeakThis->OnDelta.Broadcast(Delta, true);
                if (Delta.bIsDone) { WeakThis->OnComplete.Broadcast(Delta, true); WeakThis->SetReadyToDestroy(); }
            }));
}

void UGenGoogleChatStreamAsync::Cancel()
{
    if (HttpRequest.IsValid()) HttpRequest->CancelRequest();
    Super::Cancel();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Body builder
// ─────────────────────────────────────────────────────────────────────────────

static FString BuildGoogleBody(
    const TArray<FGenChatMessage>& Messages,
    const FGenGoogleChatSettings& Settings,
    bool bStream)
{
    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();

    Root->SetArrayField(TEXT("contents"), FGenAIUtils::BuildGeminiContents(Messages));

    // System instruction (Gemini 1.5+)
    FString SystemText = Settings.SystemInstruction;
    if (SystemText.IsEmpty())
    {
        for (const FGenChatMessage& Msg : Messages)
        {
            if (Msg.Role == EGenChatRole::System) { SystemText = Msg.Content; break; }
        }
    }
    if (!SystemText.IsEmpty())
    {
        TSharedPtr<FJsonObject> SysObj = MakeShared<FJsonObject>();
        TArray<TSharedPtr<FJsonValue>> Parts;
        TSharedPtr<FJsonObject> Part = MakeShared<FJsonObject>();
        Part->SetStringField(TEXT("text"), SystemText);
        Parts.Add(MakeShared<FJsonValueObject>(Part));
        SysObj->SetArrayField(TEXT("parts"), Parts);
        Root->SetObjectField(TEXT("system_instruction"), SysObj);
    }

    // Generation config
    TSharedPtr<FJsonObject> Config = MakeShared<FJsonObject>();
    Config->SetNumberField(TEXT("temperature"), Settings.Temperature);
    Config->SetNumberField(TEXT("maxOutputTokens"), Settings.MaxOutputTokens);
    if (Settings.TopP > 0.0f) Config->SetNumberField(TEXT("topP"), Settings.TopP);
    if (Settings.TopK > 0)    Config->SetNumberField(TEXT("topK"), Settings.TopK);
    Root->SetObjectField(TEXT("generationConfig"), Config);

    // Tools
    if (Settings.Tools.Num() > 0)
    {
        TSharedPtr<FJsonObject> ToolsObj = MakeShared<FJsonObject>();
        TArray<TSharedPtr<FJsonValue>> FunctionDecls;
        for (const FGenTool& Tool : Settings.Tools)
        {
            TSharedPtr<FJsonObject> Decl = MakeShared<FJsonObject>();
            Decl->SetStringField(TEXT("name"), Tool.Function.Name);
            Decl->SetStringField(TEXT("description"), Tool.Function.Description);
            if (!Tool.Function.ParametersJsonSchema.IsEmpty())
            {
                TSharedPtr<FJsonObject> Params = FGenAIUtils::ParseJsonString(Tool.Function.ParametersJsonSchema);
                if (Params.IsValid()) Decl->SetObjectField(TEXT("parameters"), Params);
            }
            FunctionDecls.Add(MakeShared<FJsonValueObject>(Decl));
        }
        ToolsObj->SetArrayField(TEXT("function_declarations"), FunctionDecls);

        TArray<TSharedPtr<FJsonValue>> ToolsArr;
        ToolsArr.Add(MakeShared<FJsonValueObject>(ToolsObj));
        Root->SetArrayField(TEXT("tools"), ToolsArr);
    }

    FString Body;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
    FJsonSerializer::Serialize(Root.ToSharedRef(), Writer);
    return Body;
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static: Chat
// ─────────────────────────────────────────────────────────────────────────────

void UGenGoogleChat::SendChatRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenGoogleChatSettings& Settings,
    FOnGoogleChatCompleteNative OnComplete)
{
    const FString ApiKey = FGenAIUtils::GetGoogleKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][Google] API key not set."));
        OnComplete.ExecuteIfBound(FGenChatResponse(), false);
        return;
    }

    const FString ModelId = FGenAIUtils::ResolveGoogleModel(Settings);
    const FString Endpoint = FString::Printf(
        TEXT("%s/%s:generateContent?key=%s"), *GoogleBaseUrl, *ModelId, *ApiKey);

    const FString Body = BuildGoogleBody(Messages, Settings, false);
    FGenAIUtils::LogRequest(TEXT("Google"), Endpoint, Body);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetContentAsString(Body);

    Request->OnProcessRequestComplete().BindLambda(
        [OnComplete](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][Google] Network error."));
                OnComplete.ExecuteIfBound(FGenChatResponse(), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            const FString ResponseStr = Response->GetContentAsString();
            FGenAIUtils::LogResponse(TEXT("Google"), Code, ResponseStr);

            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][Google] HTTP %d: %s"), Code, *ResponseStr);
                OnComplete.ExecuteIfBound(FGenChatResponse(), false);
                return;
            }

            OnComplete.ExecuteIfBound(FGenAIUtils::ParseGoogleChatResponse(ResponseStr), true);
        });

    Request->ProcessRequest();
}

// ─────────────────────────────────────────────────────────────────────────────
//  C++ static: Stream
// ─────────────────────────────────────────────────────────────────────────────

struct FGoogleStreamState
{
    FString AccumulatedContent;
    bool bDone = false;
    FOnGoogleStreamDeltaNative Callback;
};

TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> UGenGoogleChat::SendStreamChatRequest(
    const TArray<FGenChatMessage>& Messages,
    const FGenGoogleChatSettings& Settings,
    FOnGoogleStreamDeltaNative OnDelta)
{
    const FString ApiKey = FGenAIUtils::GetGoogleKey(Settings.ApiKeyOverride);
    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][Google Stream] API key not set."));
        OnDelta.ExecuteIfBound(FGenStreamDelta(), false);
        return nullptr;
    }

    const FString ModelId = FGenAIUtils::ResolveGoogleModel(Settings);
    const FString Endpoint = FString::Printf(
        TEXT("%s/%s:streamGenerateContent?alt=sse&key=%s"), *GoogleBaseUrl, *ModelId, *ApiKey);

    const FString Body = BuildGoogleBody(Messages, Settings, true);
    FGenAIUtils::LogRequest(TEXT("Google Stream"), Endpoint, Body);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Endpoint);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetContentAsString(Body);

    TSharedPtr<FGoogleStreamState> State = MakeShared<FGoogleStreamState>();
    State->Callback = OnDelta;
    TSharedPtr<int32> ProcessedBytesPtr = MakeShared<int32>(0);

    Request->OnRequestProgress64().BindLambda(
        [State, ProcessedBytesPtr](FHttpRequestPtr Req, uint64 /*Sent*/, uint64 /*Received*/)
        {
            if (State->bDone || !Req.IsValid() || !Req->GetResponse().IsValid()) return;

            const FString FullSoFar = Req->GetResponse()->GetContentAsString();
            if (FullSoFar.Len() <= *ProcessedBytesPtr) return;

            FString NewData = FullSoFar.Mid(*ProcessedBytesPtr);
            *ProcessedBytesPtr = FullSoFar.Len();

            TArray<FString> Lines;
            NewData.ParseIntoArrayLines(Lines, false);

            for (const FString& Line : Lines)
            {
                FString Trimmed = Line.TrimStartAndEnd();
                if (!Trimmed.StartsWith(TEXT("data: "))) continue;

                FString DataStr = Trimmed.Mid(6);

                FGenStreamDelta Delta;
                if (FGenAIUtils::ParseGoogleStreamChunk(DataStr, Delta))
                {
                    Delta.ContentAccumulated = State->AccumulatedContent + Delta.ContentDelta;
                    State->AccumulatedContent = Delta.ContentAccumulated;

                    if (Delta.bIsDone) State->bDone = true;
                    State->Callback.ExecuteIfBound(Delta, true);
                }
            }
        });

    Request->OnProcessRequestComplete().BindLambda(
        [State](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                State->Callback.ExecuteIfBound(FGenStreamDelta(), false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][Google Stream] HTTP %d"), Code);
                State->Callback.ExecuteIfBound(FGenStreamDelta(), false);
                return;
            }

            if (!State->bDone)
            {
                FGenStreamDelta FinalDelta;
                FinalDelta.bIsDone = true;
                FinalDelta.ContentAccumulated = State->AccumulatedContent;
                FinalDelta.FinishReason = EGenFinishReason::Stop;
                State->Callback.ExecuteIfBound(FinalDelta, true);
            }
        });

    Request->ProcessRequest();
    return Request;
}
