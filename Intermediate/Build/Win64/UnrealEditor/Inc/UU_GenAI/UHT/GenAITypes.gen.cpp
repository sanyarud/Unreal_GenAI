// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenAITypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenAILanguage();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenAnthropicModel();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenChatRole();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenContentType();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenDeepSeekModel();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenFinishReason();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenGoogleModel();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenGoogleTTSVoice();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenImageDetail();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenMistralModel();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIAudioFormat();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIImageModel();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIImageQuality();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIImageResponseFormat();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIImageSize();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIImageStyle();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIModel();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAITTSModel();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAITTSVoice();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenOllamaModel();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenToolChoice();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenAIChatSession();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenAISkill();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenAISmartRouting();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenAnthropicChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatContentPart();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatImageUrl();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatMessage();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatResponse();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenDeepSeekChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenGoogleChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenGoogleTTSSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenImageResult();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenMistralChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenModelInfo();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenOAIChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenOAIImageSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenOAITranscriptionSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenOAITTSSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenOllamaChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenStreamDelta();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenTool();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenToolCall();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenToolFunction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGenAILanguage ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenAILanguage;
static UEnum* EGenAILanguage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenAILanguage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenAILanguage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenAILanguage, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenAILanguage"));
	}
	return Z_Registration_Info_UEnum_EGenAILanguage.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenAILanguage>()
{
	return EGenAILanguage_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenAILanguage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "English.DisplayName", "English" },
		{ "English.Name", "EGenAILanguage::English" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "Ukrainian.DisplayName", "Ukrainian" },
		{ "Ukrainian.Name", "EGenAILanguage::Ukrainian" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenAILanguage::Ukrainian", (int64)EGenAILanguage::Ukrainian },
		{ "EGenAILanguage::English", (int64)EGenAILanguage::English },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenAILanguage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenAILanguage",
	"EGenAILanguage",
	Z_Construct_UEnum_UU_GenAI_EGenAILanguage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenAILanguage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenAILanguage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenAILanguage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenAILanguage()
{
	if (!Z_Registration_Info_UEnum_EGenAILanguage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenAILanguage.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenAILanguage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenAILanguage.InnerSingleton;
}
// ********** End Enum EGenAILanguage **************************************************************

// ********** Begin ScriptStruct FGenAISkill *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenAISkill;
class UScriptStruct* FGenAISkill::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenAISkill.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenAISkill.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenAISkill, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenAISkill"));
	}
	return Z_Registration_Info_UScriptStruct_FGenAISkill.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenAISkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  SKILLS & SMART ROUTING\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n SKILLS & SMART ROUTING\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "GenAI|Skill" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "GenAI|Skill" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemPrompt_MetaData[] = {
		{ "Category", "GenAI|Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The expert knowledge or instructions to prepend to the system prompt. */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The expert knowledge or instructions to prepend to the system prompt." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerKeywords_MetaData[] = {
		{ "Category", "GenAI|Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional: Keywords that trigger this skill automatically if they appear in user message. */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: Keywords that trigger this skill automatically if they appear in user message." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "GenAI|Skill" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SystemPrompt;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TriggerKeywords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TriggerKeywords;
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenAISkill>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAISkill, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAISkill, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_SystemPrompt = { "SystemPrompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAISkill, SystemPrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemPrompt_MetaData), NewProp_SystemPrompt_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_TriggerKeywords_Inner = { "TriggerKeywords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_TriggerKeywords = { "TriggerKeywords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAISkill, TriggerKeywords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerKeywords_MetaData), NewProp_TriggerKeywords_MetaData) };
void Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((FGenAISkill*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenAISkill), &Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenAISkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_SystemPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_TriggerKeywords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_TriggerKeywords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAISkill_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAISkill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenAISkill_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenAISkill",
	Z_Construct_UScriptStruct_FGenAISkill_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAISkill_Statics::PropPointers),
	sizeof(FGenAISkill),
	alignof(FGenAISkill),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAISkill_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenAISkill_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenAISkill()
{
	if (!Z_Registration_Info_UScriptStruct_FGenAISkill.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenAISkill.InnerSingleton, Z_Construct_UScriptStruct_FGenAISkill_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenAISkill.InnerSingleton;
}
// ********** End ScriptStruct FGenAISkill *********************************************************

// ********** Begin ScriptStruct FGenAISmartRouting ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenAISmartRouting;
class UScriptStruct* FGenAISmartRouting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenAISmartRouting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenAISmartRouting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenAISmartRouting, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenAISmartRouting"));
	}
	return Z_Registration_Info_UScriptStruct_FGenAISmartRouting.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenAISmartRouting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoRouting_MetaData[] = {
		{ "Category", "GenAI|Routing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled, detects intent (like 'write code') and switches to the Coding Model. */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, detects intent (like 'write code') and switches to the Coding Model." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CodingKeywords_MetaData[] = {
		{ "Category", "GenAI|Routing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keywords that trigger routing to the Coding Model. */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keywords that trigger routing to the Coding Model." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CodingProvider_MetaData[] = {
		{ "Category", "GenAI|Routing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Provider for coding tasks (e.g. \"ollama\", \"openai\"). */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provider for coding tasks (e.g. \"ollama\", \"openai\")." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CodingModelId_MetaData[] = {
		{ "Category", "GenAI|Routing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Model ID for coding tasks (e.g. \"deepseek-r1\"). */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Model ID for coding tasks (e.g. \"deepseek-r1\")." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableAutoRouting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoRouting;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CodingKeywords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CodingKeywords;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CodingProvider;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CodingModelId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenAISmartRouting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_bEnableAutoRouting_SetBit(void* Obj)
{
	((FGenAISmartRouting*)Obj)->bEnableAutoRouting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_bEnableAutoRouting = { "bEnableAutoRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenAISmartRouting), &Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_bEnableAutoRouting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutoRouting_MetaData), NewProp_bEnableAutoRouting_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_CodingKeywords_Inner = { "CodingKeywords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_CodingKeywords = { "CodingKeywords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAISmartRouting, CodingKeywords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CodingKeywords_MetaData), NewProp_CodingKeywords_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_CodingProvider = { "CodingProvider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAISmartRouting, CodingProvider), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CodingProvider_MetaData), NewProp_CodingProvider_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_CodingModelId = { "CodingModelId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAISmartRouting, CodingModelId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CodingModelId_MetaData), NewProp_CodingModelId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_bEnableAutoRouting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_CodingKeywords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_CodingKeywords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_CodingProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewProp_CodingModelId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenAISmartRouting",
	Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::PropPointers),
	sizeof(FGenAISmartRouting),
	alignof(FGenAISmartRouting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenAISmartRouting()
{
	if (!Z_Registration_Info_UScriptStruct_FGenAISmartRouting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenAISmartRouting.InnerSingleton, Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenAISmartRouting.InnerSingleton;
}
// ********** End ScriptStruct FGenAISmartRouting **************************************************

// ********** Begin Enum EGenOAIModel **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenOAIModel;
static UEnum* EGenOAIModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenOAIModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenOAIModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenOAIModel, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenOAIModel"));
	}
	return Z_Registration_Info_UEnum_EGenOAIModel.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenOAIModel>()
{
	return EGenOAIModel_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenOAIModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  ENUMS\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "Custom.DisplayName", "Custom (use ModelString)" },
		{ "Custom.Name", "EGenOAIModel::Custom" },
		{ "GPT_3_5_Turbo.DisplayName", "gpt-3.5-turbo" },
		{ "GPT_3_5_Turbo.Name", "EGenOAIModel::GPT_3_5_Turbo" },
		{ "GPT_4_Turbo.DisplayName", "gpt-4-turbo" },
		{ "GPT_4_Turbo.Name", "EGenOAIModel::GPT_4_Turbo" },
		{ "GPT_4o.DisplayName", "gpt-4o" },
		{ "GPT_4o.Name", "EGenOAIModel::GPT_4o" },
		{ "GPT_4o_Mini.DisplayName", "gpt-4o-mini" },
		{ "GPT_4o_Mini.Name", "EGenOAIModel::GPT_4o_Mini" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "O1.DisplayName", "o1" },
		{ "O1.Name", "EGenOAIModel::O1" },
		{ "O1_Mini.DisplayName", "o1-mini" },
		{ "O1_Mini.Name", "EGenOAIModel::O1_Mini" },
		{ "O1_Preview.DisplayName", "o1-preview" },
		{ "O1_Preview.Name", "EGenOAIModel::O1_Preview" },
		{ "O3_Mini.DisplayName", "o3-mini" },
		{ "O3_Mini.Name", "EGenOAIModel::O3_Mini" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n ENUMS\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenOAIModel::GPT_4o", (int64)EGenOAIModel::GPT_4o },
		{ "EGenOAIModel::GPT_4o_Mini", (int64)EGenOAIModel::GPT_4o_Mini },
		{ "EGenOAIModel::GPT_4_Turbo", (int64)EGenOAIModel::GPT_4_Turbo },
		{ "EGenOAIModel::GPT_3_5_Turbo", (int64)EGenOAIModel::GPT_3_5_Turbo },
		{ "EGenOAIModel::O1", (int64)EGenOAIModel::O1 },
		{ "EGenOAIModel::O1_Mini", (int64)EGenOAIModel::O1_Mini },
		{ "EGenOAIModel::O1_Preview", (int64)EGenOAIModel::O1_Preview },
		{ "EGenOAIModel::O3_Mini", (int64)EGenOAIModel::O3_Mini },
		{ "EGenOAIModel::Custom", (int64)EGenOAIModel::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenOAIModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenOAIModel",
	"EGenOAIModel",
	Z_Construct_UEnum_UU_GenAI_EGenOAIModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenOAIModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIModel()
{
	if (!Z_Registration_Info_UEnum_EGenOAIModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenOAIModel.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenOAIModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenOAIModel.InnerSingleton;
}
// ********** End Enum EGenOAIModel ****************************************************************

// ********** Begin Enum EGenAnthropicModel ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenAnthropicModel;
static UEnum* EGenAnthropicModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenAnthropicModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenAnthropicModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenAnthropicModel, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenAnthropicModel"));
	}
	return Z_Registration_Info_UEnum_EGenAnthropicModel.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenAnthropicModel>()
{
	return EGenAnthropicModel_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenAnthropicModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Claude_3_5_Haiku.DisplayName", "claude-3-5-haiku-20241022" },
		{ "Claude_3_5_Haiku.Name", "EGenAnthropicModel::Claude_3_5_Haiku" },
		{ "Claude_3_5_Sonnet.DisplayName", "claude-3-5-sonnet-20241022" },
		{ "Claude_3_5_Sonnet.Name", "EGenAnthropicModel::Claude_3_5_Sonnet" },
		{ "Claude_3_7_Sonnet.DisplayName", "claude-3-7-sonnet-20250219" },
		{ "Claude_3_7_Sonnet.Name", "EGenAnthropicModel::Claude_3_7_Sonnet" },
		{ "Claude_3_Haiku.DisplayName", "claude-3-haiku-20240307" },
		{ "Claude_3_Haiku.Name", "EGenAnthropicModel::Claude_3_Haiku" },
		{ "Claude_3_Opus.DisplayName", "claude-3-opus-20240229" },
		{ "Claude_3_Opus.Name", "EGenAnthropicModel::Claude_3_Opus" },
		{ "Claude_3_Sonnet.DisplayName", "claude-3-sonnet-20240229" },
		{ "Claude_3_Sonnet.Name", "EGenAnthropicModel::Claude_3_Sonnet" },
		{ "Custom.DisplayName", "Custom (use ModelString)" },
		{ "Custom.Name", "EGenAnthropicModel::Custom" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenAnthropicModel::Claude_3_7_Sonnet", (int64)EGenAnthropicModel::Claude_3_7_Sonnet },
		{ "EGenAnthropicModel::Claude_3_5_Sonnet", (int64)EGenAnthropicModel::Claude_3_5_Sonnet },
		{ "EGenAnthropicModel::Claude_3_5_Haiku", (int64)EGenAnthropicModel::Claude_3_5_Haiku },
		{ "EGenAnthropicModel::Claude_3_Opus", (int64)EGenAnthropicModel::Claude_3_Opus },
		{ "EGenAnthropicModel::Claude_3_Sonnet", (int64)EGenAnthropicModel::Claude_3_Sonnet },
		{ "EGenAnthropicModel::Claude_3_Haiku", (int64)EGenAnthropicModel::Claude_3_Haiku },
		{ "EGenAnthropicModel::Custom", (int64)EGenAnthropicModel::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenAnthropicModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenAnthropicModel",
	"EGenAnthropicModel",
	Z_Construct_UEnum_UU_GenAI_EGenAnthropicModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenAnthropicModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenAnthropicModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenAnthropicModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenAnthropicModel()
{
	if (!Z_Registration_Info_UEnum_EGenAnthropicModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenAnthropicModel.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenAnthropicModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenAnthropicModel.InnerSingleton;
}
// ********** End Enum EGenAnthropicModel **********************************************************

// ********** Begin Enum EGenGoogleModel ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenGoogleModel;
static UEnum* EGenGoogleModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenGoogleModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenGoogleModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenGoogleModel, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenGoogleModel"));
	}
	return Z_Registration_Info_UEnum_EGenGoogleModel.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenGoogleModel>()
{
	return EGenGoogleModel_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenGoogleModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.DisplayName", "Custom (use ModelString)" },
		{ "Custom.Name", "EGenGoogleModel::Custom" },
		{ "Gemini_1_5_Flash.DisplayName", "gemini-1.5-flash" },
		{ "Gemini_1_5_Flash.Name", "EGenGoogleModel::Gemini_1_5_Flash" },
		{ "Gemini_1_5_Flash_8B.DisplayName", "gemini-1.5-flash-8b" },
		{ "Gemini_1_5_Flash_8B.Name", "EGenGoogleModel::Gemini_1_5_Flash_8B" },
		{ "Gemini_1_5_Pro.DisplayName", "gemini-1.5-pro" },
		{ "Gemini_1_5_Pro.Name", "EGenGoogleModel::Gemini_1_5_Pro" },
		{ "Gemini_2_0_Flash.DisplayName", "gemini-2.0-flash" },
		{ "Gemini_2_0_Flash.Name", "EGenGoogleModel::Gemini_2_0_Flash" },
		{ "Gemini_2_0_Flash_Lite.DisplayName", "gemini-2.0-flash-lite" },
		{ "Gemini_2_0_Flash_Lite.Name", "EGenGoogleModel::Gemini_2_0_Flash_Lite" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenGoogleModel::Gemini_2_0_Flash", (int64)EGenGoogleModel::Gemini_2_0_Flash },
		{ "EGenGoogleModel::Gemini_2_0_Flash_Lite", (int64)EGenGoogleModel::Gemini_2_0_Flash_Lite },
		{ "EGenGoogleModel::Gemini_1_5_Pro", (int64)EGenGoogleModel::Gemini_1_5_Pro },
		{ "EGenGoogleModel::Gemini_1_5_Flash", (int64)EGenGoogleModel::Gemini_1_5_Flash },
		{ "EGenGoogleModel::Gemini_1_5_Flash_8B", (int64)EGenGoogleModel::Gemini_1_5_Flash_8B },
		{ "EGenGoogleModel::Custom", (int64)EGenGoogleModel::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenGoogleModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenGoogleModel",
	"EGenGoogleModel",
	Z_Construct_UEnum_UU_GenAI_EGenGoogleModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenGoogleModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenGoogleModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenGoogleModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenGoogleModel()
{
	if (!Z_Registration_Info_UEnum_EGenGoogleModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenGoogleModel.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenGoogleModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenGoogleModel.InnerSingleton;
}
// ********** End Enum EGenGoogleModel *************************************************************

// ********** Begin Enum EGenDeepSeekModel *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenDeepSeekModel;
static UEnum* EGenDeepSeekModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenDeepSeekModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenDeepSeekModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenDeepSeekModel, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenDeepSeekModel"));
	}
	return Z_Registration_Info_UEnum_EGenDeepSeekModel.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenDeepSeekModel>()
{
	return EGenDeepSeekModel_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenDeepSeekModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.DisplayName", "Custom (use ModelString)" },
		{ "Custom.Name", "EGenDeepSeekModel::Custom" },
		{ "DeepSeek_Chat.DisplayName", "deepseek-chat" },
		{ "DeepSeek_Chat.Name", "EGenDeepSeekModel::DeepSeek_Chat" },
		{ "DeepSeek_Reasoner.DisplayName", "deepseek-reasoner" },
		{ "DeepSeek_Reasoner.Name", "EGenDeepSeekModel::DeepSeek_Reasoner" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenDeepSeekModel::DeepSeek_Chat", (int64)EGenDeepSeekModel::DeepSeek_Chat },
		{ "EGenDeepSeekModel::DeepSeek_Reasoner", (int64)EGenDeepSeekModel::DeepSeek_Reasoner },
		{ "EGenDeepSeekModel::Custom", (int64)EGenDeepSeekModel::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenDeepSeekModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenDeepSeekModel",
	"EGenDeepSeekModel",
	Z_Construct_UEnum_UU_GenAI_EGenDeepSeekModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenDeepSeekModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenDeepSeekModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenDeepSeekModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenDeepSeekModel()
{
	if (!Z_Registration_Info_UEnum_EGenDeepSeekModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenDeepSeekModel.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenDeepSeekModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenDeepSeekModel.InnerSingleton;
}
// ********** End Enum EGenDeepSeekModel ***********************************************************

// ********** Begin Enum EGenMistralModel **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenMistralModel;
static UEnum* EGenMistralModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenMistralModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenMistralModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenMistralModel, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenMistralModel"));
	}
	return Z_Registration_Info_UEnum_EGenMistralModel.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenMistralModel>()
{
	return EGenMistralModel_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenMistralModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.DisplayName", "Custom (use ModelString)" },
		{ "Custom.Name", "EGenMistralModel::Custom" },
		{ "Mistral_Large.DisplayName", "mistral-large-latest" },
		{ "Mistral_Large.Name", "EGenMistralModel::Mistral_Large" },
		{ "Mistral_Small.DisplayName", "mistral-small-latest" },
		{ "Mistral_Small.Name", "EGenMistralModel::Mistral_Small" },
		{ "Mixtral_8x7B.DisplayName", "open-mixtral-8x7b" },
		{ "Mixtral_8x7B.Name", "EGenMistralModel::Mixtral_8x7B" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenMistralModel::Mistral_Large", (int64)EGenMistralModel::Mistral_Large },
		{ "EGenMistralModel::Mistral_Small", (int64)EGenMistralModel::Mistral_Small },
		{ "EGenMistralModel::Mixtral_8x7B", (int64)EGenMistralModel::Mixtral_8x7B },
		{ "EGenMistralModel::Custom", (int64)EGenMistralModel::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenMistralModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenMistralModel",
	"EGenMistralModel",
	Z_Construct_UEnum_UU_GenAI_EGenMistralModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenMistralModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenMistralModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenMistralModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenMistralModel()
{
	if (!Z_Registration_Info_UEnum_EGenMistralModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenMistralModel.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenMistralModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenMistralModel.InnerSingleton;
}
// ********** End Enum EGenMistralModel ************************************************************

// ********** Begin Enum EGenOllamaModel ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenOllamaModel;
static UEnum* EGenOllamaModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenOllamaModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenOllamaModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenOllamaModel, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenOllamaModel"));
	}
	return Z_Registration_Info_UEnum_EGenOllamaModel.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenOllamaModel>()
{
	return EGenOllamaModel_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenOllamaModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.DisplayName", "Custom (use ModelString)" },
		{ "Custom.Name", "EGenOllamaModel::Custom" },
		{ "DeepSeek_R1.DisplayName", "deepseek-r1" },
		{ "DeepSeek_R1.Name", "EGenOllamaModel::DeepSeek_R1" },
		{ "DeepSeek_V3.DisplayName", "deepseek-v3" },
		{ "DeepSeek_V3.Name", "EGenOllamaModel::DeepSeek_V3" },
		{ "Llama_3.DisplayName", "llama3" },
		{ "Llama_3.Name", "EGenOllamaModel::Llama_3" },
		{ "Mistral.DisplayName", "mistral" },
		{ "Mistral.Name", "EGenOllamaModel::Mistral" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenOllamaModel::DeepSeek_R1", (int64)EGenOllamaModel::DeepSeek_R1 },
		{ "EGenOllamaModel::DeepSeek_V3", (int64)EGenOllamaModel::DeepSeek_V3 },
		{ "EGenOllamaModel::Llama_3", (int64)EGenOllamaModel::Llama_3 },
		{ "EGenOllamaModel::Mistral", (int64)EGenOllamaModel::Mistral },
		{ "EGenOllamaModel::Custom", (int64)EGenOllamaModel::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenOllamaModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenOllamaModel",
	"EGenOllamaModel",
	Z_Construct_UEnum_UU_GenAI_EGenOllamaModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOllamaModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOllamaModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenOllamaModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenOllamaModel()
{
	if (!Z_Registration_Info_UEnum_EGenOllamaModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenOllamaModel.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenOllamaModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenOllamaModel.InnerSingleton;
}
// ********** End Enum EGenOllamaModel *************************************************************

// ********** Begin Enum EGenChatRole **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenChatRole;
static UEnum* EGenChatRole_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenChatRole.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenChatRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenChatRole, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenChatRole"));
	}
	return Z_Registration_Info_UEnum_EGenChatRole.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenChatRole>()
{
	return EGenChatRole_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenChatRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Assistant.DisplayName", "assistant" },
		{ "Assistant.Name", "EGenChatRole::Assistant" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "System.DisplayName", "system" },
		{ "System.Name", "EGenChatRole::System" },
		{ "Tool.DisplayName", "tool" },
		{ "Tool.Name", "EGenChatRole::Tool" },
		{ "User.DisplayName", "user" },
		{ "User.Name", "EGenChatRole::User" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenChatRole::System", (int64)EGenChatRole::System },
		{ "EGenChatRole::User", (int64)EGenChatRole::User },
		{ "EGenChatRole::Assistant", (int64)EGenChatRole::Assistant },
		{ "EGenChatRole::Tool", (int64)EGenChatRole::Tool },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenChatRole_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenChatRole",
	"EGenChatRole",
	Z_Construct_UEnum_UU_GenAI_EGenChatRole_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenChatRole_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenChatRole_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenChatRole_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenChatRole()
{
	if (!Z_Registration_Info_UEnum_EGenChatRole.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenChatRole.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenChatRole_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenChatRole.InnerSingleton;
}
// ********** End Enum EGenChatRole ****************************************************************

// ********** Begin Enum EGenContentType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenContentType;
static UEnum* EGenContentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenContentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenContentType, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenContentType"));
	}
	return Z_Registration_Info_UEnum_EGenContentType.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenContentType>()
{
	return EGenContentType_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenContentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ImageBase64.DisplayName", "image_base64 (auto-converted)" },
		{ "ImageBase64.Name", "EGenContentType::ImageBase64" },
		{ "ImageUrl.DisplayName", "image_url" },
		{ "ImageUrl.Name", "EGenContentType::ImageUrl" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "Text.DisplayName", "text" },
		{ "Text.Name", "EGenContentType::Text" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenContentType::Text", (int64)EGenContentType::Text },
		{ "EGenContentType::ImageUrl", (int64)EGenContentType::ImageUrl },
		{ "EGenContentType::ImageBase64", (int64)EGenContentType::ImageBase64 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenContentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenContentType",
	"EGenContentType",
	Z_Construct_UEnum_UU_GenAI_EGenContentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenContentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenContentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenContentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenContentType()
{
	if (!Z_Registration_Info_UEnum_EGenContentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenContentType.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenContentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenContentType.InnerSingleton;
}
// ********** End Enum EGenContentType *************************************************************

// ********** Begin Enum EGenImageDetail ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenImageDetail;
static UEnum* EGenImageDetail_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenImageDetail.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenImageDetail.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenImageDetail, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenImageDetail"));
	}
	return Z_Registration_Info_UEnum_EGenImageDetail.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenImageDetail>()
{
	return EGenImageDetail_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenImageDetail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "auto" },
		{ "Auto.Name", "EGenImageDetail::Auto" },
		{ "BlueprintType", "true" },
		{ "High.DisplayName", "high" },
		{ "High.Name", "EGenImageDetail::High" },
		{ "Low.DisplayName", "low" },
		{ "Low.Name", "EGenImageDetail::Low" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenImageDetail::Auto", (int64)EGenImageDetail::Auto },
		{ "EGenImageDetail::Low", (int64)EGenImageDetail::Low },
		{ "EGenImageDetail::High", (int64)EGenImageDetail::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenImageDetail_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenImageDetail",
	"EGenImageDetail",
	Z_Construct_UEnum_UU_GenAI_EGenImageDetail_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenImageDetail_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenImageDetail_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenImageDetail_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenImageDetail()
{
	if (!Z_Registration_Info_UEnum_EGenImageDetail.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenImageDetail.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenImageDetail_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenImageDetail.InnerSingleton;
}
// ********** End Enum EGenImageDetail *************************************************************

// ********** Begin Enum EGenOAITTSVoice ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenOAITTSVoice;
static UEnum* EGenOAITTSVoice_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenOAITTSVoice.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenOAITTSVoice.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenOAITTSVoice, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenOAITTSVoice"));
	}
	return Z_Registration_Info_UEnum_EGenOAITTSVoice.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenOAITTSVoice>()
{
	return EGenOAITTSVoice_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenOAITTSVoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alloy.DisplayName", "alloy" },
		{ "Alloy.Name", "EGenOAITTSVoice::Alloy" },
		{ "Ash.DisplayName", "ash" },
		{ "Ash.Name", "EGenOAITTSVoice::Ash" },
		{ "Ballad.DisplayName", "ballad" },
		{ "Ballad.Name", "EGenOAITTSVoice::Ballad" },
		{ "BlueprintType", "true" },
		{ "Coral.DisplayName", "coral" },
		{ "Coral.Name", "EGenOAITTSVoice::Coral" },
		{ "Echo.DisplayName", "echo" },
		{ "Echo.Name", "EGenOAITTSVoice::Echo" },
		{ "Fable.DisplayName", "fable" },
		{ "Fable.Name", "EGenOAITTSVoice::Fable" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "Nova.DisplayName", "nova" },
		{ "Nova.Name", "EGenOAITTSVoice::Nova" },
		{ "Onyx.DisplayName", "onyx" },
		{ "Onyx.Name", "EGenOAITTSVoice::Onyx" },
		{ "Sage.DisplayName", "sage" },
		{ "Sage.Name", "EGenOAITTSVoice::Sage" },
		{ "Shimmer.DisplayName", "shimmer" },
		{ "Shimmer.Name", "EGenOAITTSVoice::Shimmer" },
		{ "Verse.DisplayName", "verse" },
		{ "Verse.Name", "EGenOAITTSVoice::Verse" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenOAITTSVoice::Alloy", (int64)EGenOAITTSVoice::Alloy },
		{ "EGenOAITTSVoice::Echo", (int64)EGenOAITTSVoice::Echo },
		{ "EGenOAITTSVoice::Fable", (int64)EGenOAITTSVoice::Fable },
		{ "EGenOAITTSVoice::Onyx", (int64)EGenOAITTSVoice::Onyx },
		{ "EGenOAITTSVoice::Nova", (int64)EGenOAITTSVoice::Nova },
		{ "EGenOAITTSVoice::Shimmer", (int64)EGenOAITTSVoice::Shimmer },
		{ "EGenOAITTSVoice::Coral", (int64)EGenOAITTSVoice::Coral },
		{ "EGenOAITTSVoice::Verse", (int64)EGenOAITTSVoice::Verse },
		{ "EGenOAITTSVoice::Ash", (int64)EGenOAITTSVoice::Ash },
		{ "EGenOAITTSVoice::Ballad", (int64)EGenOAITTSVoice::Ballad },
		{ "EGenOAITTSVoice::Sage", (int64)EGenOAITTSVoice::Sage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenOAITTSVoice_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenOAITTSVoice",
	"EGenOAITTSVoice",
	Z_Construct_UEnum_UU_GenAI_EGenOAITTSVoice_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAITTSVoice_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAITTSVoice_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenOAITTSVoice_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAITTSVoice()
{
	if (!Z_Registration_Info_UEnum_EGenOAITTSVoice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenOAITTSVoice.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenOAITTSVoice_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenOAITTSVoice.InnerSingleton;
}
// ********** End Enum EGenOAITTSVoice *************************************************************

// ********** Begin Enum EGenOAITTSModel ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenOAITTSModel;
static UEnum* EGenOAITTSModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenOAITTSModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenOAITTSModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenOAITTSModel, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenOAITTSModel"));
	}
	return Z_Registration_Info_UEnum_EGenOAITTSModel.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenOAITTSModel>()
{
	return EGenOAITTSModel_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenOAITTSModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GPT_4o_Mini_TTS.DisplayName", "gpt-4o-mini-tts" },
		{ "GPT_4o_Mini_TTS.Name", "EGenOAITTSModel::GPT_4o_Mini_TTS" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "TTS_1.DisplayName", "tts-1" },
		{ "TTS_1.Name", "EGenOAITTSModel::TTS_1" },
		{ "TTS_1_HD.DisplayName", "tts-1-hd" },
		{ "TTS_1_HD.Name", "EGenOAITTSModel::TTS_1_HD" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenOAITTSModel::TTS_1", (int64)EGenOAITTSModel::TTS_1 },
		{ "EGenOAITTSModel::TTS_1_HD", (int64)EGenOAITTSModel::TTS_1_HD },
		{ "EGenOAITTSModel::GPT_4o_Mini_TTS", (int64)EGenOAITTSModel::GPT_4o_Mini_TTS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenOAITTSModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenOAITTSModel",
	"EGenOAITTSModel",
	Z_Construct_UEnum_UU_GenAI_EGenOAITTSModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAITTSModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAITTSModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenOAITTSModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAITTSModel()
{
	if (!Z_Registration_Info_UEnum_EGenOAITTSModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenOAITTSModel.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenOAITTSModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenOAITTSModel.InnerSingleton;
}
// ********** End Enum EGenOAITTSModel *************************************************************

// ********** Begin Enum EGenOAIAudioFormat ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenOAIAudioFormat;
static UEnum* EGenOAIAudioFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenOAIAudioFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenOAIAudioFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenOAIAudioFormat, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenOAIAudioFormat"));
	}
	return Z_Registration_Info_UEnum_EGenOAIAudioFormat.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenOAIAudioFormat>()
{
	return EGenOAIAudioFormat_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenOAIAudioFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AAC.DisplayName", "aac" },
		{ "AAC.Name", "EGenOAIAudioFormat::AAC" },
		{ "BlueprintType", "true" },
		{ "FLAC.DisplayName", "flac" },
		{ "FLAC.Name", "EGenOAIAudioFormat::FLAC" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "MP3.DisplayName", "mp3" },
		{ "MP3.Name", "EGenOAIAudioFormat::MP3" },
		{ "Opus.DisplayName", "opus" },
		{ "Opus.Name", "EGenOAIAudioFormat::Opus" },
		{ "PCM.DisplayName", "pcm" },
		{ "PCM.Name", "EGenOAIAudioFormat::PCM" },
		{ "WAV.DisplayName", "wav" },
		{ "WAV.Name", "EGenOAIAudioFormat::WAV" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenOAIAudioFormat::MP3", (int64)EGenOAIAudioFormat::MP3 },
		{ "EGenOAIAudioFormat::Opus", (int64)EGenOAIAudioFormat::Opus },
		{ "EGenOAIAudioFormat::AAC", (int64)EGenOAIAudioFormat::AAC },
		{ "EGenOAIAudioFormat::FLAC", (int64)EGenOAIAudioFormat::FLAC },
		{ "EGenOAIAudioFormat::WAV", (int64)EGenOAIAudioFormat::WAV },
		{ "EGenOAIAudioFormat::PCM", (int64)EGenOAIAudioFormat::PCM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenOAIAudioFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenOAIAudioFormat",
	"EGenOAIAudioFormat",
	Z_Construct_UEnum_UU_GenAI_EGenOAIAudioFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIAudioFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIAudioFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenOAIAudioFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIAudioFormat()
{
	if (!Z_Registration_Info_UEnum_EGenOAIAudioFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenOAIAudioFormat.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenOAIAudioFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenOAIAudioFormat.InnerSingleton;
}
// ********** End Enum EGenOAIAudioFormat **********************************************************

// ********** Begin Enum EGenOAIImageModel *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenOAIImageModel;
static UEnum* EGenOAIImageModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenOAIImageModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenOAIImageModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenOAIImageModel, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenOAIImageModel"));
	}
	return Z_Registration_Info_UEnum_EGenOAIImageModel.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenOAIImageModel>()
{
	return EGenOAIImageModel_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenOAIImageModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DallE_2.DisplayName", "dall-e-2" },
		{ "DallE_2.Name", "EGenOAIImageModel::DallE_2" },
		{ "DallE_3.DisplayName", "dall-e-3" },
		{ "DallE_3.Name", "EGenOAIImageModel::DallE_3" },
		{ "GPTImage_1.DisplayName", "gpt-image-1" },
		{ "GPTImage_1.Name", "EGenOAIImageModel::GPTImage_1" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenOAIImageModel::DallE_3", (int64)EGenOAIImageModel::DallE_3 },
		{ "EGenOAIImageModel::DallE_2", (int64)EGenOAIImageModel::DallE_2 },
		{ "EGenOAIImageModel::GPTImage_1", (int64)EGenOAIImageModel::GPTImage_1 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenOAIImageModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenOAIImageModel",
	"EGenOAIImageModel",
	Z_Construct_UEnum_UU_GenAI_EGenOAIImageModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIImageModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIImageModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenOAIImageModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIImageModel()
{
	if (!Z_Registration_Info_UEnum_EGenOAIImageModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenOAIImageModel.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenOAIImageModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenOAIImageModel.InnerSingleton;
}
// ********** End Enum EGenOAIImageModel ***********************************************************

// ********** Begin Enum EGenOAIImageSize **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenOAIImageSize;
static UEnum* EGenOAIImageSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenOAIImageSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenOAIImageSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenOAIImageSize, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenOAIImageSize"));
	}
	return Z_Registration_Info_UEnum_EGenOAIImageSize.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenOAIImageSize>()
{
	return EGenOAIImageSize_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenOAIImageSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "Size_1024x1024.DisplayName", "1024x1024" },
		{ "Size_1024x1024.Name", "EGenOAIImageSize::Size_1024x1024" },
		{ "Size_1024x1792.DisplayName", "1024x1792 (portrait)" },
		{ "Size_1024x1792.Name", "EGenOAIImageSize::Size_1024x1792" },
		{ "Size_1792x1024.DisplayName", "1792x1024 (landscape)" },
		{ "Size_1792x1024.Name", "EGenOAIImageSize::Size_1792x1024" },
		{ "Size_256x256.DisplayName", "256x256" },
		{ "Size_256x256.Name", "EGenOAIImageSize::Size_256x256" },
		{ "Size_512x512.DisplayName", "512x512" },
		{ "Size_512x512.Name", "EGenOAIImageSize::Size_512x512" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenOAIImageSize::Size_256x256", (int64)EGenOAIImageSize::Size_256x256 },
		{ "EGenOAIImageSize::Size_512x512", (int64)EGenOAIImageSize::Size_512x512 },
		{ "EGenOAIImageSize::Size_1024x1024", (int64)EGenOAIImageSize::Size_1024x1024 },
		{ "EGenOAIImageSize::Size_1792x1024", (int64)EGenOAIImageSize::Size_1792x1024 },
		{ "EGenOAIImageSize::Size_1024x1792", (int64)EGenOAIImageSize::Size_1024x1792 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenOAIImageSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenOAIImageSize",
	"EGenOAIImageSize",
	Z_Construct_UEnum_UU_GenAI_EGenOAIImageSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIImageSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIImageSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenOAIImageSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIImageSize()
{
	if (!Z_Registration_Info_UEnum_EGenOAIImageSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenOAIImageSize.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenOAIImageSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenOAIImageSize.InnerSingleton;
}
// ********** End Enum EGenOAIImageSize ************************************************************

// ********** Begin Enum EGenOAIImageQuality *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenOAIImageQuality;
static UEnum* EGenOAIImageQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenOAIImageQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenOAIImageQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenOAIImageQuality, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenOAIImageQuality"));
	}
	return Z_Registration_Info_UEnum_EGenOAIImageQuality.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenOAIImageQuality>()
{
	return EGenOAIImageQuality_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenOAIImageQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HD.DisplayName", "hd" },
		{ "HD.Name", "EGenOAIImageQuality::HD" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "Standard.DisplayName", "standard" },
		{ "Standard.Name", "EGenOAIImageQuality::Standard" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenOAIImageQuality::Standard", (int64)EGenOAIImageQuality::Standard },
		{ "EGenOAIImageQuality::HD", (int64)EGenOAIImageQuality::HD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenOAIImageQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenOAIImageQuality",
	"EGenOAIImageQuality",
	Z_Construct_UEnum_UU_GenAI_EGenOAIImageQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIImageQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIImageQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenOAIImageQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIImageQuality()
{
	if (!Z_Registration_Info_UEnum_EGenOAIImageQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenOAIImageQuality.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenOAIImageQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenOAIImageQuality.InnerSingleton;
}
// ********** End Enum EGenOAIImageQuality *********************************************************

// ********** Begin Enum EGenOAIImageStyle *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenOAIImageStyle;
static UEnum* EGenOAIImageStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenOAIImageStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenOAIImageStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenOAIImageStyle, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenOAIImageStyle"));
	}
	return Z_Registration_Info_UEnum_EGenOAIImageStyle.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenOAIImageStyle>()
{
	return EGenOAIImageStyle_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenOAIImageStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "Natural.DisplayName", "natural" },
		{ "Natural.Name", "EGenOAIImageStyle::Natural" },
		{ "Vivid.DisplayName", "vivid" },
		{ "Vivid.Name", "EGenOAIImageStyle::Vivid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenOAIImageStyle::Vivid", (int64)EGenOAIImageStyle::Vivid },
		{ "EGenOAIImageStyle::Natural", (int64)EGenOAIImageStyle::Natural },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenOAIImageStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenOAIImageStyle",
	"EGenOAIImageStyle",
	Z_Construct_UEnum_UU_GenAI_EGenOAIImageStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIImageStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIImageStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenOAIImageStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIImageStyle()
{
	if (!Z_Registration_Info_UEnum_EGenOAIImageStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenOAIImageStyle.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenOAIImageStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenOAIImageStyle.InnerSingleton;
}
// ********** End Enum EGenOAIImageStyle ***********************************************************

// ********** Begin Enum EGenOAIImageResponseFormat ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenOAIImageResponseFormat;
static UEnum* EGenOAIImageResponseFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenOAIImageResponseFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenOAIImageResponseFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenOAIImageResponseFormat, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenOAIImageResponseFormat"));
	}
	return Z_Registration_Info_UEnum_EGenOAIImageResponseFormat.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenOAIImageResponseFormat>()
{
	return EGenOAIImageResponseFormat_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenOAIImageResponseFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "B64Json.DisplayName", "b64_json" },
		{ "B64Json.Name", "EGenOAIImageResponseFormat::B64Json" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "URL.DisplayName", "url" },
		{ "URL.Name", "EGenOAIImageResponseFormat::URL" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenOAIImageResponseFormat::URL", (int64)EGenOAIImageResponseFormat::URL },
		{ "EGenOAIImageResponseFormat::B64Json", (int64)EGenOAIImageResponseFormat::B64Json },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenOAIImageResponseFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenOAIImageResponseFormat",
	"EGenOAIImageResponseFormat",
	Z_Construct_UEnum_UU_GenAI_EGenOAIImageResponseFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIImageResponseFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenOAIImageResponseFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenOAIImageResponseFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenOAIImageResponseFormat()
{
	if (!Z_Registration_Info_UEnum_EGenOAIImageResponseFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenOAIImageResponseFormat.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenOAIImageResponseFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenOAIImageResponseFormat.InnerSingleton;
}
// ********** End Enum EGenOAIImageResponseFormat **************************************************

// ********** Begin Enum EGenGoogleTTSVoice ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenGoogleTTSVoice;
static UEnum* EGenGoogleTTSVoice_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenGoogleTTSVoice.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenGoogleTTSVoice.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenGoogleTTSVoice, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenGoogleTTSVoice"));
	}
	return Z_Registration_Info_UEnum_EGenGoogleTTSVoice.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenGoogleTTSVoice>()
{
	return EGenGoogleTTSVoice_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenGoogleTTSVoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.DisplayName", "Custom (use VoiceString)" },
		{ "Custom.Name", "EGenGoogleTTSVoice::Custom" },
		{ "en_US_Journey_D.DisplayName", "en-US-Journey-D" },
		{ "en_US_Journey_D.Name", "EGenGoogleTTSVoice::en_US_Journey_D" },
		{ "en_US_Journey_F.DisplayName", "en-US-Journey-F" },
		{ "en_US_Journey_F.Name", "EGenGoogleTTSVoice::en_US_Journey_F" },
		{ "en_US_Neural2_A.DisplayName", "en-US-Neural2-A" },
		{ "en_US_Neural2_A.Name", "EGenGoogleTTSVoice::en_US_Neural2_A" },
		{ "en_US_Neural2_C.DisplayName", "en-US-Neural2-C" },
		{ "en_US_Neural2_C.Name", "EGenGoogleTTSVoice::en_US_Neural2_C" },
		{ "en_US_Neural2_D.DisplayName", "en-US-Neural2-D" },
		{ "en_US_Neural2_D.Name", "EGenGoogleTTSVoice::en_US_Neural2_D" },
		{ "en_US_Neural2_F.DisplayName", "en-US-Neural2-F" },
		{ "en_US_Neural2_F.Name", "EGenGoogleTTSVoice::en_US_Neural2_F" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenGoogleTTSVoice::en_US_Neural2_A", (int64)EGenGoogleTTSVoice::en_US_Neural2_A },
		{ "EGenGoogleTTSVoice::en_US_Neural2_C", (int64)EGenGoogleTTSVoice::en_US_Neural2_C },
		{ "EGenGoogleTTSVoice::en_US_Neural2_D", (int64)EGenGoogleTTSVoice::en_US_Neural2_D },
		{ "EGenGoogleTTSVoice::en_US_Neural2_F", (int64)EGenGoogleTTSVoice::en_US_Neural2_F },
		{ "EGenGoogleTTSVoice::en_US_Journey_D", (int64)EGenGoogleTTSVoice::en_US_Journey_D },
		{ "EGenGoogleTTSVoice::en_US_Journey_F", (int64)EGenGoogleTTSVoice::en_US_Journey_F },
		{ "EGenGoogleTTSVoice::Custom", (int64)EGenGoogleTTSVoice::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenGoogleTTSVoice_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenGoogleTTSVoice",
	"EGenGoogleTTSVoice",
	Z_Construct_UEnum_UU_GenAI_EGenGoogleTTSVoice_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenGoogleTTSVoice_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenGoogleTTSVoice_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenGoogleTTSVoice_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenGoogleTTSVoice()
{
	if (!Z_Registration_Info_UEnum_EGenGoogleTTSVoice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenGoogleTTSVoice.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenGoogleTTSVoice_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenGoogleTTSVoice.InnerSingleton;
}
// ********** End Enum EGenGoogleTTSVoice **********************************************************

// ********** Begin Enum EGenToolChoice ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenToolChoice;
static UEnum* EGenToolChoice_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenToolChoice.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenToolChoice.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenToolChoice, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenToolChoice"));
	}
	return Z_Registration_Info_UEnum_EGenToolChoice.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenToolChoice>()
{
	return EGenToolChoice_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenToolChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "auto" },
		{ "Auto.Name", "EGenToolChoice::Auto" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "None.DisplayName", "none" },
		{ "None.Name", "EGenToolChoice::None" },
		{ "Required.DisplayName", "required" },
		{ "Required.Name", "EGenToolChoice::Required" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenToolChoice::Auto", (int64)EGenToolChoice::Auto },
		{ "EGenToolChoice::None", (int64)EGenToolChoice::None },
		{ "EGenToolChoice::Required", (int64)EGenToolChoice::Required },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenToolChoice_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenToolChoice",
	"EGenToolChoice",
	Z_Construct_UEnum_UU_GenAI_EGenToolChoice_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenToolChoice_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenToolChoice_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenToolChoice_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenToolChoice()
{
	if (!Z_Registration_Info_UEnum_EGenToolChoice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenToolChoice.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenToolChoice_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenToolChoice.InnerSingleton;
}
// ********** End Enum EGenToolChoice **************************************************************

// ********** Begin Enum EGenFinishReason **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenFinishReason;
static UEnum* EGenFinishReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenFinishReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenFinishReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UU_GenAI_EGenFinishReason, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("EGenFinishReason"));
	}
	return Z_Registration_Info_UEnum_EGenFinishReason.OuterSingleton;
}
template<> UU_GENAI_API UEnum* StaticEnum<EGenFinishReason>()
{
	return EGenFinishReason_StaticEnum();
}
struct Z_Construct_UEnum_UU_GenAI_EGenFinishReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ContentFilter.DisplayName", "content_filter" },
		{ "ContentFilter.Name", "EGenFinishReason::ContentFilter" },
		{ "EndTurn.DisplayName", "end_turn" },
		{ "EndTurn.Name", "EGenFinishReason::EndTurn" },
		{ "Length.DisplayName", "length" },
		{ "Length.Name", "EGenFinishReason::Length" },
		{ "MaxTokens.DisplayName", "max_tokens" },
		{ "MaxTokens.Name", "EGenFinishReason::MaxTokens" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
		{ "Stop.DisplayName", "stop" },
		{ "Stop.Name", "EGenFinishReason::Stop" },
		{ "ToolCalls.DisplayName", "tool_calls" },
		{ "ToolCalls.Name", "EGenFinishReason::ToolCalls" },
		{ "Unknown.DisplayName", "unknown" },
		{ "Unknown.Name", "EGenFinishReason::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenFinishReason::Stop", (int64)EGenFinishReason::Stop },
		{ "EGenFinishReason::Length", (int64)EGenFinishReason::Length },
		{ "EGenFinishReason::ToolCalls", (int64)EGenFinishReason::ToolCalls },
		{ "EGenFinishReason::ContentFilter", (int64)EGenFinishReason::ContentFilter },
		{ "EGenFinishReason::EndTurn", (int64)EGenFinishReason::EndTurn },
		{ "EGenFinishReason::MaxTokens", (int64)EGenFinishReason::MaxTokens },
		{ "EGenFinishReason::Unknown", (int64)EGenFinishReason::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UU_GenAI_EGenFinishReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	"EGenFinishReason",
	"EGenFinishReason",
	Z_Construct_UEnum_UU_GenAI_EGenFinishReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenFinishReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UU_GenAI_EGenFinishReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UU_GenAI_EGenFinishReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UU_GenAI_EGenFinishReason()
{
	if (!Z_Registration_Info_UEnum_EGenFinishReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenFinishReason.InnerSingleton, Z_Construct_UEnum_UU_GenAI_EGenFinishReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenFinishReason.InnerSingleton;
}
// ********** End Enum EGenFinishReason ************************************************************

// ********** Begin ScriptStruct FGenChatImageUrl **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenChatImageUrl;
class UScriptStruct* FGenChatImageUrl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenChatImageUrl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenChatImageUrl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenChatImageUrl, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenChatImageUrl"));
	}
	return Z_Registration_Info_UScriptStruct_FGenChatImageUrl.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenChatImageUrl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  VISION / CONTENT PARTS\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n VISION / CONTENT PARTS\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "Category", "GenAI|Vision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Full URL or data:image/jpeg;base64,... string */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Full URL or data:image/jpeg;base64,... string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[] = {
		{ "Category", "GenAI|Vision" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Detail_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Detail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenChatImageUrl>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatImageUrl, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::NewProp_Detail_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatImageUrl, Detail), Z_Construct_UEnum_UU_GenAI_EGenImageDetail, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Detail_MetaData), NewProp_Detail_MetaData) }; // 501932710
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::NewProp_Detail_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::NewProp_Detail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenChatImageUrl",
	Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::PropPointers),
	sizeof(FGenChatImageUrl),
	alignof(FGenChatImageUrl),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenChatImageUrl()
{
	if (!Z_Registration_Info_UScriptStruct_FGenChatImageUrl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenChatImageUrl.InnerSingleton, Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenChatImageUrl.InnerSingleton;
}
// ********** End ScriptStruct FGenChatImageUrl ****************************************************

// ********** Begin ScriptStruct FGenChatContentPart ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenChatContentPart;
class UScriptStruct* FGenChatContentPart::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenChatContentPart.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenChatContentPart.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenChatContentPart, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenChatContentPart"));
	}
	return Z_Registration_Info_UScriptStruct_FGenChatContentPart.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenChatContentPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "GenAI|Vision" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "GenAI|Vision" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageUrl_MetaData[] = {
		{ "Category", "GenAI|Vision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used when Type == ImageUrl */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used when Type == ImageUrl" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenChatContentPart>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenChatContentPart_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenChatContentPart_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatContentPart, Type), Z_Construct_UEnum_UU_GenAI_EGenContentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1289684794
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenChatContentPart_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatContentPart, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenChatContentPart_Statics::NewProp_ImageUrl = { "ImageUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatContentPart, ImageUrl), Z_Construct_UScriptStruct_FGenChatImageUrl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageUrl_MetaData), NewProp_ImageUrl_MetaData) }; // 1198180960
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenChatContentPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatContentPart_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatContentPart_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatContentPart_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatContentPart_Statics::NewProp_ImageUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatContentPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenChatContentPart_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenChatContentPart",
	Z_Construct_UScriptStruct_FGenChatContentPart_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatContentPart_Statics::PropPointers),
	sizeof(FGenChatContentPart),
	alignof(FGenChatContentPart),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatContentPart_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenChatContentPart_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenChatContentPart()
{
	if (!Z_Registration_Info_UScriptStruct_FGenChatContentPart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenChatContentPart.InnerSingleton, Z_Construct_UScriptStruct_FGenChatContentPart_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenChatContentPart.InnerSingleton;
}
// ********** End ScriptStruct FGenChatContentPart *************************************************

// ********** Begin ScriptStruct FGenChatMessage ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenChatMessage;
class UScriptStruct* FGenChatMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenChatMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenChatMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenChatMessage, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenChatMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FGenChatMessage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  CHAT MESSAGE\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n CHAT MESSAGE\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[] = {
		{ "Category", "GenAI|Chat" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "Category", "GenAI|Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simple text content. If ContentParts is non-empty, this is ignored. */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple text content. If ContentParts is non-empty, this is ignored." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentParts_MetaData[] = {
		{ "Category", "GenAI|Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multimodal content parts (text + images). Overrides Content when non-empty. */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multimodal content parts (text + images). Overrides Content when non-empty." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolCallId_MetaData[] = {
		{ "Category", "GenAI|Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tool call ID \xe2\x80\x94 required when Role == Tool */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tool call ID \xe2\x80\x94 required when Role == Tool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "GenAI|Chat" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Role;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentParts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContentParts;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolCallId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenChatMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatMessage, Role), Z_Construct_UEnum_UU_GenAI_EGenChatRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Role_MetaData), NewProp_Role_MetaData) }; // 3147061396
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatMessage, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_ContentParts_Inner = { "ContentParts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenChatContentPart, METADATA_PARAMS(0, nullptr) }; // 4165666317
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_ContentParts = { "ContentParts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatMessage, ContentParts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentParts_MetaData), NewProp_ContentParts_MetaData) }; // 4165666317
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_ToolCallId = { "ToolCallId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatMessage, ToolCallId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolCallId_MetaData), NewProp_ToolCallId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatMessage, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_Role_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_Role,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_ContentParts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_ContentParts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_ToolCallId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenChatMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenChatMessage",
	Z_Construct_UScriptStruct_FGenChatMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatMessage_Statics::PropPointers),
	sizeof(FGenChatMessage),
	alignof(FGenChatMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenChatMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenChatMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FGenChatMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenChatMessage.InnerSingleton, Z_Construct_UScriptStruct_FGenChatMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenChatMessage.InnerSingleton;
}
// ********** End ScriptStruct FGenChatMessage *****************************************************

// ********** Begin ScriptStruct FGenAIChatSession *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenAIChatSession;
class UScriptStruct* FGenAIChatSession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenAIChatSession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenAIChatSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenAIChatSession, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenAIChatSession"));
	}
	return Z_Registration_Info_UScriptStruct_FGenAIChatSession.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenAIChatSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A logical chat session containing message history.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A logical chat session containing message history." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "Category", "GenAI|Chat" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "GenAI|Chat" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_History_MetaData[] = {
		{ "Category", "GenAI|Chat" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdated_MetaData[] = {
		{ "Category", "GenAI|Chat" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStructPropertyParams NewProp_History_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_History;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenAIChatSession>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAIChatSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAIChatSession, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAIChatSession_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAIChatSession, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenAIChatSession_Statics::NewProp_History_Inner = { "History", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenChatMessage, METADATA_PARAMS(0, nullptr) }; // 2097319744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenAIChatSession_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAIChatSession, History), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_History_MetaData), NewProp_History_MetaData) }; // 2097319744
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenAIChatSession_Statics::NewProp_LastUpdated = { "LastUpdated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAIChatSession, LastUpdated), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdated_MetaData), NewProp_LastUpdated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenAIChatSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAIChatSession_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAIChatSession_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAIChatSession_Statics::NewProp_History_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAIChatSession_Statics::NewProp_History,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAIChatSession_Statics::NewProp_LastUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAIChatSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenAIChatSession_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenAIChatSession",
	Z_Construct_UScriptStruct_FGenAIChatSession_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAIChatSession_Statics::PropPointers),
	sizeof(FGenAIChatSession),
	alignof(FGenAIChatSession),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAIChatSession_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenAIChatSession_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenAIChatSession()
{
	if (!Z_Registration_Info_UScriptStruct_FGenAIChatSession.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenAIChatSession.InnerSingleton, Z_Construct_UScriptStruct_FGenAIChatSession_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenAIChatSession.InnerSingleton;
}
// ********** End ScriptStruct FGenAIChatSession ***************************************************

// ********** Begin ScriptStruct FGenToolFunction **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenToolFunction;
class UScriptStruct* FGenToolFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenToolFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenToolFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenToolFunction, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenToolFunction"));
	}
	return Z_Registration_Info_UScriptStruct_FGenToolFunction.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenToolFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  FUNCTION / TOOL CALLING\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n FUNCTION / TOOL CALLING\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "GenAI|Tools" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "GenAI|Tools" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParametersJsonSchema_MetaData[] = {
		{ "Category", "GenAI|Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * JSON Schema string for the function parameters.\n     * Example: {\"type\":\"object\",\"properties\":{\"location\":{\"type\":\"string\"}},\"required\":[\"location\"]}\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "JSON Schema string for the function parameters.\nExample: {\"type\":\"object\",\"properties\":{\"location\":{\"type\":\"string\"}},\"required\":[\"location\"]}" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParametersJsonSchema;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenToolFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenToolFunction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenToolFunction, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenToolFunction_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenToolFunction, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenToolFunction_Statics::NewProp_ParametersJsonSchema = { "ParametersJsonSchema", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenToolFunction, ParametersJsonSchema), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParametersJsonSchema_MetaData), NewProp_ParametersJsonSchema_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenToolFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenToolFunction_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenToolFunction_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenToolFunction_Statics::NewProp_ParametersJsonSchema,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenToolFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenToolFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenToolFunction",
	Z_Construct_UScriptStruct_FGenToolFunction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenToolFunction_Statics::PropPointers),
	sizeof(FGenToolFunction),
	alignof(FGenToolFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenToolFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenToolFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenToolFunction()
{
	if (!Z_Registration_Info_UScriptStruct_FGenToolFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenToolFunction.InnerSingleton, Z_Construct_UScriptStruct_FGenToolFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenToolFunction.InnerSingleton;
}
// ********** End ScriptStruct FGenToolFunction ****************************************************

// ********** Begin ScriptStruct FGenTool **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenTool;
class UScriptStruct* FGenTool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenTool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenTool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenTool, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenTool"));
	}
	return Z_Registration_Info_UScriptStruct_FGenTool.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "GenAI|Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Always \"function\" for now */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Always \"function\" for now" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "Category", "GenAI|Tools" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Function;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenTool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenTool_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenTool, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenTool_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenTool, Function), Z_Construct_UScriptStruct_FGenToolFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) }; // 256918253
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenTool_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenTool_Statics::NewProp_Function,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenTool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenTool",
	Z_Construct_UScriptStruct_FGenTool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenTool_Statics::PropPointers),
	sizeof(FGenTool),
	alignof(FGenTool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenTool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenTool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenTool()
{
	if (!Z_Registration_Info_UScriptStruct_FGenTool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenTool.InnerSingleton, Z_Construct_UScriptStruct_FGenTool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenTool.InnerSingleton;
}
// ********** End ScriptStruct FGenTool ************************************************************

// ********** Begin ScriptStruct FGenToolCall ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenToolCall;
class UScriptStruct* FGenToolCall::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenToolCall.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenToolCall.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenToolCall, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenToolCall"));
	}
	return Z_Registration_Info_UScriptStruct_FGenToolCall.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenToolCall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "GenAI|Tools" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "GenAI|Tools" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "GenAI|Tools" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionArguments_MetaData[] = {
		{ "Category", "GenAI|Tools" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionArguments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenToolCall>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenToolCall_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenToolCall, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenToolCall_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenToolCall, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenToolCall_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenToolCall, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenToolCall_Statics::NewProp_FunctionArguments = { "FunctionArguments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenToolCall, FunctionArguments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionArguments_MetaData), NewProp_FunctionArguments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenToolCall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenToolCall_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenToolCall_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenToolCall_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenToolCall_Statics::NewProp_FunctionArguments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenToolCall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenToolCall_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenToolCall",
	Z_Construct_UScriptStruct_FGenToolCall_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenToolCall_Statics::PropPointers),
	sizeof(FGenToolCall),
	alignof(FGenToolCall),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenToolCall_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenToolCall_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenToolCall()
{
	if (!Z_Registration_Info_UScriptStruct_FGenToolCall.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenToolCall.InnerSingleton, Z_Construct_UScriptStruct_FGenToolCall_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenToolCall.InnerSingleton;
}
// ********** End ScriptStruct FGenToolCall ********************************************************

// ********** Begin ScriptStruct FGenOAIChatSettings ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenOAIChatSettings;
class UScriptStruct* FGenOAIChatSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenOAIChatSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenOAIChatSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenOAIChatSettings, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenOAIChatSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGenOAIChatSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  OPENAI CHAT SETTINGS\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n OPENAI CHAT SETTINGS\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelString_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overrides Model enum when non-empty \xe2\x80\x94 use for new or custom model IDs */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides Model enum when non-empty \xe2\x80\x94 use for new or custom model IDs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopP_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyPenalty_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "-2.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresencePenalty_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "-2.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemPrompt_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional system message prepended automatically */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional system message prepended automatically" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Seed for deterministic outputs (0 = disabled) */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seed for deterministic outputs (0 = disabled)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stop_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop sequences */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop sequences" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tools_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tools available to the model */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tools available to the model" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolChoice_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStructuredOutput_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enable structured JSON output. Provide the schema in StructuredOutputSchema.\n     * Requires a model that supports response_format.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable structured JSON output. Provide the schema in StructuredOutputSchema.\nRequires a model that supports response_format." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructuredOutputName_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructuredOutputSchema_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** JSON Schema string for structured output */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "JSON Schema string for structured output" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKeyOverride_MetaData[] = {
		{ "Category", "GenAI|OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the API key for this request (leave empty to use Project Settings) */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the API key for this request (leave empty to use Project Settings)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelString;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TopP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyPenalty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PresencePenalty;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SystemPrompt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Stop_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tools_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tools;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToolChoice_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToolChoice;
	static void NewProp_bStructuredOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStructuredOutput;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StructuredOutputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StructuredOutputSchema;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKeyOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenOAIChatSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, Model), Z_Construct_UEnum_UU_GenAI_EGenOAIModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 859855960
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_ModelString = { "ModelString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, ModelString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelString_MetaData), NewProp_ModelString_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, MaxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTokens_MetaData), NewProp_MaxTokens_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_TopP = { "TopP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, TopP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopP_MetaData), NewProp_TopP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_FrequencyPenalty = { "FrequencyPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, FrequencyPenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyPenalty_MetaData), NewProp_FrequencyPenalty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_PresencePenalty = { "PresencePenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, PresencePenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresencePenalty_MetaData), NewProp_PresencePenalty_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_SystemPrompt = { "SystemPrompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, SystemPrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemPrompt_MetaData), NewProp_SystemPrompt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Stop_Inner = { "Stop", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Stop = { "Stop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, Stop), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stop_MetaData), NewProp_Stop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Tools_Inner = { "Tools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenTool, METADATA_PARAMS(0, nullptr) }; // 2447510402
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Tools = { "Tools", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, Tools), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tools_MetaData), NewProp_Tools_MetaData) }; // 2447510402
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_ToolChoice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_ToolChoice = { "ToolChoice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, ToolChoice), Z_Construct_UEnum_UU_GenAI_EGenToolChoice, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolChoice_MetaData), NewProp_ToolChoice_MetaData) }; // 3073411762
void Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_bStructuredOutput_SetBit(void* Obj)
{
	((FGenOAIChatSettings*)Obj)->bStructuredOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_bStructuredOutput = { "bStructuredOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenOAIChatSettings), &Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_bStructuredOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStructuredOutput_MetaData), NewProp_bStructuredOutput_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_StructuredOutputName = { "StructuredOutputName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, StructuredOutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructuredOutputName_MetaData), NewProp_StructuredOutputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_StructuredOutputSchema = { "StructuredOutputSchema", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, StructuredOutputSchema), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructuredOutputSchema_MetaData), NewProp_StructuredOutputSchema_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_ApiKeyOverride = { "ApiKeyOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIChatSettings, ApiKeyOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKeyOverride_MetaData), NewProp_ApiKeyOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_ModelString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_MaxTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_TopP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_FrequencyPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_PresencePenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_SystemPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Stop_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Stop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Tools_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_Tools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_ToolChoice_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_ToolChoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_bStructuredOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_StructuredOutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_StructuredOutputSchema,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewProp_ApiKeyOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenOAIChatSettings",
	Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::PropPointers),
	sizeof(FGenOAIChatSettings),
	alignof(FGenOAIChatSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenOAIChatSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGenOAIChatSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenOAIChatSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenOAIChatSettings.InnerSingleton;
}
// ********** End ScriptStruct FGenOAIChatSettings *************************************************

// ********** Begin ScriptStruct FGenAnthropicChatSettings *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenAnthropicChatSettings;
class UScriptStruct* FGenAnthropicChatSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenAnthropicChatSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenAnthropicChatSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenAnthropicChatSettings, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenAnthropicChatSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGenAnthropicChatSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  ANTHROPIC CHAT SETTINGS\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n ANTHROPIC CHAT SETTINGS\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "GenAI|Anthropic" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelString_MetaData[] = {
		{ "Category", "GenAI|Anthropic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overrides Model enum when non-empty */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides Model enum when non-empty" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[] = {
		{ "Category", "GenAI|Anthropic" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "GenAI|Anthropic" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopP_MetaData[] = {
		{ "Category", "GenAI|Anthropic" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopK_MetaData[] = {
		{ "Category", "GenAI|Anthropic" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemPrompt_MetaData[] = {
		{ "Category", "GenAI|Anthropic" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tools_MetaData[] = {
		{ "Category", "GenAI|Anthropic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tools available to the model */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tools available to the model" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolChoice_MetaData[] = {
		{ "Category", "GenAI|Anthropic" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKeyOverride_MetaData[] = {
		{ "Category", "GenAI|Anthropic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the API key for this request */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the API key for this request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TopP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TopK;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SystemPrompt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tools_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tools;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToolChoice_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToolChoice;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKeyOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenAnthropicChatSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAnthropicChatSettings, Model), Z_Construct_UEnum_UU_GenAI_EGenAnthropicModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 2885867214
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_ModelString = { "ModelString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAnthropicChatSettings, ModelString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelString_MetaData), NewProp_ModelString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAnthropicChatSettings, MaxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTokens_MetaData), NewProp_MaxTokens_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAnthropicChatSettings, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_TopP = { "TopP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAnthropicChatSettings, TopP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopP_MetaData), NewProp_TopP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_TopK = { "TopK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAnthropicChatSettings, TopK), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopK_MetaData), NewProp_TopK_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_SystemPrompt = { "SystemPrompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAnthropicChatSettings, SystemPrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemPrompt_MetaData), NewProp_SystemPrompt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_Tools_Inner = { "Tools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenTool, METADATA_PARAMS(0, nullptr) }; // 2447510402
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_Tools = { "Tools", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAnthropicChatSettings, Tools), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tools_MetaData), NewProp_Tools_MetaData) }; // 2447510402
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_ToolChoice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_ToolChoice = { "ToolChoice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAnthropicChatSettings, ToolChoice), Z_Construct_UEnum_UU_GenAI_EGenToolChoice, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolChoice_MetaData), NewProp_ToolChoice_MetaData) }; // 3073411762
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_ApiKeyOverride = { "ApiKeyOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenAnthropicChatSettings, ApiKeyOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKeyOverride_MetaData), NewProp_ApiKeyOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_ModelString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_MaxTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_TopP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_TopK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_SystemPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_Tools_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_Tools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_ToolChoice_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_ToolChoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewProp_ApiKeyOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenAnthropicChatSettings",
	Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::PropPointers),
	sizeof(FGenAnthropicChatSettings),
	alignof(FGenAnthropicChatSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenAnthropicChatSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGenAnthropicChatSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenAnthropicChatSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenAnthropicChatSettings.InnerSingleton;
}
// ********** End ScriptStruct FGenAnthropicChatSettings *******************************************

// ********** Begin ScriptStruct FGenGoogleChatSettings ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenGoogleChatSettings;
class UScriptStruct* FGenGoogleChatSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenGoogleChatSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenGoogleChatSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenGoogleChatSettings, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenGoogleChatSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGenGoogleChatSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  GOOGLE GEMINI CHAT SETTINGS\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n GOOGLE GEMINI CHAT SETTINGS\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "GenAI|Google" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelString_MetaData[] = {
		{ "Category", "GenAI|Google" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overrides Model enum when non-empty */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides Model enum when non-empty" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "GenAI|Google" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxOutputTokens_MetaData[] = {
		{ "Category", "GenAI|Google" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopP_MetaData[] = {
		{ "Category", "GenAI|Google" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopK_MetaData[] = {
		{ "Category", "GenAI|Google" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemInstruction_MetaData[] = {
		{ "Category", "GenAI|Google" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** System instruction for Gemini 1.5+ */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "System instruction for Gemini 1.5+" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tools_MetaData[] = {
		{ "Category", "GenAI|Google" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKeyOverride_MetaData[] = {
		{ "Category", "GenAI|Google" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the API key for this request */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the API key for this request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelString;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxOutputTokens;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TopP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TopK;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SystemInstruction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tools_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tools;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKeyOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenGoogleChatSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleChatSettings, Model), Z_Construct_UEnum_UU_GenAI_EGenGoogleModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 420420543
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_ModelString = { "ModelString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleChatSettings, ModelString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelString_MetaData), NewProp_ModelString_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleChatSettings, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_MaxOutputTokens = { "MaxOutputTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleChatSettings, MaxOutputTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxOutputTokens_MetaData), NewProp_MaxOutputTokens_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_TopP = { "TopP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleChatSettings, TopP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopP_MetaData), NewProp_TopP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_TopK = { "TopK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleChatSettings, TopK), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopK_MetaData), NewProp_TopK_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_SystemInstruction = { "SystemInstruction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleChatSettings, SystemInstruction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemInstruction_MetaData), NewProp_SystemInstruction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_Tools_Inner = { "Tools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenTool, METADATA_PARAMS(0, nullptr) }; // 2447510402
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_Tools = { "Tools", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleChatSettings, Tools), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tools_MetaData), NewProp_Tools_MetaData) }; // 2447510402
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_ApiKeyOverride = { "ApiKeyOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleChatSettings, ApiKeyOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKeyOverride_MetaData), NewProp_ApiKeyOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_ModelString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_MaxOutputTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_TopP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_TopK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_SystemInstruction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_Tools_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_Tools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewProp_ApiKeyOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenGoogleChatSettings",
	Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::PropPointers),
	sizeof(FGenGoogleChatSettings),
	alignof(FGenGoogleChatSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenGoogleChatSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGenGoogleChatSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenGoogleChatSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenGoogleChatSettings.InnerSingleton;
}
// ********** End ScriptStruct FGenGoogleChatSettings **********************************************

// ********** Begin ScriptStruct FGenOAITTSSettings ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenOAITTSSettings;
class UScriptStruct* FGenOAITTSSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenOAITTSSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenOAITTSSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenOAITTSSettings, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenOAITTSSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGenOAITTSSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  OPENAI TTS SETTINGS\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n OPENAI TTS SETTINGS\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "GenAI|TTS" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Voice_MetaData[] = {
		{ "Category", "GenAI|TTS" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseFormat_MetaData[] = {
		{ "Category", "GenAI|TTS" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "GenAI|TTS" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.25" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instructions_MetaData[] = {
		{ "Category", "GenAI|TTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional voice instructions (supported by gpt-4o-mini-tts) */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional voice instructions (supported by gpt-4o-mini-tts)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKeyOverride_MetaData[] = {
		{ "Category", "GenAI|TTS" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Voice_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Voice;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResponseFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResponseFormat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Instructions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKeyOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenOAITTSSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAITTSSettings, Model), Z_Construct_UEnum_UU_GenAI_EGenOAITTSModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 3584668273
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Voice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAITTSSettings, Voice), Z_Construct_UEnum_UU_GenAI_EGenOAITTSVoice, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Voice_MetaData), NewProp_Voice_MetaData) }; // 3906796315
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_ResponseFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_ResponseFormat = { "ResponseFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAITTSSettings, ResponseFormat), Z_Construct_UEnum_UU_GenAI_EGenOAIAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseFormat_MetaData), NewProp_ResponseFormat_MetaData) }; // 1351492792
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAITTSSettings, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Instructions = { "Instructions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAITTSSettings, Instructions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instructions_MetaData), NewProp_Instructions_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_ApiKeyOverride = { "ApiKeyOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAITTSSettings, ApiKeyOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKeyOverride_MetaData), NewProp_ApiKeyOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Voice_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Voice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_ResponseFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_ResponseFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_Instructions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewProp_ApiKeyOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenOAITTSSettings",
	Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::PropPointers),
	sizeof(FGenOAITTSSettings),
	alignof(FGenOAITTSSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenOAITTSSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGenOAITTSSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenOAITTSSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenOAITTSSettings.InnerSingleton;
}
// ********** End ScriptStruct FGenOAITTSSettings **************************************************

// ********** Begin ScriptStruct FGenOAITranscriptionSettings **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenOAITranscriptionSettings;
class UScriptStruct* FGenOAITranscriptionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenOAITranscriptionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenOAITranscriptionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenOAITranscriptionSettings, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenOAITranscriptionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGenOAITranscriptionSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  OPENAI TRANSCRIPTION SETTINGS\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n OPENAI TRANSCRIPTION SETTINGS\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "GenAI|Transcription" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Currently only \"whisper-1\" is supported */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently only \"whisper-1\" is supported" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "Category", "GenAI|Transcription" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BCP-47 language code e.g. \"en\". Leave empty for auto-detect. */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BCP-47 language code e.g. \"en\". Leave empty for auto-detect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[] = {
		{ "Category", "GenAI|Transcription" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "GenAI|Transcription" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKeyOverride_MetaData[] = {
		{ "Category", "GenAI|Transcription" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKeyOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenOAITranscriptionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAITranscriptionSettings, Model), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAITranscriptionSettings, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAITranscriptionSettings, Prompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prompt_MetaData), NewProp_Prompt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAITranscriptionSettings, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::NewProp_ApiKeyOverride = { "ApiKeyOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAITranscriptionSettings, ApiKeyOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKeyOverride_MetaData), NewProp_ApiKeyOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::NewProp_Prompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::NewProp_ApiKeyOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenOAITranscriptionSettings",
	Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::PropPointers),
	sizeof(FGenOAITranscriptionSettings),
	alignof(FGenOAITranscriptionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenOAITranscriptionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGenOAITranscriptionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenOAITranscriptionSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenOAITranscriptionSettings.InnerSingleton;
}
// ********** End ScriptStruct FGenOAITranscriptionSettings ****************************************

// ********** Begin ScriptStruct FGenOAIImageSettings **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenOAIImageSettings;
class UScriptStruct* FGenOAIImageSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenOAIImageSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenOAIImageSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenOAIImageSettings, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenOAIImageSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGenOAIImageSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  OPENAI IMAGE GENERATION SETTINGS\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n OPENAI IMAGE GENERATION SETTINGS\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "GenAI|Image" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "GenAI|Image" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[] = {
		{ "Category", "GenAI|Image" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "Category", "GenAI|Image" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseFormat_MetaData[] = {
		{ "Category", "GenAI|Image" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_N_MetaData[] = {
		{ "Category", "GenAI|Image" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of images to generate (1-10, dall-e-2 supports >1) */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of images to generate (1-10, dall-e-2 supports >1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKeyOverride_MetaData[] = {
		{ "Category", "GenAI|Image" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Size;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Quality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Style_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Style;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResponseFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResponseFormat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_N;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKeyOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenOAIImageSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIImageSettings, Model), Z_Construct_UEnum_UU_GenAI_EGenOAIImageModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 799662875
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIImageSettings, Size), Z_Construct_UEnum_UU_GenAI_EGenOAIImageSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) }; // 4103346755
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIImageSettings, Quality), Z_Construct_UEnum_UU_GenAI_EGenOAIImageQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quality_MetaData), NewProp_Quality_MetaData) }; // 25769679
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Style_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIImageSettings, Style), Z_Construct_UEnum_UU_GenAI_EGenOAIImageStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) }; // 840507969
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_ResponseFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_ResponseFormat = { "ResponseFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIImageSettings, ResponseFormat), Z_Construct_UEnum_UU_GenAI_EGenOAIImageResponseFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseFormat_MetaData), NewProp_ResponseFormat_MetaData) }; // 886888457
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_N = { "N", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIImageSettings, N), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_N_MetaData), NewProp_N_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_ApiKeyOverride = { "ApiKeyOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOAIImageSettings, ApiKeyOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKeyOverride_MetaData), NewProp_ApiKeyOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Size_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Quality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Style_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_Style,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_ResponseFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_ResponseFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_N,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewProp_ApiKeyOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenOAIImageSettings",
	Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::PropPointers),
	sizeof(FGenOAIImageSettings),
	alignof(FGenOAIImageSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenOAIImageSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGenOAIImageSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenOAIImageSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenOAIImageSettings.InnerSingleton;
}
// ********** End ScriptStruct FGenOAIImageSettings ************************************************

// ********** Begin ScriptStruct FGenGoogleTTSSettings *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenGoogleTTSSettings;
class UScriptStruct* FGenGoogleTTSSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenGoogleTTSSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenGoogleTTSSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenGoogleTTSSettings, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenGoogleTTSSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGenGoogleTTSSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  GOOGLE TTS SETTINGS\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n GOOGLE TTS SETTINGS\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Voice_MetaData[] = {
		{ "Category", "GenAI|Google TTS" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceString_MetaData[] = {
		{ "Category", "GenAI|Google TTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used when Voice == Custom */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used when Voice == Custom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageCode_MetaData[] = {
		{ "Category", "GenAI|Google TTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BCP-47 language code, e.g. \"en-US\" */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BCP-47 language code, e.g. \"en-US\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakingRate_MetaData[] = {
		{ "Category", "GenAI|Google TTS" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-20.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "Category", "GenAI|Google TTS" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-20.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioEncoding_MetaData[] = {
		{ "Category", "GenAI|Google TTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \"MP3\", \"OGG_OPUS\", \"LINEAR16\", \"MULAW\", \"ALAW\" */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\"MP3\", \"OGG_OPUS\", \"LINEAR16\", \"MULAW\", \"ALAW\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKeyOverride_MetaData[] = {
		{ "Category", "GenAI|Google TTS" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Voice_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Voice;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LanguageCode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeakingRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioEncoding;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKeyOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenGoogleTTSSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_Voice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleTTSSettings, Voice), Z_Construct_UEnum_UU_GenAI_EGenGoogleTTSVoice, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Voice_MetaData), NewProp_Voice_MetaData) }; // 324783953
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_VoiceString = { "VoiceString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleTTSSettings, VoiceString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceString_MetaData), NewProp_VoiceString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_LanguageCode = { "LanguageCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleTTSSettings, LanguageCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageCode_MetaData), NewProp_LanguageCode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_SpeakingRate = { "SpeakingRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleTTSSettings, SpeakingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakingRate_MetaData), NewProp_SpeakingRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleTTSSettings, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_AudioEncoding = { "AudioEncoding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleTTSSettings, AudioEncoding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioEncoding_MetaData), NewProp_AudioEncoding_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_ApiKeyOverride = { "ApiKeyOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenGoogleTTSSettings, ApiKeyOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKeyOverride_MetaData), NewProp_ApiKeyOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_Voice_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_Voice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_VoiceString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_LanguageCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_SpeakingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_AudioEncoding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewProp_ApiKeyOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenGoogleTTSSettings",
	Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::PropPointers),
	sizeof(FGenGoogleTTSSettings),
	alignof(FGenGoogleTTSSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenGoogleTTSSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGenGoogleTTSSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenGoogleTTSSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenGoogleTTSSettings.InnerSingleton;
}
// ********** End ScriptStruct FGenGoogleTTSSettings ***********************************************

// ********** Begin ScriptStruct FGenDeepSeekChatSettings ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenDeepSeekChatSettings;
class UScriptStruct* FGenDeepSeekChatSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenDeepSeekChatSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenDeepSeekChatSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenDeepSeekChatSettings, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenDeepSeekChatSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGenDeepSeekChatSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  DEEPSEEK SETTINGS (OpenAI-compatible)\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n DEEPSEEK SETTINGS (OpenAI-compatible)\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "GenAI|DeepSeek" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelString_MetaData[] = {
		{ "Category", "GenAI|DeepSeek" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "GenAI|DeepSeek" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[] = {
		{ "Category", "GenAI|DeepSeek" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemPrompt_MetaData[] = {
		{ "Category", "GenAI|DeepSeek" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKeyOverride_MetaData[] = {
		{ "Category", "GenAI|DeepSeek" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelString;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SystemPrompt;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKeyOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenDeepSeekChatSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenDeepSeekChatSettings, Model), Z_Construct_UEnum_UU_GenAI_EGenDeepSeekModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 1338474102
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_ModelString = { "ModelString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenDeepSeekChatSettings, ModelString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelString_MetaData), NewProp_ModelString_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenDeepSeekChatSettings, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenDeepSeekChatSettings, MaxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTokens_MetaData), NewProp_MaxTokens_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_SystemPrompt = { "SystemPrompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenDeepSeekChatSettings, SystemPrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemPrompt_MetaData), NewProp_SystemPrompt_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_ApiKeyOverride = { "ApiKeyOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenDeepSeekChatSettings, ApiKeyOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKeyOverride_MetaData), NewProp_ApiKeyOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_ModelString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_MaxTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_SystemPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewProp_ApiKeyOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenDeepSeekChatSettings",
	Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::PropPointers),
	sizeof(FGenDeepSeekChatSettings),
	alignof(FGenDeepSeekChatSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenDeepSeekChatSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGenDeepSeekChatSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenDeepSeekChatSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenDeepSeekChatSettings.InnerSingleton;
}
// ********** End ScriptStruct FGenDeepSeekChatSettings ********************************************

// ********** Begin ScriptStruct FGenMistralChatSettings *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenMistralChatSettings;
class UScriptStruct* FGenMistralChatSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenMistralChatSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenMistralChatSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenMistralChatSettings, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenMistralChatSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGenMistralChatSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  MISTRAL SETTINGS (OpenAI-compatible)\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n MISTRAL SETTINGS (OpenAI-compatible)\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "GenAI|Mistral" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelString_MetaData[] = {
		{ "Category", "GenAI|Mistral" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "GenAI|Mistral" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[] = {
		{ "Category", "GenAI|Mistral" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemPrompt_MetaData[] = {
		{ "Category", "GenAI|Mistral" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKeyOverride_MetaData[] = {
		{ "Category", "GenAI|Mistral" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelString;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SystemPrompt;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKeyOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenMistralChatSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenMistralChatSettings, Model), Z_Construct_UEnum_UU_GenAI_EGenMistralModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 4106882500
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_ModelString = { "ModelString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenMistralChatSettings, ModelString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelString_MetaData), NewProp_ModelString_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenMistralChatSettings, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenMistralChatSettings, MaxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTokens_MetaData), NewProp_MaxTokens_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_SystemPrompt = { "SystemPrompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenMistralChatSettings, SystemPrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemPrompt_MetaData), NewProp_SystemPrompt_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_ApiKeyOverride = { "ApiKeyOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenMistralChatSettings, ApiKeyOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKeyOverride_MetaData), NewProp_ApiKeyOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_ModelString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_MaxTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_SystemPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewProp_ApiKeyOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenMistralChatSettings",
	Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::PropPointers),
	sizeof(FGenMistralChatSettings),
	alignof(FGenMistralChatSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenMistralChatSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGenMistralChatSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenMistralChatSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenMistralChatSettings.InnerSingleton;
}
// ********** End ScriptStruct FGenMistralChatSettings *********************************************

// ********** Begin ScriptStruct FGenOllamaChatSettings ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenOllamaChatSettings;
class UScriptStruct* FGenOllamaChatSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenOllamaChatSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenOllamaChatSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenOllamaChatSettings, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenOllamaChatSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGenOllamaChatSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  OLLAMA SETTINGS (Local)\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n OLLAMA SETTINGS (Local)\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "GenAI|Ollama" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelString_MetaData[] = {
		{ "Category", "GenAI|Ollama" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overrides Model enum when non-empty */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides Model enum when non-empty" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "GenAI|Ollama" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[] = {
		{ "Category", "GenAI|Ollama" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemPrompt_MetaData[] = {
		{ "Category", "GenAI|Ollama" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseUrl_MetaData[] = {
		{ "Category", "GenAI|Ollama" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base URL for Ollama (default is http://localhost:11434) */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base URL for Ollama (default is http://localhost:11434)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelString;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SystemPrompt;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenOllamaChatSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOllamaChatSettings, Model), Z_Construct_UEnum_UU_GenAI_EGenOllamaModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 1486189094
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_ModelString = { "ModelString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOllamaChatSettings, ModelString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelString_MetaData), NewProp_ModelString_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOllamaChatSettings, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOllamaChatSettings, MaxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTokens_MetaData), NewProp_MaxTokens_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_SystemPrompt = { "SystemPrompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOllamaChatSettings, SystemPrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemPrompt_MetaData), NewProp_SystemPrompt_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_BaseUrl = { "BaseUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenOllamaChatSettings, BaseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseUrl_MetaData), NewProp_BaseUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_ModelString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_MaxTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_SystemPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewProp_BaseUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenOllamaChatSettings",
	Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::PropPointers),
	sizeof(FGenOllamaChatSettings),
	alignof(FGenOllamaChatSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenOllamaChatSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGenOllamaChatSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenOllamaChatSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenOllamaChatSettings.InnerSingleton;
}
// ********** End ScriptStruct FGenOllamaChatSettings **********************************************

// ********** Begin ScriptStruct FGenChatResponse **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenChatResponse;
class UScriptStruct* FGenChatResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenChatResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenChatResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenChatResponse, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenChatResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FGenChatResponse.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenChatResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  RESPONSE TYPES\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n RESPONSE TYPES\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "Category", "GenAI|Response" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishReason_MetaData[] = {
		{ "Category", "GenAI|Response" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolCalls_MetaData[] = {
		{ "Category", "GenAI|Response" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "GenAI|Response" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTokens_MetaData[] = {
		{ "Category", "GenAI|Response" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletionTokens_MetaData[] = {
		{ "Category", "GenAI|Response" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalTokens_MetaData[] = {
		{ "Category", "GenAI|Response" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinishReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FinishReason;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToolCalls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolCalls;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PromptTokens;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompletionTokens;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalTokens;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenChatResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatResponse, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_FinishReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_FinishReason = { "FinishReason", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatResponse, FinishReason), Z_Construct_UEnum_UU_GenAI_EGenFinishReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishReason_MetaData), NewProp_FinishReason_MetaData) }; // 235854023
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_ToolCalls_Inner = { "ToolCalls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenToolCall, METADATA_PARAMS(0, nullptr) }; // 785198040
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_ToolCalls = { "ToolCalls", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatResponse, ToolCalls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolCalls_MetaData), NewProp_ToolCalls_MetaData) }; // 785198040
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatResponse, Model), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_PromptTokens = { "PromptTokens", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatResponse, PromptTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTokens_MetaData), NewProp_PromptTokens_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_CompletionTokens = { "CompletionTokens", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatResponse, CompletionTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletionTokens_MetaData), NewProp_CompletionTokens_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_TotalTokens = { "TotalTokens", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenChatResponse, TotalTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalTokens_MetaData), NewProp_TotalTokens_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenChatResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_FinishReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_FinishReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_ToolCalls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_ToolCalls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_PromptTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_CompletionTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewProp_TotalTokens,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenChatResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenChatResponse",
	Z_Construct_UScriptStruct_FGenChatResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatResponse_Statics::PropPointers),
	sizeof(FGenChatResponse),
	alignof(FGenChatResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenChatResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenChatResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenChatResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FGenChatResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenChatResponse.InnerSingleton, Z_Construct_UScriptStruct_FGenChatResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenChatResponse.InnerSingleton;
}
// ********** End ScriptStruct FGenChatResponse ****************************************************

// ********** Begin ScriptStruct FGenStreamDelta ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenStreamDelta;
class UScriptStruct* FGenStreamDelta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenStreamDelta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenStreamDelta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenStreamDelta, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenStreamDelta"));
	}
	return Z_Registration_Info_UScriptStruct_FGenStreamDelta.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenStreamDelta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentDelta_MetaData[] = {
		{ "Category", "GenAI|Stream" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Incremental text content for this chunk */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Incremental text content for this chunk" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentAccumulated_MetaData[] = {
		{ "Category", "GenAI|Stream" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Full accumulated content so far */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Full accumulated content so far" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishReason_MetaData[] = {
		{ "Category", "GenAI|Stream" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDone_MetaData[] = {
		{ "Category", "GenAI|Stream" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolCallId_MetaData[] = {
		{ "Category", "GenAI|Stream" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Partial tool call data (streaming tool calls) */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Partial tool call data (streaming tool calls)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolCallFunctionName_MetaData[] = {
		{ "Category", "GenAI|Stream" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolCallArgumentsDelta_MetaData[] = {
		{ "Category", "GenAI|Stream" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentDelta;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentAccumulated;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinishReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FinishReason;
	static void NewProp_bIsDone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDone;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolCallId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolCallFunctionName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolCallArgumentsDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenStreamDelta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_ContentDelta = { "ContentDelta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenStreamDelta, ContentDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentDelta_MetaData), NewProp_ContentDelta_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_ContentAccumulated = { "ContentAccumulated", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenStreamDelta, ContentAccumulated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentAccumulated_MetaData), NewProp_ContentAccumulated_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_FinishReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_FinishReason = { "FinishReason", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenStreamDelta, FinishReason), Z_Construct_UEnum_UU_GenAI_EGenFinishReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishReason_MetaData), NewProp_FinishReason_MetaData) }; // 235854023
void Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_bIsDone_SetBit(void* Obj)
{
	((FGenStreamDelta*)Obj)->bIsDone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_bIsDone = { "bIsDone", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenStreamDelta), &Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_bIsDone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDone_MetaData), NewProp_bIsDone_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_ToolCallId = { "ToolCallId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenStreamDelta, ToolCallId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolCallId_MetaData), NewProp_ToolCallId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_ToolCallFunctionName = { "ToolCallFunctionName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenStreamDelta, ToolCallFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolCallFunctionName_MetaData), NewProp_ToolCallFunctionName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_ToolCallArgumentsDelta = { "ToolCallArgumentsDelta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenStreamDelta, ToolCallArgumentsDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolCallArgumentsDelta_MetaData), NewProp_ToolCallArgumentsDelta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenStreamDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_ContentDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_ContentAccumulated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_FinishReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_FinishReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_bIsDone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_ToolCallId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_ToolCallFunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewProp_ToolCallArgumentsDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenStreamDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenStreamDelta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenStreamDelta",
	Z_Construct_UScriptStruct_FGenStreamDelta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenStreamDelta_Statics::PropPointers),
	sizeof(FGenStreamDelta),
	alignof(FGenStreamDelta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenStreamDelta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenStreamDelta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenStreamDelta()
{
	if (!Z_Registration_Info_UScriptStruct_FGenStreamDelta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenStreamDelta.InnerSingleton, Z_Construct_UScriptStruct_FGenStreamDelta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenStreamDelta.InnerSingleton;
}
// ********** End ScriptStruct FGenStreamDelta *****************************************************

// ********** Begin ScriptStruct FGenImageResult ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenImageResult;
class UScriptStruct* FGenImageResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenImageResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenImageResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenImageResult, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenImageResult"));
	}
	return Z_Registration_Info_UScriptStruct_FGenImageResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenImageResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "Category", "GenAI|Image" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B64Json_MetaData[] = {
		{ "Category", "GenAI|Image" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base64-encoded image data (when ResponseFormat == B64Json) */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base64-encoded image data (when ResponseFormat == B64Json)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevisedPrompt_MetaData[] = {
		{ "Category", "GenAI|Image" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DALL-E 3 may revise your prompt */" },
#endif
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DALL-E 3 may revise your prompt" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FStrPropertyParams NewProp_B64Json;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RevisedPrompt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenImageResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenImageResult_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenImageResult, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenImageResult_Statics::NewProp_B64Json = { "B64Json", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenImageResult, B64Json), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B64Json_MetaData), NewProp_B64Json_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenImageResult_Statics::NewProp_RevisedPrompt = { "RevisedPrompt", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenImageResult, RevisedPrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevisedPrompt_MetaData), NewProp_RevisedPrompt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenImageResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenImageResult_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenImageResult_Statics::NewProp_B64Json,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenImageResult_Statics::NewProp_RevisedPrompt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenImageResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenImageResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenImageResult",
	Z_Construct_UScriptStruct_FGenImageResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenImageResult_Statics::PropPointers),
	sizeof(FGenImageResult),
	alignof(FGenImageResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenImageResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenImageResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenImageResult()
{
	if (!Z_Registration_Info_UScriptStruct_FGenImageResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenImageResult.InnerSingleton, Z_Construct_UScriptStruct_FGenImageResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenImageResult.InnerSingleton;
}
// ********** End ScriptStruct FGenImageResult *****************************************************

// ********** Begin ScriptStruct FGenModelInfo *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenModelInfo;
class UScriptStruct* FGenModelInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenModelInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenModelInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenModelInfo, (UObject*)Z_Construct_UPackage__Script_UU_GenAI(), TEXT("GenModelInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FGenModelInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenModelInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "GenAI|Models" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedBy_MetaData[] = {
		{ "Category", "GenAI|Models" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[] = {
		{ "Category", "GenAI|Models" },
		{ "ModuleRelativePath", "Public/GenAITypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwnedBy;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Created;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenModelInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenModelInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenModelInfo, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenModelInfo_Statics::NewProp_OwnedBy = { "OwnedBy", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenModelInfo, OwnedBy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedBy_MetaData), NewProp_OwnedBy_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGenModelInfo_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenModelInfo, Created), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Created_MetaData), NewProp_Created_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenModelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenModelInfo_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenModelInfo_Statics::NewProp_OwnedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenModelInfo_Statics::NewProp_Created,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenModelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenModelInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
	nullptr,
	&NewStructOps,
	"GenModelInfo",
	Z_Construct_UScriptStruct_FGenModelInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenModelInfo_Statics::PropPointers),
	sizeof(FGenModelInfo),
	alignof(FGenModelInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenModelInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenModelInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenModelInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FGenModelInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenModelInfo.InnerSingleton, Z_Construct_UScriptStruct_FGenModelInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenModelInfo.InnerSingleton;
}
// ********** End ScriptStruct FGenModelInfo *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAITypes_h__Script_UU_GenAI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGenAILanguage_StaticEnum, TEXT("EGenAILanguage"), &Z_Registration_Info_UEnum_EGenAILanguage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 439263932U) },
		{ EGenOAIModel_StaticEnum, TEXT("EGenOAIModel"), &Z_Registration_Info_UEnum_EGenOAIModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 859855960U) },
		{ EGenAnthropicModel_StaticEnum, TEXT("EGenAnthropicModel"), &Z_Registration_Info_UEnum_EGenAnthropicModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2885867214U) },
		{ EGenGoogleModel_StaticEnum, TEXT("EGenGoogleModel"), &Z_Registration_Info_UEnum_EGenGoogleModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 420420543U) },
		{ EGenDeepSeekModel_StaticEnum, TEXT("EGenDeepSeekModel"), &Z_Registration_Info_UEnum_EGenDeepSeekModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1338474102U) },
		{ EGenMistralModel_StaticEnum, TEXT("EGenMistralModel"), &Z_Registration_Info_UEnum_EGenMistralModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4106882500U) },
		{ EGenOllamaModel_StaticEnum, TEXT("EGenOllamaModel"), &Z_Registration_Info_UEnum_EGenOllamaModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1486189094U) },
		{ EGenChatRole_StaticEnum, TEXT("EGenChatRole"), &Z_Registration_Info_UEnum_EGenChatRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3147061396U) },
		{ EGenContentType_StaticEnum, TEXT("EGenContentType"), &Z_Registration_Info_UEnum_EGenContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1289684794U) },
		{ EGenImageDetail_StaticEnum, TEXT("EGenImageDetail"), &Z_Registration_Info_UEnum_EGenImageDetail, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 501932710U) },
		{ EGenOAITTSVoice_StaticEnum, TEXT("EGenOAITTSVoice"), &Z_Registration_Info_UEnum_EGenOAITTSVoice, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3906796315U) },
		{ EGenOAITTSModel_StaticEnum, TEXT("EGenOAITTSModel"), &Z_Registration_Info_UEnum_EGenOAITTSModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3584668273U) },
		{ EGenOAIAudioFormat_StaticEnum, TEXT("EGenOAIAudioFormat"), &Z_Registration_Info_UEnum_EGenOAIAudioFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1351492792U) },
		{ EGenOAIImageModel_StaticEnum, TEXT("EGenOAIImageModel"), &Z_Registration_Info_UEnum_EGenOAIImageModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 799662875U) },
		{ EGenOAIImageSize_StaticEnum, TEXT("EGenOAIImageSize"), &Z_Registration_Info_UEnum_EGenOAIImageSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4103346755U) },
		{ EGenOAIImageQuality_StaticEnum, TEXT("EGenOAIImageQuality"), &Z_Registration_Info_UEnum_EGenOAIImageQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 25769679U) },
		{ EGenOAIImageStyle_StaticEnum, TEXT("EGenOAIImageStyle"), &Z_Registration_Info_UEnum_EGenOAIImageStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 840507969U) },
		{ EGenOAIImageResponseFormat_StaticEnum, TEXT("EGenOAIImageResponseFormat"), &Z_Registration_Info_UEnum_EGenOAIImageResponseFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 886888457U) },
		{ EGenGoogleTTSVoice_StaticEnum, TEXT("EGenGoogleTTSVoice"), &Z_Registration_Info_UEnum_EGenGoogleTTSVoice, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 324783953U) },
		{ EGenToolChoice_StaticEnum, TEXT("EGenToolChoice"), &Z_Registration_Info_UEnum_EGenToolChoice, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3073411762U) },
		{ EGenFinishReason_StaticEnum, TEXT("EGenFinishReason"), &Z_Registration_Info_UEnum_EGenFinishReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 235854023U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGenAISkill::StaticStruct, Z_Construct_UScriptStruct_FGenAISkill_Statics::NewStructOps, TEXT("GenAISkill"), &Z_Registration_Info_UScriptStruct_FGenAISkill, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenAISkill), 2767298060U) },
		{ FGenAISmartRouting::StaticStruct, Z_Construct_UScriptStruct_FGenAISmartRouting_Statics::NewStructOps, TEXT("GenAISmartRouting"), &Z_Registration_Info_UScriptStruct_FGenAISmartRouting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenAISmartRouting), 3808532415U) },
		{ FGenChatImageUrl::StaticStruct, Z_Construct_UScriptStruct_FGenChatImageUrl_Statics::NewStructOps, TEXT("GenChatImageUrl"), &Z_Registration_Info_UScriptStruct_FGenChatImageUrl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenChatImageUrl), 1198180960U) },
		{ FGenChatContentPart::StaticStruct, Z_Construct_UScriptStruct_FGenChatContentPart_Statics::NewStructOps, TEXT("GenChatContentPart"), &Z_Registration_Info_UScriptStruct_FGenChatContentPart, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenChatContentPart), 4165666317U) },
		{ FGenChatMessage::StaticStruct, Z_Construct_UScriptStruct_FGenChatMessage_Statics::NewStructOps, TEXT("GenChatMessage"), &Z_Registration_Info_UScriptStruct_FGenChatMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenChatMessage), 2097319744U) },
		{ FGenAIChatSession::StaticStruct, Z_Construct_UScriptStruct_FGenAIChatSession_Statics::NewStructOps, TEXT("GenAIChatSession"), &Z_Registration_Info_UScriptStruct_FGenAIChatSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenAIChatSession), 2623025062U) },
		{ FGenToolFunction::StaticStruct, Z_Construct_UScriptStruct_FGenToolFunction_Statics::NewStructOps, TEXT("GenToolFunction"), &Z_Registration_Info_UScriptStruct_FGenToolFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenToolFunction), 256918253U) },
		{ FGenTool::StaticStruct, Z_Construct_UScriptStruct_FGenTool_Statics::NewStructOps, TEXT("GenTool"), &Z_Registration_Info_UScriptStruct_FGenTool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenTool), 2447510402U) },
		{ FGenToolCall::StaticStruct, Z_Construct_UScriptStruct_FGenToolCall_Statics::NewStructOps, TEXT("GenToolCall"), &Z_Registration_Info_UScriptStruct_FGenToolCall, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenToolCall), 785198040U) },
		{ FGenOAIChatSettings::StaticStruct, Z_Construct_UScriptStruct_FGenOAIChatSettings_Statics::NewStructOps, TEXT("GenOAIChatSettings"), &Z_Registration_Info_UScriptStruct_FGenOAIChatSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenOAIChatSettings), 1339542557U) },
		{ FGenAnthropicChatSettings::StaticStruct, Z_Construct_UScriptStruct_FGenAnthropicChatSettings_Statics::NewStructOps, TEXT("GenAnthropicChatSettings"), &Z_Registration_Info_UScriptStruct_FGenAnthropicChatSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenAnthropicChatSettings), 1827156812U) },
		{ FGenGoogleChatSettings::StaticStruct, Z_Construct_UScriptStruct_FGenGoogleChatSettings_Statics::NewStructOps, TEXT("GenGoogleChatSettings"), &Z_Registration_Info_UScriptStruct_FGenGoogleChatSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenGoogleChatSettings), 2443905305U) },
		{ FGenOAITTSSettings::StaticStruct, Z_Construct_UScriptStruct_FGenOAITTSSettings_Statics::NewStructOps, TEXT("GenOAITTSSettings"), &Z_Registration_Info_UScriptStruct_FGenOAITTSSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenOAITTSSettings), 3979124614U) },
		{ FGenOAITranscriptionSettings::StaticStruct, Z_Construct_UScriptStruct_FGenOAITranscriptionSettings_Statics::NewStructOps, TEXT("GenOAITranscriptionSettings"), &Z_Registration_Info_UScriptStruct_FGenOAITranscriptionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenOAITranscriptionSettings), 898278126U) },
		{ FGenOAIImageSettings::StaticStruct, Z_Construct_UScriptStruct_FGenOAIImageSettings_Statics::NewStructOps, TEXT("GenOAIImageSettings"), &Z_Registration_Info_UScriptStruct_FGenOAIImageSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenOAIImageSettings), 2820581504U) },
		{ FGenGoogleTTSSettings::StaticStruct, Z_Construct_UScriptStruct_FGenGoogleTTSSettings_Statics::NewStructOps, TEXT("GenGoogleTTSSettings"), &Z_Registration_Info_UScriptStruct_FGenGoogleTTSSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenGoogleTTSSettings), 4053892702U) },
		{ FGenDeepSeekChatSettings::StaticStruct, Z_Construct_UScriptStruct_FGenDeepSeekChatSettings_Statics::NewStructOps, TEXT("GenDeepSeekChatSettings"), &Z_Registration_Info_UScriptStruct_FGenDeepSeekChatSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenDeepSeekChatSettings), 3181060217U) },
		{ FGenMistralChatSettings::StaticStruct, Z_Construct_UScriptStruct_FGenMistralChatSettings_Statics::NewStructOps, TEXT("GenMistralChatSettings"), &Z_Registration_Info_UScriptStruct_FGenMistralChatSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenMistralChatSettings), 4012785592U) },
		{ FGenOllamaChatSettings::StaticStruct, Z_Construct_UScriptStruct_FGenOllamaChatSettings_Statics::NewStructOps, TEXT("GenOllamaChatSettings"), &Z_Registration_Info_UScriptStruct_FGenOllamaChatSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenOllamaChatSettings), 2583972560U) },
		{ FGenChatResponse::StaticStruct, Z_Construct_UScriptStruct_FGenChatResponse_Statics::NewStructOps, TEXT("GenChatResponse"), &Z_Registration_Info_UScriptStruct_FGenChatResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenChatResponse), 2113138833U) },
		{ FGenStreamDelta::StaticStruct, Z_Construct_UScriptStruct_FGenStreamDelta_Statics::NewStructOps, TEXT("GenStreamDelta"), &Z_Registration_Info_UScriptStruct_FGenStreamDelta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenStreamDelta), 3881629086U) },
		{ FGenImageResult::StaticStruct, Z_Construct_UScriptStruct_FGenImageResult_Statics::NewStructOps, TEXT("GenImageResult"), &Z_Registration_Info_UScriptStruct_FGenImageResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenImageResult), 4244439271U) },
		{ FGenModelInfo::StaticStruct, Z_Construct_UScriptStruct_FGenModelInfo_Statics::NewStructOps, TEXT("GenModelInfo"), &Z_Registration_Info_UScriptStruct_FGenModelInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenModelInfo), 2270525479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAITypes_h__Script_UU_GenAI_4052335660(TEXT("/Script/UU_GenAI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAITypes_h__Script_UU_GenAI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAITypes_h__Script_UU_GenAI_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAITypes_h__Script_UU_GenAI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAITypes_h__Script_UU_GenAI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
