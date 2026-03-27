// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenAISettings.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenAISettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAISettings();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAISettings_NoRegister();
UU_GENAI_API UEnum* Z_Construct_UEnum_UU_GenAI_EGenAILanguage();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenAISkill();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenAISmartRouting();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGenAISettings Function SetAnthropicKey **********************************
struct Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics
{
	struct GenAISettings_eventSetAnthropicKey_Parms
	{
		FString PlaintextKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GenAI|Settings" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaintextKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlaintextKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::NewProp_PlaintextKey = { "PlaintextKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAISettings_eventSetAnthropicKey_Parms, PlaintextKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaintextKey_MetaData), NewProp_PlaintextKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::NewProp_PlaintextKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenAISettings, nullptr, "SetAnthropicKey", Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::GenAISettings_eventSetAnthropicKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::GenAISettings_eventSetAnthropicKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenAISettings_SetAnthropicKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenAISettings_SetAnthropicKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenAISettings::execSetAnthropicKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlaintextKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnthropicKey(Z_Param_PlaintextKey);
	P_NATIVE_END;
}
// ********** End Class UGenAISettings Function SetAnthropicKey ************************************

// ********** Begin Class UGenAISettings Function SetDeepSeekKey ***********************************
struct Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics
{
	struct GenAISettings_eventSetDeepSeekKey_Parms
	{
		FString PlaintextKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GenAI|Settings" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaintextKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlaintextKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::NewProp_PlaintextKey = { "PlaintextKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAISettings_eventSetDeepSeekKey_Parms, PlaintextKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaintextKey_MetaData), NewProp_PlaintextKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::NewProp_PlaintextKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenAISettings, nullptr, "SetDeepSeekKey", Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::GenAISettings_eventSetDeepSeekKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::GenAISettings_eventSetDeepSeekKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenAISettings::execSetDeepSeekKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlaintextKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDeepSeekKey(Z_Param_PlaintextKey);
	P_NATIVE_END;
}
// ********** End Class UGenAISettings Function SetDeepSeekKey *************************************

// ********** Begin Class UGenAISettings Function SetGoogleKey *************************************
struct Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics
{
	struct GenAISettings_eventSetGoogleKey_Parms
	{
		FString PlaintextKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GenAI|Settings" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaintextKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlaintextKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::NewProp_PlaintextKey = { "PlaintextKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAISettings_eventSetGoogleKey_Parms, PlaintextKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaintextKey_MetaData), NewProp_PlaintextKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::NewProp_PlaintextKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenAISettings, nullptr, "SetGoogleKey", Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::GenAISettings_eventSetGoogleKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::GenAISettings_eventSetGoogleKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenAISettings_SetGoogleKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenAISettings_SetGoogleKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenAISettings::execSetGoogleKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlaintextKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGoogleKey(Z_Param_PlaintextKey);
	P_NATIVE_END;
}
// ********** End Class UGenAISettings Function SetGoogleKey ***************************************

// ********** Begin Class UGenAISettings Function SetMistralKey ************************************
struct Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics
{
	struct GenAISettings_eventSetMistralKey_Parms
	{
		FString PlaintextKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GenAI|Settings" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaintextKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlaintextKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::NewProp_PlaintextKey = { "PlaintextKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAISettings_eventSetMistralKey_Parms, PlaintextKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaintextKey_MetaData), NewProp_PlaintextKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::NewProp_PlaintextKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenAISettings, nullptr, "SetMistralKey", Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::GenAISettings_eventSetMistralKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::GenAISettings_eventSetMistralKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenAISettings_SetMistralKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenAISettings_SetMistralKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenAISettings::execSetMistralKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlaintextKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMistralKey(Z_Param_PlaintextKey);
	P_NATIVE_END;
}
// ********** End Class UGenAISettings Function SetMistralKey **************************************

