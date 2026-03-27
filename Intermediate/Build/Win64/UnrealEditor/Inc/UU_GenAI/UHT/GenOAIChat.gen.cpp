// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAI/GenOAIChat.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenOAIChat() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChat();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChat_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatAsync_NoRegister();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatMessage();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatResponse();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenOAIChatSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnOAIChatComplete ****************************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnOAIChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChat.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnOAIChatComplete_Parms, Response), Z_Construct_UScriptStruct_FGenChatResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2113138833
void Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnOAIChatComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnOAIChatComplete_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnOAIChatComplete__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAIChatComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAIChatComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOAIChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnOAIChatComplete, FGenChatResponse const& Response, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnOAIChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnOAIChatComplete_Parms Parms;
	Parms.Response=Response;
	Parms.bSuccess=bSuccess ? true : false;
	OnOAIChatComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnOAIChatComplete ******************************************************

// ********** Begin Class UGenOAIChatAsync Function RequestOpenAIChatCompletion ********************
struct Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics
{
	struct GenOAIChatAsync_eventRequestOpenAIChatCompletion_Parms
	{
		UObject* WorldContextObject;
		TArray<FGenChatMessage> Messages;
		FGenOAIChatSettings Settings;
		UGenOAIChatAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|OpenAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Send a chat completion request to OpenAI.\n     *\n     * @param Messages      Conversation history. The model enum in Settings determines which model is used.\n     * @param Settings      Model configuration including temperature, max tokens, tools, etc.\n     */" },
#endif
		{ "DisplayName", "Request OpenAI Chat Completion" },
		{ "Keywords", "openai gpt chat ai llm completion" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a chat completion request to OpenAI.\n\n@param Messages      Conversation history. The model enum in Settings determines which model is used.\n@param Settings      Model configuration including temperature, max tokens, tools, etc." },
#endif
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIChatAsync_eventRequestOpenAIChatCompletion_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenChatMessage, METADATA_PARAMS(0, nullptr) }; // 2097319744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIChatAsync_eventRequestOpenAIChatCompletion_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 2097319744
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIChatAsync_eventRequestOpenAIChatCompletion_Parms, Settings), Z_Construct_UScriptStruct_FGenOAIChatSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1339542557
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAIChatAsync_eventRequestOpenAIChatCompletion_Parms, ReturnValue), Z_Construct_UClass_UGenOAIChatAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::NewProp_Messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenOAIChatAsync, nullptr, "RequestOpenAIChatCompletion", Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::GenOAIChatAsync_eventRequestOpenAIChatCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::GenOAIChatAsync_eventRequestOpenAIChatCompletion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenOAIChatAsync::execRequestOpenAIChatCompletion)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FGenChatMessage,Z_Param_Out_Messages);
	P_GET_STRUCT_REF(FGenOAIChatSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenOAIChatAsync**)Z_Param__Result=UGenOAIChatAsync::RequestOpenAIChatCompletion(Z_Param_WorldContextObject,Z_Param_Out_Messages,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenOAIChatAsync Function RequestOpenAIChatCompletion **********************

// ********** Begin Class UGenOAIChatAsync *********************************************************
void UGenOAIChatAsync::StaticRegisterNativesUGenOAIChatAsync()
{
	UClass* Class = UGenOAIChatAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestOpenAIChatCompletion", &UGenOAIChatAsync::execRequestOpenAIChatCompletion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAIChatAsync;
UClass* UGenOAIChatAsync::GetPrivateStaticClass()
{
	using TClass = UGenOAIChatAsync;
	if (!Z_Registration_Info_UClass_UGenOAIChatAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAIChatAsync"),
			Z_Registration_Info_UClass_UGenOAIChatAsync.InnerSingleton,
			StaticRegisterNativesUGenOAIChatAsync,
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
	return Z_Registration_Info_UClass_UGenOAIChatAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAIChatAsync_NoRegister()
{
	return UGenOAIChatAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAIChatAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request OpenAI Chat Completion\n *\n * Sends a chat completion request to the OpenAI API (or any OpenAI-compatible endpoint).\n * Supports vision (multimodal), function/tool calling, and structured JSON output.\n *\n * Usage (Blueprint):\n *   [RequestOpenAIChatCompletion] \xe2\x86\x92 OnComplete(Response, bSuccess)\n *                                 \xe2\x86\x92 OnFailure(Response, bSuccess)\n */" },
#endif
		{ "HideThen", "TRUE" },
		{ "IncludePath", "OpenAI/GenOAIChat.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request OpenAI Chat Completion\n\nSends a chat completion request to the OpenAI API (or any OpenAI-compatible endpoint).\nSupports vision (multimodal), function/tool calling, and structured JSON output.\n\nUsage (Blueprint):\n  [RequestOpenAIChatCompletion] \xe2\x86\x92 OnComplete(Response, bSuccess)\n                                \xe2\x86\x92 OnFailure(Response, bSuccess)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires when the request succeeds */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires when the request succeeds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires when the request fails (network error, invalid key, etc.) */" },
#endif
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires when the request fails (network error, invalid key, etc.)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenOAIChatAsync_RequestOpenAIChatCompletion, "RequestOpenAIChatCompletion" }, // 3882216717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAIChatAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAIChatAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAIChatAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 1872000624
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAIChatAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAIChatAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnOAIChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1872000624
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenOAIChatAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAIChatAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAIChatAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChatAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenOAIChatAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChatAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAIChatAsync_Statics::ClassParams = {
	&UGenOAIChatAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenOAIChatAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChatAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChatAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAIChatAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAIChatAsync()
{
	if (!Z_Registration_Info_UClass_UGenOAIChatAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAIChatAsync.OuterSingleton, Z_Construct_UClass_UGenOAIChatAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAIChatAsync.OuterSingleton;
}
UGenOAIChatAsync::UGenOAIChatAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAIChatAsync);
UGenOAIChatAsync::~UGenOAIChatAsync() {}
// ********** End Class UGenOAIChatAsync ***********************************************************

// ********** Begin Class UGenOAIChat **************************************************************
void UGenOAIChat::StaticRegisterNativesUGenOAIChat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAIChat;
UClass* UGenOAIChat::GetPrivateStaticClass()
{
	using TClass = UGenOAIChat;
	if (!Z_Registration_Info_UClass_UGenOAIChat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAIChat"),
			Z_Registration_Info_UClass_UGenOAIChat.InnerSingleton,
			StaticRegisterNativesUGenOAIChat,
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
	return Z_Registration_Info_UClass_UGenOAIChat.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAIChat_NoRegister()
{
	return UGenOAIChat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAIChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * C++ static interface for OpenAI chat completions.\n *\n * Usage:\n *   TWeakObjectPtr<AMyActor> WeakThis(this);\n *   UGenOAIChat::SendChatRequest(Messages, Settings,\n *       FOnOAIChatCompleteNative::CreateLambda([WeakThis](const FGenChatResponse& R, bool bOK)\n *       {\n *           if (!WeakThis.IsValid()) return;\n *           // use R\n *       }));\n */" },
#endif
		{ "IncludePath", "OpenAI/GenOAIChat.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAIChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "C++ static interface for OpenAI chat completions.\n\nUsage:\n  TWeakObjectPtr<AMyActor> WeakThis(this);\n  UGenOAIChat::SendChatRequest(Messages, Settings,\n      FOnOAIChatCompleteNative::CreateLambda([WeakThis](const FGenChatResponse& R, bool bOK)\n      {\n          if (!WeakThis.IsValid()) return;\n          // use R\n      }));" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAIChat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenOAIChat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAIChat_Statics::ClassParams = {
	&UGenOAIChat::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAIChat_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAIChat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAIChat()
{
	if (!Z_Registration_Info_UClass_UGenOAIChat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAIChat.OuterSingleton, Z_Construct_UClass_UGenOAIChat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAIChat.OuterSingleton;
}
UGenOAIChat::UGenOAIChat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAIChat);
UGenOAIChat::~UGenOAIChat() {}
// ********** End Class UGenOAIChat ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenOAIChatAsync, UGenOAIChatAsync::StaticClass, TEXT("UGenOAIChatAsync"), &Z_Registration_Info_UClass_UGenOAIChatAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAIChatAsync), 1165595678U) },
		{ Z_Construct_UClass_UGenOAIChat, UGenOAIChat::StaticClass, TEXT("UGenOAIChat"), &Z_Registration_Info_UClass_UGenOAIChat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAIChat), 4160174091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h__Script_UU_GenAI_197482698(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
