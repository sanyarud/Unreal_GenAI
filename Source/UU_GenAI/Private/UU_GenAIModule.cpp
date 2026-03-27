// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "UU_GenAIModule.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FUU_GenAIModule"

void FUU_GenAIModule::StartupModule()
{
    UE_LOG(LogTemp, Log, TEXT("GenAI for Unreal plugin loaded."));
}

void FUU_GenAIModule::ShutdownModule()
{
    UE_LOG(LogTemp, Log, TEXT("GenAI for Unreal plugin unloaded."));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FUU_GenAIModule, UU_GenAI)
