// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Compat/GenCompatChat.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenCompatChat() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenCompatChat();
UU_GENAI_API UClass* Z_Construct_UClass_UGenCompatChat_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenCompatChatAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenCompatChatAsync_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenDeepSeekChatAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenDeepSeekChatAsync_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenMistralChatAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenMistralChatAsync_NoRegister();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatMessage();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatResponse();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenDeepSeekChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenMistralChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenOAIChatSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnDeepSeekChatComplete ***********************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnDeepSeekChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * OpenAI-compatible providers (DeepSeek, Mistral, Groq, Together, etc.)\n * These use the same /chat/completions endpoint format as OpenAI,\n * but with a different base URL and API key.\n */// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80 DeepSeek \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OpenAI-compatible providers (DeepSeek, Mistral, Groq, Together, etc.)\nThese use the same /chat/completions endpoint format as OpenAI,\nbut with a different base URL and API key.\n // \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80 DeepSeek \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnDeepSeekChatComplete_Parms, Response), Z_Construct_UScriptStruct_FGenChatResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2113138833
void Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnDeepSeekChatComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnDeepSeekChatComplete_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnDeepSeekChatComplete__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnDeepSeekChatComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnDeepSeekChatComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeepSeekChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnDeepSeekChatComplete, FGenChatResponse const& Response, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnDeepSeekChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnDeepSeekChatComplete_Parms Parms;
	Parms.Response=Response;
	Parms.bSuccess=bSuccess ? true : false;
	OnDeepSeekChatComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDeepSeekChatComplete *************************************************

