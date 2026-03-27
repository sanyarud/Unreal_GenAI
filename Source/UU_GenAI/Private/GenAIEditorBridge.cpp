// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "GenAIEditorBridge.h"
#include "AssetToolsModule.h"
#include "IAssetTools.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/CompilerResultsLog.h"
#include "EdGraphUtilities.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Async/Async.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"
#include "Dom/JsonObject.h"
#include "UObject/Package.h"
#include "Components/ActorComponent.h"
#include "Engine/SCS_Node.h"
#include "Engine/SimpleConstructionScript.h"
#include "Engine/Blueprint.h"
#include "K2Node_Event.h"
#include "LevelEditorActions.h"

UObject* UGenAIEditorBridge::CreateEditorAsset(const FString& AssetName, const FString& PackagePath, TSubclassOf<UObject> ParentClass)
{
    if (!IsInGameThread())
    {
        UE_LOG(LogTemp, Error, TEXT("GenAIEditorBridge: CreateEditorAsset must be called on Main Game Thread."));
        return nullptr;
    }

    FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
    FString FullPackagePath = PackagePath / AssetName;
    
    UObject* ExistingAsset = StaticFindObject(nullptr, nullptr, *FullPackagePath);
    if (ExistingAsset) return ExistingAsset;

    UPackage* Package = CreatePackage(*FullPackagePath);
    if (!Package) return nullptr;

    UObject* NewAsset = nullptr;
    if (ParentClass && (ParentClass->IsChildOf(UBlueprint::StaticClass()) || ParentClass->IsChildOf(AActor::StaticClass())))
    {
        NewAsset = FKismetEditorUtilities::CreateBlueprint(
            ParentClass, 
            Package, 
            *AssetName, 
            BPTYPE_Normal, 
            UBlueprint::StaticClass(), 
            UBlueprintGeneratedClass::StaticClass()
        );
    }
    else
    {
        NewAsset = AssetToolsModule.Get().CreateAsset(AssetName, PackagePath, ParentClass, nullptr);
    }

    if (NewAsset)
    {
        NewAsset->MarkPackageDirty();
        FAssetRegistryModule::AssetCreated(NewAsset);
    }

    return NewAsset;
}

UActorComponent* UGenAIEditorBridge::AddComponentToBlueprint(UBlueprint* TargetBP, TSubclassOf<UActorComponent> ComponentClass, FName ComponentName)
{
    if (!TargetBP || !ComponentClass || !IsInGameThread()) return nullptr;

    if (!TargetBP->SimpleConstructionScript)
    {
        TargetBP->SimpleConstructionScript = NewObject<USimpleConstructionScript>(TargetBP);
    }

    USCS_Node* NewNode = TargetBP->SimpleConstructionScript->CreateNode(ComponentClass, ComponentName);
    if (NewNode)
    {
        TargetBP->SimpleConstructionScript->AddNode(NewNode);
        FKismetEditorUtilities::CompileBlueprint(TargetBP);
        TargetBP->MarkPackageDirty();
        return NewNode->ComponentTemplate;
    }
    return nullptr;
}

FString UGenAIEditorBridge::GetBlueprintDetails(UBlueprint* TargetBP)
{
    if (!TargetBP) return TEXT("{}");

    TSharedPtr<FJsonObject> RootObj = MakeShareable(new FJsonObject());
    
    TArray<TSharedPtr<FJsonValue>> ComponentArray;
    if (TargetBP->SimpleConstructionScript)
    {
        TArray<USCS_Node*> SCSNodes = TargetBP->SimpleConstructionScript->GetAllNodes();
        for (USCS_Node* Node : SCSNodes)
        {
            if (Node && Node->ComponentTemplate)
            {
                TSharedPtr<FJsonObject> CompObj = MakeShareable(new FJsonObject());
                CompObj->SetStringField(TEXT("name"), Node->ComponentTemplate->GetName());
                CompObj->SetStringField(TEXT("class"), Node->ComponentTemplate->GetClass()->GetName());
                ComponentArray.Add(MakeShareable(new FJsonValueObject(CompObj)));
            }
        }
    }
    RootObj->SetArrayField(TEXT("components"), ComponentArray);

    TArray<TSharedPtr<FJsonValue>> VarArray;
    for (const FBPVariableDescription& Var : TargetBP->NewVariables)
    {
        TSharedPtr<FJsonObject> VarObj = MakeShareable(new FJsonObject());
        VarObj->SetStringField(TEXT("name"), Var.VarName.ToString());
        VarObj->SetStringField(TEXT("type"), Var.VarType.PinCategory.ToString());
        VarArray.Add(MakeShareable(new FJsonValueObject(VarObj)));
    }
    RootObj->SetArrayField(TEXT("variables"), VarArray);

    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(RootObj.ToSharedRef(), Writer);
    
    return OutputString;
}

