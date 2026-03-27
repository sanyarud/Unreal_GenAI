// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "GenAITypes.h"
#include "GenAISubsystem.generated.h"

/**
 * GenAISubsystem
 * Manages chat history persistence and coordinates AI tool execution with GenAIEditorBridge.
 */
UCLASS()
class UU_GENAI_API UGenAISubsystem : public UEngineSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    /** History Management */
    UFUNCTION(BlueprintCallable, Category = "GenAI|History")
    void LoadSessions();

    UFUNCTION(BlueprintCallable, Category = "GenAI|History")
    void SaveSessions();

    UFUNCTION(BlueprintCallable, Category = "GenAI|History")
    void ClearAllHistory();

    /** Active sessions */
    UPROPERTY(BlueprintReadWrite, Category = "GenAI|History")
    TArray<FGenAIChatSession> Sessions;

    UPROPERTY(BlueprintReadWrite, Category = "GenAI|History")
    FString CurrentSessionId;

    /** Tool Execution Logic */
    UFUNCTION(BlueprintCallable, Category = "GenAI|Tools")
    FString ExecuteAITools(const FString& AIResponse);

    /** Editor Notifications */
    UFUNCTION(BlueprintCallable, Category = "GenAI|UI")
    void ShowNotification(const FString& Message, bool bIsError = false);

    /** Context Retrieval */
    UFUNCTION(BlueprintCallable, Category = "GenAI|Context")
    FString GetActiveAssetContext();

private:
    FString ProcessSingleToolCall(const FString& JsonString);
};
