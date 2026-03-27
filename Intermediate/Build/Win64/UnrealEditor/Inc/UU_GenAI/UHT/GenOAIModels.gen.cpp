// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAI/GenOAIModels.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenOAIModels() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIModels();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIModels_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIModelsAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIModelsAsync_NoRegister();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenModelInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnOAIModelsComplete **************************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnOAIModelsComplete_Parms
	{
		TArray<FGenModelInfo> Models;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Models_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Models_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Models;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::NewProp_Models_Inner = { "Models", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenModelInfo, METADATA_PARAMS(0, nullptr) }; // 2270525479
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::NewProp_Models = { "Models", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnOAIModelsComplete_Parms, Models), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Models_MetaData), NewProp_Models_MetaData) }; // 2270525479
void Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnOAIModelsComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnOAIModelsComplete_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::NewProp_Models_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::NewProp_Models,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnOAIModelsComplete__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAIModelsComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAIModelsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOAIModelsComplete_DelegateWrapper(const FMulticastScriptDelegate& OnOAIModelsComplete, TArray<FGenModelInfo> const& Models, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnOAIModelsComplete_Parms
	{
		TArray<FGenModelInfo> Models;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnOAIModelsComplete_Parms Parms;
	Parms.Models=Models;
	Parms.bSuccess=bSuccess ? true : false;
	OnOAIModelsComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnOAIModelsComplete ****************************************************

// ********** Begin Class UGenOAIModelsAsync Function RequestGetAllOpenAIModels ********************
struct Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics
{
	struct GenOAIModelsAsync_eventRequestGetAllOpenAIModels_Parms
	{
		UObject* WorldContextObject;
		FString ApiKeyOverride;
		UGenOAIModelsAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|OpenAI" },
		{ "DisplayName", "Request Get All OpenAI Models" },
		{ "Keywords", "openai models list available" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIModels.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKeyOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKeyOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIModelsAsync_eventRequestGetAllOpenAIModels_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::NewProp_ApiKeyOverride = { "ApiKeyOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIModelsAsync_eventRequestGetAllOpenAIModels_Parms, ApiKeyOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKeyOverride_MetaData), NewProp_ApiKeyOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIModelsAsync_eventRequestGetAllOpenAIModels_Parms, ReturnValue), Z_Construct_UClass_UGenOAIModelsAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::NewProp_ApiKeyOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenOAIModelsAsync, nullptr, "RequestGetAllOpenAIModels", Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::GenOAIModelsAsync_eventRequestGetAllOpenAIModels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::GenOAIModelsAsync_eventRequestGetAllOpenAIModels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenOAIModelsAsync::execRequestGetAllOpenAIModels)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_ApiKeyOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenOAIModelsAsync**)Z_Param__Result=UGenOAIModelsAsync::RequestGetAllOpenAIModels(Z_Param_WorldContextObject,Z_Param_ApiKeyOverride);
	P_NATIVE_END;
}
// ********** End Class UGenOAIModelsAsync Function RequestGetAllOpenAIModels **********************

// ********** Begin Class UGenOAIModelsAsync *******************************************************
void UGenOAIModelsAsync::StaticRegisterNativesUGenOAIModelsAsync()
{
	UClass* Class = UGenOAIModelsAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestGetAllOpenAIModels", &UGenOAIModelsAsync::execRequestGetAllOpenAIModels },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAIModelsAsync;
UClass* UGenOAIModelsAsync::GetPrivateStaticClass()
{
	using TClass = UGenOAIModelsAsync;
	if (!Z_Registration_Info_UClass_UGenOAIModelsAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAIModelsAsync"),
			Z_Registration_Info_UClass_UGenOAIModelsAsync.InnerSingleton,
			StaticRegisterNativesUGenOAIModelsAsync,
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
	return Z_Registration_Info_UClass_UGenOAIModelsAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAIModelsAsync_NoRegister()
{
	return UGenOAIModelsAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAIModelsAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request Get All OpenAI Models\n *\n * Fetches the list of available models from the OpenAI API in real-time.\n */" },
#endif
		{ "HideThen", "TRUE" },
		{ "IncludePath", "OpenAI/GenOAIModels.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request Get All OpenAI Models\n\nFetches the list of available models from the OpenAI API in real-time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIModels.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenOAIModelsAsync_RequestGetAllOpenAIModels, "RequestGetAllOpenAIModels" }, // 1362627640
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAIModelsAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAIModelsAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAIModelsAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 1498682393
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAIModelsAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAIModelsAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIModelsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1498682393
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenOAIModelsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAIModelsAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAIModelsAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIModelsAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenOAIModelsAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIModelsAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAIModelsAsync_Statics::ClassParams = {
	&UGenOAIModelsAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenOAIModelsAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIModelsAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIModelsAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAIModelsAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAIModelsAsync()
{
	if (!Z_Registration_Info_UClass_UGenOAIModelsAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAIModelsAsync.OuterSingleton, Z_Construct_UClass_UGenOAIModelsAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAIModelsAsync.OuterSingleton;
}
UGenOAIModelsAsync::UGenOAIModelsAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAIModelsAsync);
UGenOAIModelsAsync::~UGenOAIModelsAsync() {}
// ********** End Class UGenOAIModelsAsync *********************************************************

// ********** Begin Class UGenOAIModels ************************************************************
void UGenOAIModels::StaticRegisterNativesUGenOAIModels()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAIModels;
UClass* UGenOAIModels::GetPrivateStaticClass()
{
	using TClass = UGenOAIModels;
	if (!Z_Registration_Info_UClass_UGenOAIModels.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAIModels"),
			Z_Registration_Info_UClass_UGenOAIModels.InnerSingleton,
			StaticRegisterNativesUGenOAIModels,
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
	return Z_Registration_Info_UClass_UGenOAIModels.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAIModels_NoRegister()
{
	return UGenOAIModels::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAIModels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OpenAI/GenOAIModels.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIModels.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAIModels>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenOAIModels_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIModels_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAIModels_Statics::ClassParams = {
	&UGenOAIModels::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIModels_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAIModels_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAIModels()
{
	if (!Z_Registration_Info_UClass_UGenOAIModels.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAIModels.OuterSingleton, Z_Construct_UClass_UGenOAIModels_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAIModels.OuterSingleton;
}
UGenOAIModels::UGenOAIModels(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAIModels);
UGenOAIModels::~UGenOAIModels() {}
// ********** End Class UGenOAIModels **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenOAIModelsAsync, UGenOAIModelsAsync::StaticClass, TEXT("UGenOAIModelsAsync"), &Z_Registration_Info_UClass_UGenOAIModelsAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAIModelsAsync), 167481242U) },
		{ Z_Construct_UClass_UGenOAIModels, UGenOAIModels::StaticClass, TEXT("UGenOAIModels"), &Z_Registration_Info_UClass_UGenOAIModels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAIModels), 2954914938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h__Script_UU_GenAI_275902012(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