// ********** Begin Class UGenAISettings Function SetOpenAIKey *************************************
struct Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics
{
	struct GenAISettings_eventSetOpenAIKey_Parms
	{
		FString PlaintextKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GenAI|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Store the OpenAI key obfuscated */" },
#endif
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Store the OpenAI key obfuscated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaintextKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlaintextKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::NewProp_PlaintextKey = { "PlaintextKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAISettings_eventSetOpenAIKey_Parms, PlaintextKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaintextKey_MetaData), NewProp_PlaintextKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::NewProp_PlaintextKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenAISettings, nullptr, "SetOpenAIKey", Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::GenAISettings_eventSetOpenAIKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::GenAISettings_eventSetOpenAIKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenAISettings_SetOpenAIKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenAISettings_SetOpenAIKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenAISettings::execSetOpenAIKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlaintextKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOpenAIKey(Z_Param_PlaintextKey);
	P_NATIVE_END;
}
// ********** End Class UGenAISettings Function SetOpenAIKey ***************************************

// ********** Begin Class UGenAISettings ***********************************************************
void UGenAISettings::StaticRegisterNativesUGenAISettings()
{
	UClass* Class = UGenAISettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAnthropicKey", &UGenAISettings::execSetAnthropicKey },
		{ "SetDeepSeekKey", &UGenAISettings::execSetDeepSeekKey },
		{ "SetGoogleKey", &UGenAISettings::execSetGoogleKey },
		{ "SetMistralKey", &UGenAISettings::execSetMistralKey },
		{ "SetOpenAIKey", &UGenAISettings::execSetOpenAIKey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenAISettings;
UClass* UGenAISettings::GetPrivateStaticClass()
{
	using TClass = UGenAISettings;
	if (!Z_Registration_Info_UClass_UGenAISettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenAISettings"),
			Z_Registration_Info_UClass_UGenAISettings.InnerSingleton,
			StaticRegisterNativesUGenAISettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGenAISettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenAISettings_NoRegister()
{
	return UGenAISettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenAISettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Project Settings > Plugins > GenAI Plugin\n *\n * API keys are stored obfuscated (XOR + Base64) to avoid plaintext in config files.\n * For production use, consider a proxy server approach \xe2\x80\x94 see Authentication & Security docs.\n */" },
#endif
		{ "DisplayName", "GenAI Plugin" },
		{ "IncludePath", "GenAISettings.h" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Project Settings > Plugins > GenAI Plugin\n\nAPI keys are stored obfuscated (XOR + Base64) to avoid plaintext in config files.\nFor production use, consider a proxy server approach \xe2\x80\x94 see Authentication & Security docs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenAIKey_Obfuscated_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Your OpenAI API key (sk-...).\n     * Stored obfuscated. Set via Project Settings or UGenAISettings::SetOpenAIKey().\n     */" },
#endif
		{ "DisplayName", "OpenAI API Key" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Your OpenAI API key (sk-...).\nStored obfuscated. Set via Project Settings or UGenAISettings::SetOpenAIKey()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenAIBaseUrl_MetaData[] = {
		{ "Category", "OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Custom base URL for OpenAI-compatible endpoints.\n     * Leave empty to use the official OpenAI API (https://api.openai.com/v1).\n     */" },
#endif
		{ "DisplayName", "OpenAI Base URL Override" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom base URL for OpenAI-compatible endpoints.\nLeave empty to use the official OpenAI API (https://api.openai.com/v1)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnthropicKey_Obfuscated_MetaData[] = {
		{ "Category", "Anthropic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80 Anthropic \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "DisplayName", "Anthropic API Key" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80 Anthropic \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnthropicApiVersion_MetaData[] = {
		{ "Category", "Anthropic" },
		{ "DisplayName", "Anthropic API Version" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoogleKey_Obfuscated_MetaData[] = {
		{ "Category", "Google" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80 Google \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "DisplayName", "Google AI API Key" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80 Google \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeepSeekKey_Obfuscated_MetaData[] = {
		{ "Category", "DeepSeek" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80 DeepSeek \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "DisplayName", "DeepSeek API Key" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80 DeepSeek \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MistralKey_Obfuscated_MetaData[] = {
		{ "Category", "Mistral" },
		{ "DisplayName", "Mistral API Key" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OllamaBaseUrl_MetaData[] = {
		{ "Category", "Ollama" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Local Ollama server URL (e.g. http://localhost:11434).\n     */" },
#endif
		{ "DisplayName", "Ollama Base URL" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Ollama server URL (e.g. http://localhost:11434)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyUrl_MetaData[] = {
		{ "Category", "Proxy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Optional proxy server URL.\n     * When set, all API requests are routed through this proxy.\n     * Useful for team environments where you want to centralize API key management.\n     * Example: https://my-proxy.example.com/api\n     */" },
#endif
		{ "DisplayName", "Proxy URL" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional proxy server URL.\nWhen set, all API requests are routed through this proxy.\nUseful for team environments where you want to centralize API key management.\nExample: https://my-proxy.example.com/api" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyAuthHeader_MetaData[] = {
		{ "Category", "Proxy" },
		{ "DisplayName", "Proxy Auth Header" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtendedLogging_MetaData[] = {
		{ "Category", "Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enable extended request/response logging.\n     * Base64 image data is truncated to avoid flooding the output log.\n     */" },
#endif
		{ "DisplayName", "Enable Extended Logging" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable extended request/response logging.\nBase64 image data is truncated to avoid flooding the output log." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLanguage_MetaData[] = {
		{ "Category", "Language" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Preferred language for AI responses.\n     */" },
#endif
		{ "DisplayName", "Preferred Language" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Preferred language for AI responses." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skills_MetaData[] = {
		{ "Category", "Skills" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of expert skills (expert knowledge/instructions) available to the models.\n     */" },
#endif
		{ "DisplayName", "Installed Skills" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of expert skills (expert knowledge/instructions) available to the models." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmartRouting_MetaData[] = {
		{ "Category", "Smart Routing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Automatic task delegation based on input intent.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatic task delegation based on input intent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledModels_MetaData[] = {
		{ "Category", "Model Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Map of model IDs to their 'Enabled' status.\n     * If a model is not here, it is enabled by default.\n     */" },
#endif
		{ "DisplayName", "Enabled Models" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of model IDs to their 'Enabled' status.\nIf a model is not here, it is enabled by default." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChatModelId_MetaData[] = {
		{ "Category", "Model Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Default model ID for general chat.\n     */" },
#endif
		{ "DisplayName", "Default Chat Model" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default model ID for general chat." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCodeModelId_MetaData[] = {
		{ "Category", "Model Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Default model ID for code generation tools.\n     */" },
#endif
		{ "DisplayName", "Default Code Model" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default model ID for code generation tools." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "Model Parameters" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Aggressiveness / Temperature (0.0 to 2.0).\n     * Lower values (0.2) make the model more deterministic/focused.\n     * Higher values (0.8+) make it more creative/aggressive.\n     */" },
#endif
		{ "DisplayName", "Aggressiveness (Temperature)" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aggressiveness / Temperature (0.0 to 2.0).\nLower values (0.2) make the model more deterministic/focused.\nHigher values (0.8+) make it more creative/aggressive." },
#endif
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[] = {
		{ "Category", "Model Parameters" },
		{ "ClampMax", "128000" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Maximum response tokens for a single request.\n     */" },
#endif
		{ "DisplayName", "Max Tokens (Context Size Limit)" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum response tokens for a single request." },
#endif
		{ "UIMax", "128000" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxContextHistory_MetaData[] = {
		{ "Category", "Model Parameters" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * How many previous messages to keep in memory for context.\n     */" },
#endif
		{ "DisplayName", "Max Conversation History" },
		{ "ModuleRelativePath", "Public/GenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many previous messages to keep in memory for context." },
#endif
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OpenAIKey_Obfuscated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OpenAIBaseUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AnthropicKey_Obfuscated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AnthropicApiVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GoogleKey_Obfuscated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeepSeekKey_Obfuscated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MistralKey_Obfuscated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OllamaBaseUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProxyUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProxyAuthHeader;
	static void NewProp_bExtendedLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtendedLogging;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultLanguage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultLanguage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Skills_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Skills;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmartRouting;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnabledModels_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EnabledModels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EnabledModels;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultChatModelId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultCodeModelId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxContextHistory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenAISettings_SetAnthropicKey, "SetAnthropicKey" }, // 1974577289
		{ &Z_Construct_UFunction_UGenAISettings_SetDeepSeekKey, "SetDeepSeekKey" }, // 992516612
		{ &Z_Construct_UFunction_UGenAISettings_SetGoogleKey, "SetGoogleKey" }, // 249080648
		{ &Z_Construct_UFunction_UGenAISettings_SetMistralKey, "SetMistralKey" }, // 1217598115
		{ &Z_Construct_UFunction_UGenAISettings_SetOpenAIKey, "SetOpenAIKey" }, // 4245262619
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenAISettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_OpenAIKey_Obfuscated = { "OpenAIKey_Obfuscated", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, OpenAIKey_Obfuscated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenAIKey_Obfuscated_MetaData), NewProp_OpenAIKey_Obfuscated_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_OpenAIBaseUrl = { "OpenAIBaseUrl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, OpenAIBaseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenAIBaseUrl_MetaData), NewProp_OpenAIBaseUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_AnthropicKey_Obfuscated = { "AnthropicKey_Obfuscated", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, AnthropicKey_Obfuscated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnthropicKey_Obfuscated_MetaData), NewProp_AnthropicKey_Obfuscated_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_AnthropicApiVersion = { "AnthropicApiVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, AnthropicApiVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnthropicApiVersion_MetaData), NewProp_AnthropicApiVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_GoogleKey_Obfuscated = { "GoogleKey_Obfuscated", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, GoogleKey_Obfuscated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoogleKey_Obfuscated_MetaData), NewProp_GoogleKey_Obfuscated_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_DeepSeekKey_Obfuscated = { "DeepSeekKey_Obfuscated", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, DeepSeekKey_Obfuscated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeepSeekKey_Obfuscated_MetaData), NewProp_DeepSeekKey_Obfuscated_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_MistralKey_Obfuscated = { "MistralKey_Obfuscated", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, MistralKey_Obfuscated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MistralKey_Obfuscated_MetaData), NewProp_MistralKey_Obfuscated_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_OllamaBaseUrl = { "OllamaBaseUrl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, OllamaBaseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OllamaBaseUrl_MetaData), NewProp_OllamaBaseUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_ProxyUrl = { "ProxyUrl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, ProxyUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyUrl_MetaData), NewProp_ProxyUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_ProxyAuthHeader = { "ProxyAuthHeader", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, ProxyAuthHeader), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyAuthHeader_MetaData), NewProp_ProxyAuthHeader_MetaData) };
void Z_Construct_UClass_UGenAISettings_Statics::NewProp_bExtendedLogging_SetBit(void* Obj)
{
	((UGenAISettings*)Obj)->bExtendedLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_bExtendedLogging = { "bExtendedLogging", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGenAISettings), &Z_Construct_UClass_UGenAISettings_Statics::NewProp_bExtendedLogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtendedLogging_MetaData), NewProp_bExtendedLogging_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_DefaultLanguage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_DefaultLanguage = { "DefaultLanguage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, DefaultLanguage), Z_Construct_UEnum_UU_GenAI_EGenAILanguage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLanguage_MetaData), NewProp_DefaultLanguage_MetaData) }; // 439263932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_Skills_Inner = { "Skills", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenAISkill, METADATA_PARAMS(0, nullptr) }; // 2767298060
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, Skills), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skills_MetaData), NewProp_Skills_MetaData) }; // 2767298060
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_SmartRouting = { "SmartRouting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, SmartRouting), Z_Construct_UScriptStruct_FGenAISmartRouting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmartRouting_MetaData), NewProp_SmartRouting_MetaData) }; // 3808532415
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_EnabledModels_ValueProp = { "EnabledModels", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_EnabledModels_Key_KeyProp = { "EnabledModels_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_EnabledModels = { "EnabledModels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, EnabledModels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledModels_MetaData), NewProp_EnabledModels_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_DefaultChatModelId = { "DefaultChatModelId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, DefaultChatModelId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultChatModelId_MetaData), NewProp_DefaultChatModelId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_DefaultCodeModelId = { "DefaultCodeModelId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, DefaultCodeModelId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCodeModelId_MetaData), NewProp_DefaultCodeModelId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, MaxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTokens_MetaData), NewProp_MaxTokens_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenAISettings_Statics::NewProp_MaxContextHistory = { "MaxContextHistory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAISettings, MaxContextHistory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxContextHistory_MetaData), NewProp_MaxContextHistory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenAISettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_OpenAIKey_Obfuscated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_OpenAIBaseUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_AnthropicKey_Obfuscated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_AnthropicApiVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_GoogleKey_Obfuscated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_DeepSeekKey_Obfuscated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_MistralKey_Obfuscated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_OllamaBaseUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_ProxyUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_ProxyAuthHeader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_bExtendedLogging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_DefaultLanguage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_DefaultLanguage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_Skills_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_Skills,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_SmartRouting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_EnabledModels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_EnabledModels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_EnabledModels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_DefaultChatModelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_DefaultCodeModelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_MaxTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAISettings_Statics::NewProp_MaxContextHistory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAISettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenAISettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAISettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenAISettings_Statics::ClassParams = {
	&UGenAISettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenAISettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenAISettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAISettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenAISettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenAISettings()
{
	if (!Z_Registration_Info_UClass_UGenAISettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenAISettings.OuterSingleton, Z_Construct_UClass_UGenAISettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenAISettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenAISettings);
UGenAISettings::~UGenAISettings() {}
// ********** End Class UGenAISettings *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenAISettings, UGenAISettings::StaticClass, TEXT("UGenAISettings"), &Z_Registration_Info_UClass_UGenAISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenAISettings), 1789721373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h__Script_UU_GenAI_2372021060(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
