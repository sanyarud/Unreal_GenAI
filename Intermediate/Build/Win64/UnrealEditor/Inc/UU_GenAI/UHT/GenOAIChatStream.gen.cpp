// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAI/GenOAIChatStream.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenOAIChatStream() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatStream();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatStream_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatStreamAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatStreamAsync_NoRegister();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatMessage();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenOAIChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenStreamDelta();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnOAIStreamDelta *****************************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnOAIStreamDelta_Parms
	{
		FGenStreamDelta Delta;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChatStream.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnOAIStreamDelta_Parms, Delta), Z_Construct_UScriptStruct_FGenStreamDelta, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) }; // 3881629086
void Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnOAIStreamDelta_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnOAIStreamDelta_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnOAIStreamDelta__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAIStreamDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAIStreamDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOAIStreamDelta_DelegateWrapper(const FMulticastScriptDelegate& OnOAIStreamDelta, FGenStreamDelta const& Delta, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnOAIStreamDelta_Parms
	{
		FGenStreamDelta Delta;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnOAIStreamDelta_Parms Parms;
	Parms.Delta=Delta;
	Parms.bSuccess=bSuccess ? true : false;
	OnOAIStreamDelta.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnOAIStreamDelta *******************************************************

// ********** Begin Class UGenOAIChatStreamAsync Function RequestOpenAIChatStream ******************
struct Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics
{
	struct GenOAIChatStreamAsync_eventRequestOpenAIChatStream_Parms
	{
		UObject* WorldContextObject;
		TArray<FGenChatMessage> Messages;
		FGenOAIChatSettings Settings;
		UGenOAIChatStreamAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|OpenAI" },
		{ "DisplayName", "Request OpenAI Chat Stream" },
		{ "Keywords", "openai gpt stream chat ai llm streaming" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChatStream.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIChatStreamAsync_eventRequestOpenAIChatStream_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenChatMessage, METADATA_PARAMS(0, nullptr) }; // 2746569061
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIChatStreamAsync_eventRequestOpenAIChatStream_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 2746569061
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIChatStreamAsync_eventRequestOpenAIChatStream_Parms, Settings), Z_Construct_UScriptStruct_FGenOAIChatSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1339542557
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIChatStreamAsync_eventRequestOpenAIChatStream_Parms, ReturnValue), Z_Construct_UClass_UGenOAIChatStreamAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::NewProp_Messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenOAIChatStreamAsync, nullptr, "RequestOpenAIChatStream", Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::GenOAIChatStreamAsync_eventRequestOpenAIChatStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::GenOAIChatStreamAsync_eventRequestOpenAIChatStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenOAIChatStreamAsync::execRequestOpenAIChatStream)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FGenChatMessage,Z_Param_Out_Messages);
	P_GET_STRUCT_REF(FGenOAIChatSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenOAIChatStreamAsync**)Z_Param__Result=UGenOAIChatStreamAsync::RequestOpenAIChatStream(Z_Param_WorldContextObject,Z_Param_Out_Messages,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenOAIChatStreamAsync Function RequestOpenAIChatStream ********************

// ********** Begin Class UGenOAIChatStreamAsync ***************************************************
void UGenOAIChatStreamAsync::StaticRegisterNativesUGenOAIChatStreamAsync()
{
	UClass* Class = UGenOAIChatStreamAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestOpenAIChatStream", &UGenOAIChatStreamAsync::execRequestOpenAIChatStream },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAIChatStreamAsync;
UClass* UGenOAIChatStreamAsync::GetPrivateStaticClass()
{
	using TClass = UGenOAIChatStreamAsync;
	if (!Z_Registration_Info_UClass_UGenOAIChatStreamAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAIChatStreamAsync"),
			Z_Registration_Info_UClass_UGenOAIChatStreamAsync.InnerSingleton,
			StaticRegisterNativesUGenOAIChatStreamAsync,
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
	return Z_Registration_Info_UClass_UGenOAIChatStreamAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAIChatStreamAsync_NoRegister()
{
	return UGenOAIChatStreamAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAIChatStreamAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request OpenAI Chat Stream\n *\n * Streams token-by-token output from OpenAI using Server-Sent Events (SSE).\n * OnDelta fires for each incremental token. OnComplete fires when streaming ends.\n *\n * Usage (Blueprint):\n *   [RequestOpenAIChatStream] \xe2\x86\x92 OnDelta(Delta, bSuccess)   \xe2\x86\x90 fires per token\n *                             \xe2\x86\x92 OnComplete(Delta, bSuccess) \xe2\x86\x90 fires once at end\n *                             \xe2\x86\x92 OnFailure(Delta, bSuccess)  \xe2\x86\x90 fires on error\n */" },
#endif
		{ "HideThen", "TRUE" },
		{ "IncludePath", "OpenAI/GenOAIChatStream.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChatStream.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request OpenAI Chat Stream\n\nStreams token-by-token output from OpenAI using Server-Sent Events (SSE).\nOnDelta fires for each incremental token. OnComplete fires when streaming ends.\n\nUsage (Blueprint):\n  [RequestOpenAIChatStream] \xe2\x86\x92 OnDelta(Delta, bSuccess)   \xe2\x86\x90 fires per token\n                            \xe2\x86\x92 OnComplete(Delta, bSuccess) \xe2\x86\x90 fires once at end\n                            \xe2\x86\x92 OnFailure(Delta, bSuccess)  \xe2\x86\x90 fires on error" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDelta_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires for every token delta received */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChatStream.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires for every token delta received" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires once the stream is complete */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChatStream.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires once the stream is complete" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires on error */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChatStream.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires on error" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDelta;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenOAIChatStreamAsync_RequestOpenAIChatStream, "RequestOpenAIChatStream" }, // 1294945696
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAIChatStreamAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::NewProp_OnDelta = { "OnDelta", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAIChatStreamAsync, OnDelta), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDelta_MetaData), NewProp_OnDelta_MetaData) }; // 4092890113
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAIChatStreamAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 4092890113
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAIChatStreamAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIStreamDelta__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 4092890113
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::NewProp_OnDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::ClassParams = {
	&UGenOAIChatStreamAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAIChatStreamAsync()
{
	if (!Z_Registration_Info_UClass_UGenOAIChatStreamAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAIChatStreamAsync.OuterSingleton, Z_Construct_UClass_UGenOAIChatStreamAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAIChatStreamAsync.OuterSingleton;
}
UGenOAIChatStreamAsync::UGenOAIChatStreamAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAIChatStreamAsync);
UGenOAIChatStreamAsync::~UGenOAIChatStreamAsync() {}
// ********** End Class UGenOAIChatStreamAsync *****************************************************

// ********** Begin Class UGenOAIChatStream ********************************************************
void UGenOAIChatStream::StaticRegisterNativesUGenOAIChatStream()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAIChatStream;
UClass* UGenOAIChatStream::GetPrivateStaticClass()
{
	using TClass = UGenOAIChatStream;
	if (!Z_Registration_Info_UClass_UGenOAIChatStream.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAIChatStream"),
			Z_Registration_Info_UClass_UGenOAIChatStream.InnerSingleton,
			StaticRegisterNativesUGenOAIChatStream,
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
	return Z_Registration_Info_UClass_UGenOAIChatStream.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAIChatStream_NoRegister()
{
	return UGenOAIChatStream::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAIChatStream_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OpenAI/GenOAIChatStream.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChatStream.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAIChatStream>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenOAIChatStream_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChatStream_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAIChatStream_Statics::ClassParams = {
	&UGenOAIChatStream::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChatStream_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAIChatStream_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAIChatStream()
{
	if (!Z_Registration_Info_UClass_UGenOAIChatStream.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAIChatStream.OuterSingleton, Z_Construct_UClass_UGenOAIChatStream_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAIChatStream.OuterSingleton;
}
UGenOAIChatStream::UGenOAIChatStream(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAIChatStream);
UGenOAIChatStream::~UGenOAIChatStream() {}
// ********** End Class UGenOAIChatStream **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenOAIChatStreamAsync, UGenOAIChatStreamAsync::StaticClass, TEXT("UGenOAIChatStreamAsync"), &Z_Registration_Info_UClass_UGenOAIChatStreamAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAIChatStreamAsync), 1178674528U) },
		{ Z_Construct_UClass_UGenOAIChatStream, UGenOAIChatStream::StaticClass, TEXT("UGenOAIChatStream"), &Z_Registration_Info_UClass_UGenOAIChatStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAIChatStream), 446556871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h__Script_UU_GenAI_519003159(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
