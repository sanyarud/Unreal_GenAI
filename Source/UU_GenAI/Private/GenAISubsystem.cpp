// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "GenAISubsystem.h"
#include "GenAIEditorBridge.h"
#include "GenAISettings.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "JsonObjectConverter.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Async/Async.h"
#include "HAL/PlatformApplicationMisc.h"

#if WITH_EDITOR
#include "Editor.h"
#include "Selection.h"
#include "Exporters/Exporter.h"
#include "AssetRegistry/AssetRegistryModule.h"
#endif

void UGenAISubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    LoadSessions();
    if (Sessions.Num() == 0)
    {
        FGenAIChatSession NewSession;
        NewSession.Title = TEXT("Initial Chat");
        Sessions.Add(NewSession);
        CurrentSessionId = NewSession.SessionId;
    }
}

void UGenAISubsystem::Deinitialize()
{
    SaveSessions();
    Super::Deinitialize();
}

void UGenAISubsystem::LoadSessions()
{
    FString FilePath = FPaths::ProjectSavedDir() / TEXT("GenAI/Sessions.json");
    if (!IFileManager::Get().FileExists(*FilePath)) return;

    FString JsonString;
    if (FFileHelper::LoadFileToString(JsonString, *FilePath))
    {
        FJsonObjectConverter::JsonArrayStringToUStruct(JsonString, &Sessions, 0, 0);
        UE_LOG(LogTemp, Log, TEXT("GenAISubsystem: Loaded %d chat sessions."), Sessions.Num());
        if (Sessions.Num() > 0) CurrentSessionId = Sessions.Last().SessionId;
    }
}

void UGenAISubsystem::SaveSessions()
{
    FString FilePath = FPaths::ProjectSavedDir() / TEXT("GenAI/Sessions.json");
    
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    for (const FGenAIChatSession& Session : Sessions)
    {
        TSharedPtr<FJsonObject> SessionObj = FJsonObjectConverter::UStructToJsonObject(Session);
        if (SessionObj.IsValid())
            JsonArray.Add(MakeShareable(new FJsonValueObject(SessionObj.ToSharedRef())));
    }

    FString JsonString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
    if (FJsonSerializer::Serialize(JsonArray, Writer))
    {
        FFileHelper::SaveStringToFile(JsonString, *FilePath);
    }
}

void UGenAISubsystem::ClearAllHistory()
{
    Sessions.Empty();
    CurrentSessionId = TEXT("");
    FString FilePath = FPaths::ProjectSavedDir() / TEXT("GenAI/Sessions.json");
    IFileManager::Get().Delete(*FilePath);
}

FString UGenAISubsystem::ExecuteAITools(const FString& AIResponse)
{
    FString Summary;
    const FString StartTag = TEXT("<editor_tool_call>");
    const FString EndTag = TEXT("</editor_tool_call>");

    int32 StartPos = AIResponse.Find(StartTag);
    while (StartPos != INDEX_NONE)
    {
        int32 EndPos = AIResponse.Find(EndTag, ESearchCase::IgnoreCase, ESearchDir::FromStart, StartPos);
        if (EndPos != INDEX_NONE)
        {
            FString JsonBlock = AIResponse.Mid(StartPos + StartTag.Len(), EndPos - (StartPos + StartTag.Len()));
            FString Result = ProcessSingleToolCall(JsonBlock.TrimStartAndEnd());
            Summary += Result + TEXT("\n");
            ShowNotification(Result, Result.Contains(TEXT("Error")));
            StartPos = AIResponse.Find(StartTag, ESearchCase::IgnoreCase, ESearchDir::FromStart, EndPos);
        }
        else break;
    }
    return Summary;
}

