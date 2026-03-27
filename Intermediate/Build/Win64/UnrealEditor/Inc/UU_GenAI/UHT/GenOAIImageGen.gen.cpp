// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAI/GenOAIImageGen.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenOAIImageGen() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageEditAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageEditAsync_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageGen();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageGen_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageGenAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageGenAsync_NoRegister();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenImageResult();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenOAIImageSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnOAIImageComplete ***************************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnOAIImageComplete_Parms
	{
		TArray<FGenImageResult> Results;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIImageGen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenImageResult, METADATA_PARAMS(0, nullptr) }; // 4244439271
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnOAIImageComplete_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) }; // 4244439271
void Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnOAIImageComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnOAIImageComplete_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::NewProp_Results,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnOAIImageComplete__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAIImageComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAIImageComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOAIImageComplete_DelegateWrapper(const FMulticastScriptDelegate& OnOAIImageComplete, TArray<FGenImageResult> const& Results, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnOAIImageComplete_Parms
	{
		TArray<FGenImageResult> Results;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnOAIImageComplete_Parms Parms;
	Parms.Results=Results;
	Parms.bSuccess=bSuccess ? true : false;
	OnOAIImageComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnOAIImageComplete *****************************************************

// ********** Begin Class UGenOAIImageGenAsync Function RequestOpenAIImageGeneration ***************
struct Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics
{
	struct GenOAIImageGenAsync_eventRequestOpenAIImageGeneration_Parms
	{
		UObject* WorldContextObject;
		FString Prompt;
		FGenOAIImageSettings Settings;
		UGenOAIImageGenAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|OpenAI" },
		{ "DisplayName", "Request OpenAI Image Generation" },
		{ "Keywords", "openai dalle image generation ai art" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIImageGen.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIImageGenAsync_eventRequestOpenAIImageGeneration_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIImageGenAsync_eventRequestOpenAIImageGeneration_Parms, Prompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prompt_MetaData), NewProp_Prompt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIImageGenAsync_eventRequestOpenAIImageGeneration_Parms, Settings), Z_Construct_UScriptStruct_FGenOAIImageSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2820581504
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIImageGenAsync_eventRequestOpenAIImageGeneration_Parms, ReturnValue), Z_Construct_UClass_UGenOAIImageGenAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::NewProp_Prompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenOAIImageGenAsync, nullptr, "RequestOpenAIImageGeneration", Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::GenOAIImageGenAsync_eventRequestOpenAIImageGeneration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::GenOAIImageGenAsync_eventRequestOpenAIImageGeneration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenOAIImageGenAsync::execRequestOpenAIImageGeneration)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
	P_GET_STRUCT_REF(FGenOAIImageSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenOAIImageGenAsync**)Z_Param__Result=UGenOAIImageGenAsync::RequestOpenAIImageGeneration(Z_Param_WorldContextObject,Z_Param_Prompt,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenOAIImageGenAsync Function RequestOpenAIImageGeneration *****************

// ********** Begin Class UGenOAIImageGenAsync *****************************************************
void UGenOAIImageGenAsync::StaticRegisterNativesUGenOAIImageGenAsync()
{
	UClass* Class = UGenOAIImageGenAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestOpenAIImageGeneration", &UGenOAIImageGenAsync::execRequestOpenAIImageGeneration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAIImageGenAsync;
UClass* UGenOAIImageGenAsync::GetPrivateStaticClass()
{
	using TClass = UGenOAIImageGenAsync;
	if (!Z_Registration_Info_UClass_UGenOAIImageGenAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAIImageGenAsync"),
			Z_Registration_Info_UClass_UGenOAIImageGenAsync.InnerSingleton,
			StaticRegisterNativesUGenOAIImageGenAsync,
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
	return Z_Registration_Info_UClass_UGenOAIImageGenAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAIImageGenAsync_NoRegister()
{
	return UGenOAIImageGenAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAIImageGenAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request OpenAI Image Generation\n *\n * Generates images using DALL-E 2, DALL-E 3, or gpt-image-1.\n */" },
#endif
		{ "HideThen", "TRUE" },
		{ "IncludePath", "OpenAI/GenOAIImageGen.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIImageGen.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request OpenAI Image Generation\n\nGenerates images using DALL-E 2, DALL-E 3, or gpt-image-1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIImageGen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIImageGen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenOAIImageGenAsync_RequestOpenAIImageGeneration, "RequestOpenAIImageGeneration" }, // 1059562429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAIImageGenAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAIImageGenAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAIImageGenAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 420380810
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAIImageGenAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAIImageGenAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 420380810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenOAIImageGenAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAIImageGenAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAIImageGenAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIImageGenAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenOAIImageGenAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIImageGenAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAIImageGenAsync_Statics::ClassParams = {
	&UGenOAIImageGenAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenOAIImageGenAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIImageGenAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIImageGenAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAIImageGenAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAIImageGenAsync()
{
	if (!Z_Registration_Info_UClass_UGenOAIImageGenAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAIImageGenAsync.OuterSingleton, Z_Construct_UClass_UGenOAIImageGenAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAIImageGenAsync.OuterSingleton;
}
UGenOAIImageGenAsync::UGenOAIImageGenAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAIImageGenAsync);
UGenOAIImageGenAsync::~UGenOAIImageGenAsync() {}
// ********** End Class UGenOAIImageGenAsync *******************************************************

// ********** Begin Class UGenOAIImageEditAsync Function RequestOpenAIImageEdit ********************
struct Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics
{
	struct GenOAIImageEditAsync_eventRequestOpenAIImageEdit_Parms
	{
		UObject* WorldContextObject;
		FString Prompt;
		TArray<uint8> ImagePngData;
		TArray<uint8> MaskPngData;
		FGenOAIImageSettings Settings;
		UGenOAIImageEditAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|OpenAI" },
		{ "DisplayName", "Request OpenAI Image Edit" },
		{ "Keywords", "openai dalle image edit inpaint" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIImageGen.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImagePngData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskPngData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImagePngData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImagePngData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaskPngData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaskPngData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIImageEditAsync_eventRequestOpenAIImageEdit_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIImageEditAsync_eventRequestOpenAIImageEdit_Parms, Prompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prompt_MetaData), NewProp_Prompt_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_ImagePngData_Inner = { "ImagePngData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_ImagePngData = { "ImagePngData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIImageEditAsync_eventRequestOpenAIImageEdit_Parms, ImagePngData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImagePngData_MetaData), NewProp_ImagePngData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_MaskPngData_Inner = { "MaskPngData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_MaskPngData = { "MaskPngData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIImageEditAsync_eventRequestOpenAIImageEdit_Parms, MaskPngData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskPngData_MetaData), NewProp_MaskPngData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIImageEditAsync_eventRequestOpenAIImageEdit_Parms, Settings), Z_Construct_UScriptStruct_FGenOAIImageSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2820581504
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIImageEditAsync_eventRequestOpenAIImageEdit_Parms, ReturnValue), Z_Construct_UClass_UGenOAIImageEditAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_Prompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_ImagePngData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_ImagePngData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_MaskPngData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_MaskPngData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenOAIImageEditAsync, nullptr, "RequestOpenAIImageEdit", Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::GenOAIImageEditAsync_eventRequestOpenAIImageEdit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::GenOAIImageEditAsync_eventRequestOpenAIImageEdit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenOAIImageEditAsync::execRequestOpenAIImageEdit)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_ImagePngData);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_MaskPngData);
	P_GET_STRUCT_REF(FGenOAIImageSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenOAIImageEditAsync**)Z_Param__Result=UGenOAIImageEditAsync::RequestOpenAIImageEdit(Z_Param_WorldContextObject,Z_Param_Prompt,Z_Param_Out_ImagePngData,Z_Param_Out_MaskPngData,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenOAIImageEditAsync Function RequestOpenAIImageEdit **********************

// ********** Begin Class UGenOAIImageEditAsync ****************************************************
void UGenOAIImageEditAsync::StaticRegisterNativesUGenOAIImageEditAsync()
{
	UClass* Class = UGenOAIImageEditAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestOpenAIImageEdit", &UGenOAIImageEditAsync::execRequestOpenAIImageEdit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAIImageEditAsync;
UClass* UGenOAIImageEditAsync::GetPrivateStaticClass()
{
	using TClass = UGenOAIImageEditAsync;
	if (!Z_Registration_Info_UClass_UGenOAIImageEditAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAIImageEditAsync"),
			Z_Registration_Info_UClass_UGenOAIImageEditAsync.InnerSingleton,
			StaticRegisterNativesUGenOAIImageEditAsync,
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
	return Z_Registration_Info_UClass_UGenOAIImageEditAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAIImageEditAsync_NoRegister()
{
	return UGenOAIImageEditAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAIImageEditAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request OpenAI Image Edit\n *\n * Edit or extend an existing image using DALL-E.\n * Requires a base image and optional mask (both as RGBA PNG bytes).\n */" },
#endif
		{ "HideThen", "TRUE" },
		{ "IncludePath", "OpenAI/GenOAIImageGen.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIImageGen.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request OpenAI Image Edit\n\nEdit or extend an existing image using DALL-E.\nRequires a base image and optional mask (both as RGBA PNG bytes)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIImageGen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIImageGen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenOAIImageEditAsync_RequestOpenAIImageEdit, "RequestOpenAIImageEdit" }, // 1934157322
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAIImageEditAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAIImageEditAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAIImageEditAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 420380810
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAIImageEditAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAIImageEditAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIImageComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 420380810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenOAIImageEditAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAIImageEditAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAIImageEditAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIImageEditAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenOAIImageEditAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIImageEditAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAIImageEditAsync_Statics::ClassParams = {
	&UGenOAIImageEditAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenOAIImageEditAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIImageEditAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIImageEditAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAIImageEditAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAIImageEditAsync()
{
	if (!Z_Registration_Info_UClass_UGenOAIImageEditAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAIImageEditAsync.OuterSingleton, Z_Construct_UClass_UGenOAIImageEditAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAIImageEditAsync.OuterSingleton;
}
UGenOAIImageEditAsync::UGenOAIImageEditAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAIImageEditAsync);
UGenOAIImageEditAsync::~UGenOAIImageEditAsync() {}
// ********** End Class UGenOAIImageEditAsync ******************************************************

// ********** Begin Class UGenOAIImageGen **********************************************************
void UGenOAIImageGen::StaticRegisterNativesUGenOAIImageGen()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAIImageGen;
UClass* UGenOAIImageGen::GetPrivateStaticClass()
{
	using TClass = UGenOAIImageGen;
	if (!Z_Registration_Info_UClass_UGenOAIImageGen.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAIImageGen"),
			Z_Registration_Info_UClass_UGenOAIImageGen.InnerSingleton,
			StaticRegisterNativesUGenOAIImageGen,
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
	return Z_Registration_Info_UClass_UGenOAIImageGen.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAIImageGen_NoRegister()
{
	return UGenOAIImageGen::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAIImageGen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OpenAI/GenOAIImageGen.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIImageGen.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAIImageGen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenOAIImageGen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIImageGen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAIImageGen_Statics::ClassParams = {
	&UGenOAIImageGen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIImageGen_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAIImageGen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAIImageGen()
{
	if (!Z_Registration_Info_UClass_UGenOAIImageGen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAIImageGen.OuterSingleton, Z_Construct_UClass_UGenOAIImageGen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAIImageGen.OuterSingleton;
}
UGenOAIImageGen::UGenOAIImageGen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAIImageGen);
UGenOAIImageGen::~UGenOAIImageGen() {}
// ********** End Class UGenOAIImageGen ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenOAIImageGenAsync, UGenOAIImageGenAsync::StaticClass, TEXT("UGenOAIImageGenAsync"), &Z_Registration_Info_UClass_UGenOAIImageGenAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAIImageGenAsync), 59124221U) },
		{ Z_Construct_UClass_UGenOAIImageEditAsync, UGenOAIImageEditAsync::StaticClass, TEXT("UGenOAIImageEditAsync"), &Z_Registration_Info_UClass_UGenOAIImageEditAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAIImageEditAsync), 1687249374U) },
		{ Z_Construct_UClass_UGenOAIImageGen, UGenOAIImageGen::StaticClass, TEXT("UGenOAIImageGen"), &Z_Registration_Info_UClass_UGenOAIImageGen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAIImageGen), 2710963889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h__Script_UU_GenAI_3378794414(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
