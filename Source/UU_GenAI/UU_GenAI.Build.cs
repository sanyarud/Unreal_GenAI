// Copyright (c) 2024 UU Plugin. All Rights Reserved.

using UnrealBuildTool;

public class UU_GenAI : ModuleRules
{
    public UU_GenAI(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "HTTP",
            "Json",
            "JsonUtilities",
            "DeveloperSettings",
            "Slate",
            "SlateCore",
            "InputCore",
            "ApplicationCore",
            "UMG",
            "Sockets",
            "Networking",
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            // No additional private dependencies
        });

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[]
            {
                "UnrealEd",
                "ContentBrowser",
                "AssetRegistry",
                "Kismet",
                "AssetTools",
                "BlueprintGraph",
                "KismetCompiler",
                "EditorSubsystem",
                "LevelEditor",
            });
        }
    }
}
