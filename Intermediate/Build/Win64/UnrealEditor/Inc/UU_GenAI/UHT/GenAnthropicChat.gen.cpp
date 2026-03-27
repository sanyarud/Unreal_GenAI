// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anthropic/GenAnthropicChat.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenAnthropicChat() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChat();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChat_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatAsync_NoRegister();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenAnthropicChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatMessage();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatResponse();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAnthropicChatComplete **********************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnAnthropicChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnAnthropicChatComplete_Parms, Response), Z_Construct_UScriptStruct_FGenChatResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2113138833
void Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnAnthropicChatComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnAnthropicChatComplete_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnAnthropicChatComplete__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnAnthropicChatComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnAnthropicChatComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnthropicChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAnthropicChatComplete, FGenChatResponse const& Response, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnAnthropicChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnAnthropicChatComplete_Parms Parms;
	Parms.Response=Response;
	Parms.bSuccess=bSuccess ? true : false;
	OnAnthropicChatComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnthropicChatComplete ************************************************

// ********** Begin Class UGenAnthropicChatAsync Function RequestAnthropicChatCompletion ***********
struct Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics
{
	struct GenAnthropicChatAsync_eventRequestAnthropicChatCompletion_Parms
	{
		UObject* WorldContextObject;
		TArray<FGenChatMessage> Messages;
		FGenAnthropicChatSettings Settings;
		UGenAnthropicChatAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|Anthropic" },
		{ "DisplayName", "Request Anthropic Chat Completion" },
		{ "Keywords", "anthropic claude chat ai llm completion" },
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChat.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAnthropicChatAsync_eventRequestAnthropicChatCompletion_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenChatMessage, METADATA_PARAMS(0, nullptr) }; // 2097319744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAnthropicChatAsync_eventRequestAnthropicChatCompletion_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 2097319744
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAnthropicChatAsync_eventRequestAnthropicChatCompletion_Parms, Settings), Z_Construct_UScriptStruct_FGenAnthropicChatSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1827156812
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAnthropicChatAsync_eventRequestAnthropicChatCompletion_Parms, ReturnValue), Z_Construct_UClass_UGenAnthropicChatAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::NewProp_Messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenAnthropicChatAsync, nullptr, "RequestAnthropicChatCompletion", Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::GenAnthropicChatAsync_eventRequestAnthropicChatCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::GenAnthropicChatAsync_eventRequestAnthropicChatCompletion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenAnthropicChatAsync::execRequestAnthropicChatCompletion)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FGenChatMessage,Z_Param_Out_Messages);
	P_GET_STRUCT_REF(FGenAnthropicChatSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenAnthropicChatAsync**)Z_Param__Result=UGenAnthropicChatAsync::RequestAnthropicChatCompletion(Z_Param_WorldContextObject,Z_Param_Out_Messages,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenAnthropicChatAsync Function RequestAnthropicChatCompletion *************

// ********** Begin Class UGenAnthropicChatAsync ***************************************************
void UGenAnthropicChatAsync::StaticRegisterNativesUGenAnthropicChatAsync()
{
	UClass* Class = UGenAnthropicChatAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestAnthropicChatCompletion", &UGenAnthropicChatAsync::execRequestAnthropicChatCompletion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenAnthropicChatAsync;
UClass* UGenAnthropicChatAsync::GetPrivateStaticClass()
{
	using TClass = UGenAnthropicChatAsync;
	if (!Z_Registration_Info_UClass_UGenAnthropicChatAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenAnthropicChatAsync"),
			Z_Registration_Info_UClass_UGenAnthropicChatAsync.InnerSingleton,
			StaticRegisterNativesUGenAnthropicChatAsync,
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
	return Z_Registration_Info_UClass_UGenAnthropicChatAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenAnthropicChatAsync_NoRegister()
{
	return UGenAnthropicChatAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenAnthropicChatAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request Anthropic Chat Completion\n *\n * Sends a message to the Anthropic Claude API (Messages API).\n * Supports vision, tool use, and extended thinking.\n */" },
#endif
		{ "HideThen", "TRUE" },
		{ "IncludePath", "Anthropic/GenAnthropicChat.h" },
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request Anthropic Chat Completion\n\nSends a message to the Anthropic Claude API (Messages API).\nSupports vision, tool use, and extended thinking." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenAnthropicChatAsync_RequestAnthropicChatCompletion, "RequestAnthropicChatCompletion" }, // 2593343659
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenAnthropicChatAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenAnthropicChatAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAnthropicChatAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 1520288481
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenAnthropicChatAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenAnthropicChatAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnAnthropicChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1520288481
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenAnthropicChatAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAnthropicChatAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenAnthropicChatAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChatAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenAnthropicChatAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChatAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenAnthropicChatAsync_Statics::ClassParams = {
	&UGenAnthropicChatAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenAnthropicChatAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChatAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChatAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenAnthropicChatAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenAnthropicChatAsync()
{
	if (!Z_Registration_Info_UClass_UGenAnthropicChatAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenAnthropicChatAsync.OuterSingleton, Z_Construct_UClass_UGenAnthropicChatAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenAnthropicChatAsync.OuterSingleton;
}
UGenAnthropicChatAsync::UGenAnthropicChatAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenAnthropicChatAsync);
UGenAnthropicChatAsync::~UGenAnthropicChatAsync() {}
// ********** End Class UGenAnthropicChatAsync *****************************************************

// ********** Begin Class UGenAnthropicChat ********************************************************
void UGenAnthropicChat::StaticRegisterNativesUGenAnthropicChat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenAnthropicChat;
UClass* UGenAnthropicChat::GetPrivateStaticClass()
{
	using TClass = UGenAnthropicChat;
	if (!Z_Registration_Info_UClass_UGenAnthropicChat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenAnthropicChat"),
			Z_Registration_Info_UClass_UGenAnthropicChat.InnerSingleton,
			StaticRegisterNativesUGenAnthropicChat,
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
	return Z_Registration_Info_UClass_UGenAnthropicChat.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenAnthropicChat_NoRegister()
{
	return UGenAnthropicChat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenAnthropicChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Anthropic/GenAnthropicChat.h" },
		{ "ModuleRelativePath", "Public/Anthropic/GenAnthropicChat.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenAnthropicChat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenAnthropicChat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenAnthropicChat_Statics::ClassParams = {
	&UGenAnthropicChat::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAnthropicChat_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenAnthropicChat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenAnthropicChat()
{
	if (!Z_Registration_Info_UClass_UGenAnthropicChat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenAnthropicChat.OuterSingleton, Z_Construct_UClass_UGenAnthropicChat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenAnthropicChat.OuterSingleton;
}
UGenAnthropicChat::UGenAnthropicChat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenAnthropicChat);
UGenAnthropicChat::~UGenAnthropicChat() {}
// ********** End Class UGenAnthropicChat **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenAnthropicChatAsync, UGenAnthropicChatAsync::StaticClass, TEXT("UGenAnthropicChatAsync"), &Z_Registration_Info_UClass_UGenAnthropicChatAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenAnthropicChatAsync), 3823147531U) },
		{ Z_Construct_UClass_UGenAnthropicChat, UGenAnthropicChat::StaticClass, TEXT("UGenAnthropicChat"), &Z_Registration_Info_UClass_UGenAnthropicChat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenAnthropicChat), 3414849025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h__Script_UU_GenAI_3631093408(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