FString UGenAISubsystem::ProcessSingleToolCall(const FString& JsonString)
{
#if WITH_EDITOR
    if (!GEditor) return TEXT("[Error: GEditor missing]");
    
    TSharedPtr<FJsonObject> Json;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    if (!FJsonSerializer::Deserialize(Reader, Json) || !Json.IsValid()) return TEXT("[Error: JSON parsing failed]");

    FString Action = Json->GetStringField(TEXT("action"));
    TSharedPtr<FJsonObject> Params = Json->GetObjectField(TEXT("params"));
    if (!Params.IsValid()) return TEXT("[Error: Missing 'params']");

    UGenAIEditorBridge* Bridge = GEditor->GetEditorSubsystem<UGenAIEditorBridge>();
    if (!Bridge) return TEXT("[Error: EditorBridge missing]");

    if (Action == TEXT("CreateAsset"))
    {
        FString Name = Params->GetStringField(TEXT("AssetName"));
        FString Path = Params->GetStringField(TEXT("PackagePath"));
        FString ClassName = Params->GetStringField(TEXT("ParentClass"));
        UClass* ParentClass = FindObject<UClass>(nullptr, *ClassName);
        UObject* Asset = Bridge->CreateEditorAsset(Name, Path, ParentClass);
        return Asset ? TEXT("Created asset: ") + Name : TEXT("Failed to create asset.");
    }
    else if (Action == TEXT("InjectT3D"))
    {
        FString AssetName = Params->GetStringField(TEXT("AssetName"));
        FString T3D = Params->GetStringField(TEXT("T3DText"));
        
        TArray<FAssetData> Assets;
        IAssetRegistry& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
        AssetRegistry.GetAssetsByClass(UBlueprint::StaticClass()->GetClassPathName(), Assets, true);
        
        for (const FAssetData& Data : Assets)
        {
            if (Data.AssetName.ToString() == AssetName)
            {
                UBlueprint* BP = Cast<UBlueprint>(Data.GetAsset());
                return Bridge->InjectT3DIntoGraph(BP, T3D) ? TEXT("Blueprint logic updated.") : TEXT("Injection failed.");
            }
        }
    }
    else if (Action == TEXT("AddComponent"))
    {
        FString AssetName = Params->GetStringField(TEXT("AssetName"));
        FString ClassName = Params->GetStringField(TEXT("ComponentClass"));
        
        TArray<FAssetData> Assets;
        IAssetRegistry& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
        AssetRegistry.GetAssetsByClass(UBlueprint::StaticClass()->GetClassPathName(), Assets, true);
        
        for (const FAssetData& Data : Assets)
        {
            if (Data.AssetName.ToString() == AssetName)
            {
                UBlueprint* BP = Cast<UBlueprint>(Data.GetAsset());
                UClass* CompClass = FindObject<UClass>(nullptr, *ClassName);
                if (!CompClass) CompClass = LoadObject<UClass>(nullptr, *ClassName);
                
                return Bridge->AddComponentToBlueprint(BP, CompClass) ? TEXT("Component added.") : TEXT("Failed to add component.");
            }
        }
    }
#endif
    return TEXT("Action '") + Action + TEXT("' executed (Status: Simulated)");
}

void UGenAISubsystem::ShowNotification(const FString& Message, bool bIsError)
{
    AsyncTask(ENamedThreads::GameThread, [Message, bIsError]()
    {
        FNotificationInfo Info(FText::FromString(Message));
        Info.bFireAndForget = true;
        Info.ExpireDuration = 4.0f;
        TSharedPtr<SNotificationItem> Notification = FSlateNotificationManager::Get().AddNotification(Info);
        if (Notification.IsValid())
            Notification->SetCompletionState(bIsError ? SNotificationItem::CS_Fail : SNotificationItem::CS_Success);
    });
}

FString UGenAISubsystem::GetActiveAssetContext()
{
#if WITH_EDITOR
    if (GEditor)
    {
        UObject* Target = nullptr;
        
        // Try getting current selection
        TArray<UObject*> Selected;
        GEditor->GetSelectedObjects()->GetSelectedObjects(Selected);
        if (Selected.Num() > 0) Target = Selected[0];

        if (Target)
        {
            FStringOutputDevice Ar;
            if (UExporter::ExportToOutputDevice(nullptr, Target, nullptr, Ar, TEXT("t3d"), 0, false, true))
            {
                FString Context = FString::Printf(TEXT("\n--- CONTEXT: ASSET '%s' ---\n%s\n--- END ---"), *Target->GetName(), *FString(Ar).Left(8000));
                
                // Also pull from clipboard if available
                FString SelectedText;
                FPlatformApplicationMisc::ClipboardPaste(SelectedText);
              if (!SelectedText.IsEmpty() && SelectedText.Len() < 5000)
              {
                  Context += FString::Printf(TEXT("\n\n--- TEXT SELECTION / CLIPBOARD ---\n%s\n--- END ---"), *SelectedText);
              }
                
                return Context;
            }
        }
    }
#endif
    return TEXT("");
}
