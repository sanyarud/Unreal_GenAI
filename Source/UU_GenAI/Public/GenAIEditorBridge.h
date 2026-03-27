// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "Components/ActorComponent.h"
#include "Kismet2/CompilerResultsLog.h"
#include "Templates/SubclassOf.h"
#include "GenAIEditorBridge.generated.h"

class UBlueprint;

/**
 * GenAIEditorBridge Subsystem
 * Logic ported from OpenClawBridge to handle editor asset creation and graph manipulation.
 */
UCLASS()
class UU_GENAI_API UGenAIEditorBridge : public UEditorSubsystem
{
    GENERATED_BODY()

public:
    /** Creates a new Blueprint class or Data Asset. */
    UFUNCTION(BlueprintCallable, Category = "GenAI|EditorBridge")
    UObject* CreateEditorAsset(const FString& AssetName, const FString& PackagePath, TSubclassOf<UObject> ParentClass);

    /** Injects nodes into a Blueprint's Event Graph from a T3D string. */
    UFUNCTION(BlueprintCallable, Category = "GenAI|EditorBridge")
    bool InjectT3DIntoGraph(UBlueprint* TargetBP, const FString& T3DText);

    /** Exports all nodes in a Blueprint's Event Graph to a T3D string. */
    UFUNCTION(BlueprintCallable, Category = "GenAI|EditorBridge")
    FString ExportGraphToT3D(UBlueprint* TargetBP);

    /** Adds a component to a Blueprint. */
    UFUNCTION(BlueprintCallable, Category = "GenAI|EditorBridge")
    UActorComponent* AddComponentToBlueprint(UBlueprint* TargetBP, TSubclassOf<UActorComponent> ComponentClass, FName ComponentName = NAME_None);

    /** Returns a JSON summary of the Blueprint structure. */
    UFUNCTION(BlueprintCallable, Category = "GenAI|EditorBridge")
    FString GetBlueprintDetails(UBlueprint* TargetBP);

    /** Compiles a Blueprint and returns a JSON-formatted log. */
    UFUNCTION(BlueprintCallable, Category = "GenAI|EditorBridge")
    bool CompileBlueprintWithDetailedLog(UBlueprint* TargetBP, FString& OutParsedLogJson);

    /** Triggers a global project build (Live Coding). */
    UFUNCTION(BlueprintCallable, Category = "GenAI|EditorBridge")
    bool TriggerLiveCoding();

private:
    void EnsureMainThread(TFunction<void()> Task);
    FString FormatLogToJson(const FCompilerResultsLog& Log);
};