// ********** Begin Class UGenDeepSeekChatAsync Function RequestDeepSeekChatCompletion *************
struct Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics
{
	struct GenDeepSeekChatAsync_eventRequestDeepSeekChatCompletion_Parms
	{
		UObject* WorldContextObject;
		TArray<FGenChatMessage> Messages;
		FGenDeepSeekChatSettings Settings;
		UGenDeepSeekChatAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|DeepSeek" },
		{ "DisplayName", "Request DeepSeek Chat Completion" },
		{ "Keywords", "deepseek chat ai llm" },
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenDeepSeekChatAsync_eventRequestDeepSeekChatCompletion_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenChatMessage, METADATA_PARAMS(0, nullptr) }; // 2097319744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenDeepSeekChatAsync_eventRequestDeepSeekChatCompletion_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 2097319744
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenDeepSeekChatAsync_eventRequestDeepSeekChatCompletion_Parms, Settings), Z_Construct_UScriptStruct_FGenDeepSeekChatSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3181060217
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenDeepSeekChatAsync_eventRequestDeepSeekChatCompletion_Parms, ReturnValue), Z_Construct_UClass_UGenDeepSeekChatAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::NewProp_Messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenDeepSeekChatAsync, nullptr, "RequestDeepSeekChatCompletion", Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::GenDeepSeekChatAsync_eventRequestDeepSeekChatCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::GenDeepSeekChatAsync_eventRequestDeepSeekChatCompletion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenDeepSeekChatAsync::execRequestDeepSeekChatCompletion)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FGenChatMessage,Z_Param_Out_Messages);
	P_GET_STRUCT_REF(FGenDeepSeekChatSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenDeepSeekChatAsync**)Z_Param__Result=UGenDeepSeekChatAsync::RequestDeepSeekChatCompletion(Z_Param_WorldContextObject,Z_Param_Out_Messages,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenDeepSeekChatAsync Function RequestDeepSeekChatCompletion ***************

// ********** Begin Class UGenDeepSeekChatAsync ****************************************************
void UGenDeepSeekChatAsync::StaticRegisterNativesUGenDeepSeekChatAsync()
{
	UClass* Class = UGenDeepSeekChatAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestDeepSeekChatCompletion", &UGenDeepSeekChatAsync::execRequestDeepSeekChatCompletion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenDeepSeekChatAsync;
UClass* UGenDeepSeekChatAsync::GetPrivateStaticClass()
{
	using TClass = UGenDeepSeekChatAsync;
	if (!Z_Registration_Info_UClass_UGenDeepSeekChatAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenDeepSeekChatAsync"),
			Z_Registration_Info_UClass_UGenDeepSeekChatAsync.InnerSingleton,
			StaticRegisterNativesUGenDeepSeekChatAsync,
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
	return Z_Registration_Info_UClass_UGenDeepSeekChatAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenDeepSeekChatAsync_NoRegister()
{
	return UGenDeepSeekChatAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenDeepSeekChatAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "Compat/GenCompatChat.h" },
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenDeepSeekChatAsync_RequestDeepSeekChatCompletion, "RequestDeepSeekChatCompletion" }, // 556651239
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenDeepSeekChatAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenDeepSeekChatAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3565139317
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenDeepSeekChatAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnDeepSeekChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3565139317
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::ClassParams = {
	&UGenDeepSeekChatAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenDeepSeekChatAsync()
{
	if (!Z_Registration_Info_UClass_UGenDeepSeekChatAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenDeepSeekChatAsync.OuterSingleton, Z_Construct_UClass_UGenDeepSeekChatAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenDeepSeekChatAsync.OuterSingleton;
}
UGenDeepSeekChatAsync::UGenDeepSeekChatAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenDeepSeekChatAsync);
UGenDeepSeekChatAsync::~UGenDeepSeekChatAsync() {}
// ********** End Class UGenDeepSeekChatAsync ******************************************************

// ********** Begin Delegate FOnMistralChatComplete ************************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnMistralChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80 Mistral \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80 Mistral \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnMistralChatComplete_Parms, Response), Z_Construct_UScriptStruct_FGenChatResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2113138833
void Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnMistralChatComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnMistralChatComplete_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnMistralChatComplete__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnMistralChatComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnMistralChatComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMistralChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnMistralChatComplete, FGenChatResponse const& Response, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnMistralChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnMistralChatComplete_Parms Parms;
	Parms.Response=Response;
	Parms.bSuccess=bSuccess ? true : false;
	OnMistralChatComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMistralChatComplete **************************************************

// ********** Begin Class UGenMistralChatAsync Function RequestMistralChatCompletion ***************
struct Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics
{
	struct GenMistralChatAsync_eventRequestMistralChatCompletion_Parms
	{
		UObject* WorldContextObject;
		TArray<FGenChatMessage> Messages;
		FGenMistralChatSettings Settings;
		UGenMistralChatAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|Mistral" },
		{ "DisplayName", "Request Mistral Chat Completion" },
		{ "Keywords", "mistral mixtral chat ai llm" },
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenMistralChatAsync_eventRequestMistralChatCompletion_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenChatMessage, METADATA_PARAMS(0, nullptr) }; // 2097319744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenMistralChatAsync_eventRequestMistralChatCompletion_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 2097319744
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenMistralChatAsync_eventRequestMistralChatCompletion_Parms, Settings), Z_Construct_UScriptStruct_FGenMistralChatSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4012785592
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenMistralChatAsync_eventRequestMistralChatCompletion_Parms, ReturnValue), Z_Construct_UClass_UGenMistralChatAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::NewProp_Messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenMistralChatAsync, nullptr, "RequestMistralChatCompletion", Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::GenMistralChatAsync_eventRequestMistralChatCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::GenMistralChatAsync_eventRequestMistralChatCompletion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenMistralChatAsync::execRequestMistralChatCompletion)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FGenChatMessage,Z_Param_Out_Messages);
	P_GET_STRUCT_REF(FGenMistralChatSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenMistralChatAsync**)Z_Param__Result=UGenMistralChatAsync::RequestMistralChatCompletion(Z_Param_WorldContextObject,Z_Param_Out_Messages,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenMistralChatAsync Function RequestMistralChatCompletion *****************

// ********** Begin Class UGenMistralChatAsync *****************************************************
void UGenMistralChatAsync::StaticRegisterNativesUGenMistralChatAsync()
{
	UClass* Class = UGenMistralChatAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestMistralChatCompletion", &UGenMistralChatAsync::execRequestMistralChatCompletion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenMistralChatAsync;
UClass* UGenMistralChatAsync::GetPrivateStaticClass()
{
	using TClass = UGenMistralChatAsync;
	if (!Z_Registration_Info_UClass_UGenMistralChatAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenMistralChatAsync"),
			Z_Registration_Info_UClass_UGenMistralChatAsync.InnerSingleton,
			StaticRegisterNativesUGenMistralChatAsync,
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
	return Z_Registration_Info_UClass_UGenMistralChatAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenMistralChatAsync_NoRegister()
{
	return UGenMistralChatAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenMistralChatAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "Compat/GenCompatChat.h" },
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenMistralChatAsync_RequestMistralChatCompletion, "RequestMistralChatCompletion" }, // 3249152921
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenMistralChatAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenMistralChatAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenMistralChatAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 2617783157
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenMistralChatAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenMistralChatAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnMistralChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2617783157
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenMistralChatAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenMistralChatAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenMistralChatAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenMistralChatAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenMistralChatAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenMistralChatAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenMistralChatAsync_Statics::ClassParams = {
	&UGenMistralChatAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenMistralChatAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenMistralChatAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenMistralChatAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenMistralChatAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenMistralChatAsync()
{
	if (!Z_Registration_Info_UClass_UGenMistralChatAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenMistralChatAsync.OuterSingleton, Z_Construct_UClass_UGenMistralChatAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenMistralChatAsync.OuterSingleton;
}
UGenMistralChatAsync::UGenMistralChatAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenMistralChatAsync);
UGenMistralChatAsync::~UGenMistralChatAsync() {}
// ********** End Class UGenMistralChatAsync *******************************************************

// ********** Begin Delegate FOnCompatChatComplete *************************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnCompatChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Generic OpenAI-compatible provider.\n * Set BaseUrl to any endpoint that follows the /chat/completions spec.\n * Examples: Groq (api.groq.com/openai/v1), Together AI, Ollama (localhost:11434/v1), etc.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic OpenAI-compatible provider.\nSet BaseUrl to any endpoint that follows the /chat/completions spec.\nExamples: Groq (api.groq.com/openai/v1), Together AI, Ollama (localhost:11434/v1), etc." },
#endif
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnCompatChatComplete_Parms, Response), Z_Construct_UScriptStruct_FGenChatResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2113138833
void Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnCompatChatComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnCompatChatComplete_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnCompatChatComplete__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnCompatChatComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnCompatChatComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCompatChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnCompatChatComplete, FGenChatResponse const& Response, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnCompatChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnCompatChatComplete_Parms Parms;
	Parms.Response=Response;
	Parms.bSuccess=bSuccess ? true : false;
	OnCompatChatComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCompatChatComplete ***************************************************

// ********** Begin Class UGenCompatChatAsync Function RequestCompatChatCompletion *****************
struct Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics
{
	struct GenCompatChatAsync_eventRequestCompatChatCompletion_Parms
	{
		UObject* WorldContextObject;
		TArray<FGenChatMessage> Messages;
		FGenOAIChatSettings Settings;
		FString BaseUrl;
		FString ApiKey;
		UGenCompatChatAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|Compatible" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Send a chat completion to any OpenAI-compatible endpoint.\n     *\n     * @param BaseUrl   Base URL of the endpoint, e.g. \"https://api.groq.com/openai/v1\"\n     * @param ApiKey    API key for this provider\n     * @param ModelId   Model identifier string\n     */" },
#endif
		{ "DisplayName", "Request OpenAI-Compatible Chat Completion" },
		{ "Keywords", "compatible openai groq together ollama chat ai" },
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a chat completion to any OpenAI-compatible endpoint.\n\n@param BaseUrl   Base URL of the endpoint, e.g. \"https://api.groq.com/openai/v1\"\n@param ApiKey    API key for this provider\n@param ModelId   Model identifier string" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Messages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Messages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenCompatChatAsync_eventRequestCompatChatCompletion_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenChatMessage, METADATA_PARAMS(0, nullptr) }; // 2097319744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenCompatChatAsync_eventRequestCompatChatCompletion_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 2097319744
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenCompatChatAsync_eventRequestCompatChatCompletion_Parms, Settings), Z_Construct_UScriptStruct_FGenOAIChatSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1339542557
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_BaseUrl = { "BaseUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenCompatChatAsync_eventRequestCompatChatCompletion_Parms, BaseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseUrl_MetaData), NewProp_BaseUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenCompatChatAsync_eventRequestCompatChatCompletion_Parms, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKey_MetaData), NewProp_ApiKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenCompatChatAsync_eventRequestCompatChatCompletion_Parms, ReturnValue), Z_Construct_UClass_UGenCompatChatAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_Messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_BaseUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_ApiKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenCompatChatAsync, nullptr, "RequestCompatChatCompletion", Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::GenCompatChatAsync_eventRequestCompatChatCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::GenCompatChatAsync_eventRequestCompatChatCompletion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenCompatChatAsync::execRequestCompatChatCompletion)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FGenChatMessage,Z_Param_Out_Messages);
	P_GET_STRUCT_REF(FGenOAIChatSettings,Z_Param_Out_Settings);
	P_GET_PROPERTY(FStrProperty,Z_Param_BaseUrl);
	P_GET_PROPERTY(FStrProperty,Z_Param_ApiKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenCompatChatAsync**)Z_Param__Result=UGenCompatChatAsync::RequestCompatChatCompletion(Z_Param_WorldContextObject,Z_Param_Out_Messages,Z_Param_Out_Settings,Z_Param_BaseUrl,Z_Param_ApiKey);
	P_NATIVE_END;
}
// ********** End Class UGenCompatChatAsync Function RequestCompatChatCompletion *******************

// ********** Begin Class UGenCompatChatAsync ******************************************************
void UGenCompatChatAsync::StaticRegisterNativesUGenCompatChatAsync()
{
	UClass* Class = UGenCompatChatAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestCompatChatCompletion", &UGenCompatChatAsync::execRequestCompatChatCompletion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenCompatChatAsync;
UClass* UGenCompatChatAsync::GetPrivateStaticClass()
{
	using TClass = UGenCompatChatAsync;
	if (!Z_Registration_Info_UClass_UGenCompatChatAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenCompatChatAsync"),
			Z_Registration_Info_UClass_UGenCompatChatAsync.InnerSingleton,
			StaticRegisterNativesUGenCompatChatAsync,
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
	return Z_Registration_Info_UClass_UGenCompatChatAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenCompatChatAsync_NoRegister()
{
	return UGenCompatChatAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenCompatChatAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "Compat/GenCompatChat.h" },
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenCompatChatAsync_RequestCompatChatCompletion, "RequestCompatChatCompletion" }, // 2967499856
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenCompatChatAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenCompatChatAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenCompatChatAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 2864407025
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenCompatChatAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenCompatChatAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnCompatChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2864407025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenCompatChatAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenCompatChatAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenCompatChatAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenCompatChatAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenCompatChatAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenCompatChatAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenCompatChatAsync_Statics::ClassParams = {
	&UGenCompatChatAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenCompatChatAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenCompatChatAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenCompatChatAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenCompatChatAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenCompatChatAsync()
{
	if (!Z_Registration_Info_UClass_UGenCompatChatAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenCompatChatAsync.OuterSingleton, Z_Construct_UClass_UGenCompatChatAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenCompatChatAsync.OuterSingleton;
}
UGenCompatChatAsync::UGenCompatChatAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenCompatChatAsync);
UGenCompatChatAsync::~UGenCompatChatAsync() {}
// ********** End Class UGenCompatChatAsync ********************************************************

// ********** Begin Class UGenCompatChat ***********************************************************
void UGenCompatChat::StaticRegisterNativesUGenCompatChat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenCompatChat;
UClass* UGenCompatChat::GetPrivateStaticClass()
{
	using TClass = UGenCompatChat;
	if (!Z_Registration_Info_UClass_UGenCompatChat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenCompatChat"),
			Z_Registration_Info_UClass_UGenCompatChat.InnerSingleton,
			StaticRegisterNativesUGenCompatChat,
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
	return Z_Registration_Info_UClass_UGenCompatChat.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenCompatChat_NoRegister()
{
	return UGenCompatChat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenCompatChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Compat/GenCompatChat.h" },
		{ "ModuleRelativePath", "Public/Compat/GenCompatChat.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenCompatChat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenCompatChat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenCompatChat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenCompatChat_Statics::ClassParams = {
	&UGenCompatChat::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenCompatChat_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenCompatChat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenCompatChat()
{
	if (!Z_Registration_Info_UClass_UGenCompatChat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenCompatChat.OuterSingleton, Z_Construct_UClass_UGenCompatChat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenCompatChat.OuterSingleton;
}
UGenCompatChat::UGenCompatChat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenCompatChat);
UGenCompatChat::~UGenCompatChat() {}
// ********** End Class UGenCompatChat *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenDeepSeekChatAsync, UGenDeepSeekChatAsync::StaticClass, TEXT("UGenDeepSeekChatAsync"), &Z_Registration_Info_UClass_UGenDeepSeekChatAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenDeepSeekChatAsync), 298784957U) },
		{ Z_Construct_UClass_UGenMistralChatAsync, UGenMistralChatAsync::StaticClass, TEXT("UGenMistralChatAsync"), &Z_Registration_Info_UClass_UGenMistralChatAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenMistralChatAsync), 455660152U) },
		{ Z_Construct_UClass_UGenCompatChatAsync, UGenCompatChatAsync::StaticClass, TEXT("UGenCompatChatAsync"), &Z_Registration_Info_UClass_UGenCompatChatAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenCompatChatAsync), 64772152U) },
		{ Z_Construct_UClass_UGenCompatChat, UGenCompatChat::StaticClass, TEXT("UGenCompatChat"), &Z_Registration_Info_UClass_UGenCompatChat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenCompatChat), 401426678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h__Script_UU_GenAI_723500258(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
