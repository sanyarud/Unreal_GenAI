// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anthropic/GenAnthropicChatStream.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenAnthropicChatStream() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatStream();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatStream_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatStreamAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatStreamAsync_NoRegister();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenAnthropicChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatMessage();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenStreamDelta();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAnthropicStreamDelta ***********************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnAnthropicStreamDelta_Parms
	{
		FGenStreamDelta Delta;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChatStream.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnAnthropicStreamDelta_Parms, Delta), Z_Construct_UScriptStruct_FGenStreamDelta, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) }; // 3881629086
void Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnAnthropicStreamDelta_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnAnthropicStreamDelta_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnAnthropicStreamDelta__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::_Script_UU_GenAI_eventOnAnthropicStreamDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::_Script_UU_GenAI_eventOnAnthropicStreamDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnthropicStreamDelta_DelegateWrapper(const FMulticastScriptDelegate& OnAnthropicStreamDelta, FGenStreamDelta const& Delta, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnAnthropicStreamDelta_Parms
	{
		FGenStreamDelta Delta;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnAnthropicStreamDelta_Parms Parms;
	Parms.Delta=Delta;
	Parms.bSuccess=bSuccess ? true : false;
	OnAnthropicStreamDelta.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnthropicStreamDelta *************************************************

// ********** Begin Class UGenAnthropicChatStreamAsync Function RequestAnthropicChatStream *********
struct Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics
{
	struct GenAnthropicChatStreamAsync_eventRequestAnthropicChatStream_Parms
	{
		UObject* WorldContextObject;
		TArray<FGenChatMessage> Messages;
		FGenAnthropicChatSettings Settings;
		UGenAnthropicChatStreamAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|Anthropic" },
		{ "DisplayName", "Request Anthropic Chat Stream" },
		{ "Keywords", "anthropic claude stream chat ai llm streaming" },
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChatStream.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Messages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Messages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAnthropicChatStreamAsync_eventRequestAnthropicChatStream_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenChatMessage, METADATA_PARAMS(0, nullptr) }; // 2746569061
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAnthropicChatStreamAsync_eventRequestAnthropicChatStream_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 2746569061
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAnthropicChatStreamAsync_eventRequestAnthropicChatStream_Parms, Settings), Z_Construct_UScriptStruct_FGenAnthropicChatSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1827156812
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAnthropicChatStreamAsync_eventRequestAnthropicChatStream_Parms, ReturnValue), Z_Construct_UClass_UGenAnthropicChatStreamAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::NewProp_Messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenAnthropicChatStreamAsync, nullptr, "RequestAnthropicChatStream", Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::GenAnthropicChatStreamAsync_eventRequestAnthropicChatStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::GenAnthropicChatStreamAsync_eventRequestAnthropicChatStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenAnthropicChatStreamAsync::execRequestAnthropicChatStream)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FGenChatMessage,Z_Param_Out_Messages);
	P_GET_STRUCT_REF(FGenAnthropicChatSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenAnthropicChatStreamAsync**)Z_Param__Result=UGenAnthropicChatStreamAsync::RequestAnthropicChatStream(Z_Param_WorldContextObject,Z_Param_Out_Messages,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenAnthropicChatStreamAsync Function RequestAnthropicChatStream ***********

// ********** Begin Class UGenAnthropicChatStreamAsync *********************************************
void UGenAnthropicChatStreamAsync::StaticRegisterNativesUGenAnthropicChatStreamAsync()
{
	UClass* Class = UGenAnthropicChatStreamAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestAnthropicChatStream", &UGenAnthropicChatStreamAsync::execRequestAnthropicChatStream },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenAnthropicChatStreamAsync;
UClass* UGenAnthropicChatStreamAsync::GetPrivateStaticClass()
{
	using TClass = UGenAnthropicChatStreamAsync;
	if (!Z_Registration_Info_UClass_UGenAnthropicChatStreamAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenAnthropicChatStreamAsync"),
			Z_Registration_Info_UClass_UGenAnthropicChatStreamAsync.InnerSingleton,
			StaticRegisterNativesUGenAnthropicChatStreamAsync,
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
	return Z_Registration_Info_UClass_UGenAnthropicChatStreamAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenAnthropicChatStreamAsync_NoRegister()
{
	return UGenAnthropicChatStreamAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request Anthropic Chat Stream\n *\n * Streams token-by-token output from the Anthropic Claude API using SSE.\n */" },
#endif
		{ "HideThen", "TRUE" },
		{ "IncludePath", "Anthropic/GenAnthropicChatStream.h" },
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChatStream.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request Anthropic Chat Stream\n\nStreams token-by-token output from the Anthropic Claude API using SSE." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDelta_MetaData[] = {
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChatStream.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChatStream.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChatStream.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDelta;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenAnthropicChatStreamAsync_RequestAnthropicChatStream, "RequestAnthropicChatStream" }, // 3243229185
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenAnthropicChatStreamAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::NewProp_OnDelta = { "OnDelta", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAnthropicChatStreamAsync, OnDelta), Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDelta_MetaData), NewProp_OnDelta_MetaData) }; // 424253212
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAnthropicChatStreamAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 424253212
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAnthropicChatStreamAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicStreamDelta__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 424253212
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::NewProp_OnDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::ClassParams = {
	&UGenAnthropicChatStreamAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenAnthropicChatStreamAsync()
{
	if (!Z_Registration_Info_UClass_UGenAnthropicChatStreamAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenAnthropicChatStreamAsync.OuterSingleton, Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenAnthropicChatStreamAsync.OuterSingleton;
}
UGenAnthropicChatStreamAsync::UGenAnthropicChatStreamAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenAnthropicChatStreamAsync);
UGenAnthropicChatStreamAsync::~UGenAnthropicChatStreamAsync() {}
// ********** End Class UGenAnthropicChatStreamAsync ***********************************************

// ********** Begin Class UGenAnthropicChatStream **************************************************
void UGenAnthropicChatStream::StaticRegisterNativesUGenAnthropicChatStream()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenAnthropicChatStream;
UClass* UGenAnthropicChatStream::GetPrivateStaticClass()
{
	using TClass = UGenAnthropicChatStream;
	if (!Z_Registration_Info_UClass_UGenAnthropicChatStream.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenAnthropicChatStream"),
			Z_Registration_Info_UClass_UGenAnthropicChatStream.InnerSingleton,
			StaticRegisterNativesUGenAnthropicChatStream,
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
	return Z_Registration_Info_UClass_UGenAnthropicChatStream.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenAnthropicChatStream_NoRegister()
{
	return UGenAnthropicChatStream::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenAnthropicChatStream_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Anthropic/GenAnthropicChatStream.h" },
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChatStream.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenAnthropicChatStream>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenAnthropicChatStream_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChatStream_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenAnthropicChatStream_Statics::ClassParams = {
	&UGenAnthropicChatStream::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChatStream_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenAnthropicChatStream_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenAnthropicChatStream()
{
	if (!Z_Registration_Info_UClass_UGenAnthropicChatStream.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenAnthropicChatStream.OuterSingleton, Z_Construct_UClass_UGenAnthropicChatStream_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenAnthropicChatStream.OuterSingleton;
}
UGenAnthropicChatStream::UGenAnthropicChatStream(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenAnthropicChatStream);
UGenAnthropicChatStream::~UGenAnthropicChatStream() {}
// ********** End Class UGenAnthropicChatStream ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenAnthropicChatStreamAsync, UGenAnthropicChatStreamAsync::StaticClass, TEXT("UGenAnthropicChatStreamAsync"), &Z_Registration_Info_UClass_UGenAnthropicChatStreamAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenAnthropicChatStreamAsync), 2434588423U) },
		{ Z_Construct_UClass_UGenAnthropicChatStream, UGenAnthropicChatStream::StaticClass, TEXT("UGenAnthropicChatStream"), &Z_Registration_Info_UClass_UGenAnthropicChatStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenAnthropicChatStream), 617557394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h__Script_UU_GenAI_3898200935(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