bool UGenAIEditorBridge::InjectT3DIntoGraph(UBlueprint* TargetBP, const FString& T3DText)
{
    if (!IsInGameThread()) return false;
    if (!TargetBP || !TargetBP->UbergraphPages.IsValidIndex(0)) return false;

    UEdGraph* EventGraph = TargetBP->UbergraphPages[0];
    TSet<UEdGraphNode*> ImportedNodes;
    
    FEdGraphUtilities::ImportNodesFromText(EventGraph, T3DText, ImportedNodes);

    if (ImportedNodes.Num() > 0)
    {
        for (UEdGraphNode* Node : ImportedNodes)
        {
            if (Node && Node->GetOuter() != EventGraph)
            {
                Node->Rename(nullptr, EventGraph);
            }
            Node->PostPasteNode();
        }
        
        TargetBP->MarkPackageDirty();
        return true;
    }

    return false;
}

FString UGenAIEditorBridge::ExportGraphToT3D(UBlueprint* TargetBP)
{
    if (!IsInGameThread()) return TEXT("");
    if (!TargetBP || !TargetBP->UbergraphPages.IsValidIndex(0)) return TEXT("");

    UEdGraph* EventGraph = TargetBP->UbergraphPages[0];
    TSet<UObject*> NodesToExport;
    for (UEdGraphNode* Node : EventGraph->Nodes)
    {
        NodesToExport.Add(static_cast<UObject*>(Node));
    }

    FString ExportedText;
    FEdGraphUtilities::ExportNodesToText(NodesToExport, ExportedText);

    return ExportedText;
}

bool UGenAIEditorBridge::CompileBlueprintWithDetailedLog(UBlueprint* TargetBP, FString& OutParsedLogJson)
{
    if (!IsInGameThread() || !TargetBP) return false;

    FCompilerResultsLog CompilerLog;
    CompilerLog.bSilentMode = true;
    
    FKismetEditorUtilities::CompileBlueprint(TargetBP, EBlueprintCompileOptions::None, &CompilerLog);

    OutParsedLogJson = FormatLogToJson(CompilerLog);
    return CompilerLog.NumErrors == 0;
}

void UGenAIEditorBridge::EnsureMainThread(TFunction<void()> Task)
{
    if (IsInGameThread()) Task();
    else AsyncTask(ENamedThreads::GameThread, MoveTemp(Task));
}

FString UGenAIEditorBridge::FormatLogToJson(const FCompilerResultsLog& Log)
{
    TSharedPtr<FJsonObject> RootObject = MakeShareable(new FJsonObject());
    TArray<TSharedPtr<FJsonValue>> MessagesArray;

    for (const TSharedRef<FTokenizedMessage>& Message : Log.Messages)
    {
        TSharedPtr<FJsonObject> MsgObject = MakeShareable(new FJsonObject());
        FString Severity;
        switch(Message->GetSeverity())
        {
            case EMessageSeverity::Error: Severity = "Error"; break;
            case EMessageSeverity::Warning: Severity = "Warning"; break;
            default: Severity = "Info"; break;
        }

        MsgObject->SetStringField("severity", Severity);
        MsgObject->SetStringField("message", Message->ToText().ToString());
        MessagesArray.Add(MakeShareable(new FJsonValueObject(MsgObject)));
    }

    RootObject->SetArrayField("messages", MessagesArray);
    RootObject->SetNumberField("error_count", Log.NumErrors);
    RootObject->SetStringField("status", Log.NumErrors == 0 ? "Success" : "Failed");

    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(RootObject.ToSharedRef(), Writer);

    return OutputString;
}

bool UGenAIEditorBridge::TriggerLiveCoding()
{
    if (!IsInGameThread()) return false;
    FLevelEditorActionCallbacks::RecompileGameCode_Clicked();
    return true;
}
