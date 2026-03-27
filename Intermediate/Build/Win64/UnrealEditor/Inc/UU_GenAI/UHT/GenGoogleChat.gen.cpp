// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Google/GenGoogleChat.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenGoogleChat() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChat();
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChat_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChatAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChatAsync_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChatStreamAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChatStreamAsync_NoRegister();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatMessage();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenChatResponse();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenGoogleChatSettings();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenStreamDelta();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGoogleChatComplete *************************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnGoogleChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnGoogleChatComplete_Parms, Response), Z_Construct_UScriptStruct_FGenChatResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2113138833
void Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnGoogleChatComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnGoogleChatComplete_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnGoogleChatComplete__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnGoogleChatComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnGoogleChatComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGoogleChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGoogleChatComplete, FGenChatResponse const& Response, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnGoogleChatComplete_Parms
	{
		FGenChatResponse Response;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnGoogleChatComplete_Parms Parms;
	Parms.Response=Response;
	Parms.bSuccess=bSuccess ? true : false;
	OnGoogleChatComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGoogleChatComplete ***************************************************

// ********** Begin Class UGenGoogleChatAsync Function RequestGoogleChatCompletion *****************
struct Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics
{
	struct GenGoogleChatAsync_eventRequestGoogleChatCompletion_Parms
	{
		UObject* WorldContextObject;
		TArray<FGenChatMessage> Messages;
		FGenGoogleChatSettings Settings;
		UGenGoogleChatAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|Google" },
		{ "DisplayName", "Request Google Gemini Chat Completion" },
		{ "Keywords", "google gemini chat ai llm completion" },
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleChatAsync_eventRequestGoogleChatCompletion_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenChatMessage, METADATA_PARAMS(0, nullptr) }; // 2097319744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleChatAsync_eventRequestGoogleChatCompletion_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 2097319744
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleChatAsync_eventRequestGoogleChatCompletion_Parms, Settings), Z_Construct_UScriptStruct_FGenGoogleChatSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2443905305
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleChatAsync_eventRequestGoogleChatCompletion_Parms, ReturnValue), Z_Construct_UClass_UGenGoogleChatAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::NewProp_Messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenGoogleChatAsync, nullptr, "RequestGoogleChatCompletion", Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::GenGoogleChatAsync_eventRequestGoogleChatCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::GenGoogleChatAsync_eventRequestGoogleChatCompletion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenGoogleChatAsync::execRequestGoogleChatCompletion)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FGenChatMessage,Z_Param_Out_Messages);
	P_GET_STRUCT_REF(FGenGoogleChatSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenGoogleChatAsync**)Z_Param__Result=UGenGoogleChatAsync::RequestGoogleChatCompletion(Z_Param_WorldContextObject,Z_Param_Out_Messages,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenGoogleChatAsync Function RequestGoogleChatCompletion *******************

// ********** Begin Class UGenGoogleChatAsync ******************************************************
void UGenGoogleChatAsync::StaticRegisterNativesUGenGoogleChatAsync()
{
	UClass* Class = UGenGoogleChatAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestGoogleChatCompletion", &UGenGoogleChatAsync::execRequestGoogleChatCompletion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenGoogleChatAsync;
UClass* UGenGoogleChatAsync::GetPrivateStaticClass()
{
	using TClass = UGenGoogleChatAsync;
	if (!Z_Registration_Info_UClass_UGenGoogleChatAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenGoogleChatAsync"),
			Z_Registration_Info_UClass_UGenGoogleChatAsync.InnerSingleton,
			StaticRegisterNativesUGenGoogleChatAsync,
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
	return Z_Registration_Info_UClass_UGenGoogleChatAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenGoogleChatAsync_NoRegister()
{
	return UGenGoogleChatAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenGoogleChatAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request Google Gemini Chat Completion\n *\n * Sends a message to the Google Gemini API (generateContent).\n * Supports vision, system instructions, and function calling.\n */" },
#endif
		{ "HideThen", "TRUE" },
		{ "IncludePath", "Google/GenGoogleChat.h" },
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request Google Gemini Chat Completion\n\nSends a message to the Google Gemini API (generateContent).\nSupports vision, system instructions, and function calling." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenGoogleChatAsync_RequestGoogleChatCompletion, "RequestGoogleChatCompletion" }, // 2326904157
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenGoogleChatAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenGoogleChatAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenGoogleChatAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 1533285304
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenGoogleChatAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenGoogleChatAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleChatComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1533285304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenGoogleChatAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenGoogleChatAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenGoogleChatAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleChatAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenGoogleChatAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleChatAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenGoogleChatAsync_Statics::ClassParams = {
	&UGenGoogleChatAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenGoogleChatAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleChatAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleChatAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenGoogleChatAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenGoogleChatAsync()
{
	if (!Z_Registration_Info_UClass_UGenGoogleChatAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenGoogleChatAsync.OuterSingleton, Z_Construct_UClass_UGenGoogleChatAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenGoogleChatAsync.OuterSingleton;
}
UGenGoogleChatAsync::UGenGoogleChatAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenGoogleChatAsync);
UGenGoogleChatAsync::~UGenGoogleChatAsync() {}
// ********** End Class UGenGoogleChatAsync ********************************************************

// ********** Begin Delegate FOnGoogleStreamDelta **************************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnGoogleStreamDelta_Parms
	{
		FGenStreamDelta Delta;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request Google Gemini Chat Stream\n */" },
#endif
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request Google Gemini Chat Stream" },
#endif
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnGoogleStreamDelta_Parms, Delta), Z_Construct_UScriptStruct_FGenStreamDelta, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) }; // 3881629086
void Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnGoogleStreamDelta_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnGoogleStreamDelta_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnGoogleStreamDelta__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::_Script_UU_GenAI_eventOnGoogleStreamDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::_Script_UU_GenAI_eventOnGoogleStreamDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGoogleStreamDelta_DelegateWrapper(const FMulticastScriptDelegate& OnGoogleStreamDelta, FGenStreamDelta const& Delta, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnGoogleStreamDelta_Parms
	{
		FGenStreamDelta Delta;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnGoogleStreamDelta_Parms Parms;
	Parms.Delta=Delta;
	Parms.bSuccess=bSuccess ? true : false;
	OnGoogleStreamDelta.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGoogleStreamDelta ****************************************************

// ********** Begin Class UGenGoogleChatStreamAsync Function RequestGoogleChatStream ***************
struct Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics
{
	struct GenGoogleChatStreamAsync_eventRequestGoogleChatStream_Parms
	{
		UObject* WorldContextObject;
		TArray<FGenChatMessage> Messages;
		FGenGoogleChatSettings Settings;
		UGenGoogleChatStreamAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|Google" },
		{ "DisplayName", "Request Google Gemini Chat Stream" },
		{ "Keywords", "google gemini stream chat ai" },
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleChatStreamAsync_eventRequestGoogleChatStream_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenChatMessage, METADATA_PARAMS(0, nullptr) }; // 2097319744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleChatStreamAsync_eventRequestGoogleChatStream_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 2097319744
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleChatStreamAsync_eventRequestGoogleChatStream_Parms, Settings), Z_Construct_UScriptStruct_FGenGoogleChatSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2443905305
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleChatStreamAsync_eventRequestGoogleChatStream_Parms, ReturnValue), Z_Construct_UClass_UGenGoogleChatStreamAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::NewProp_Messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenGoogleChatStreamAsync, nullptr, "RequestGoogleChatStream", Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::GenGoogleChatStreamAsync_eventRequestGoogleChatStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::GenGoogleChatStreamAsync_eventRequestGoogleChatStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenGoogleChatStreamAsync::execRequestGoogleChatStream)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FGenChatMessage,Z_Param_Out_Messages);
	P_GET_STRUCT_REF(FGenGoogleChatSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenGoogleChatStreamAsync**)Z_Param__Result=UGenGoogleChatStreamAsync::RequestGoogleChatStream(Z_Param_WorldContextObject,Z_Param_Out_Messages,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenGoogleChatStreamAsync Function RequestGoogleChatStream *****************

// ********** Begin Class UGenGoogleChatStreamAsync ************************************************
void UGenGoogleChatStreamAsync::StaticRegisterNativesUGenGoogleChatStreamAsync()
{
	UClass* Class = UGenGoogleChatStreamAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestGoogleChatStream", &UGenGoogleChatStreamAsync::execRequestGoogleChatStream },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenGoogleChatStreamAsync;
UClass* UGenGoogleChatStreamAsync::GetPrivateStaticClass()
{
	using TClass = UGenGoogleChatStreamAsync;
	if (!Z_Registration_Info_UClass_UGenGoogleChatStreamAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenGoogleChatStreamAsync"),
			Z_Registration_Info_UClass_UGenGoogleChatStreamAsync.InnerSingleton,
			StaticRegisterNativesUGenGoogleChatStreamAsync,
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
	return Z_Registration_Info_UClass_UGenGoogleChatStreamAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenGoogleChatStreamAsync_NoRegister()
{
	return UGenGoogleChatStreamAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "Google/GenGoogleChat.h" },
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDelta_MetaData[] = {
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDelta;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenGoogleChatStreamAsync_RequestGoogleChatStream, "RequestGoogleChatStream" }, // 733302075
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenGoogleChatStreamAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::NewProp_OnDelta = { "OnDelta", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenGoogleChatStreamAsync, OnDelta), Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDelta_MetaData), NewProp_OnDelta_MetaData) }; // 2308309152
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenGoogleChatStreamAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 2308309152
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenGoogleChatStreamAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleStreamDelta__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2308309152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::NewProp_OnDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::ClassParams = {
	&UGenGoogleChatStreamAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenGoogleChatStreamAsync()
{
	if (!Z_Registration_Info_UClass_UGenGoogleChatStreamAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenGoogleChatStreamAsync.OuterSingleton, Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenGoogleChatStreamAsync.OuterSingleton;
}
UGenGoogleChatStreamAsync::UGenGoogleChatStreamAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenGoogleChatStreamAsync);
UGenGoogleChatStreamAsync::~UGenGoogleChatStreamAsync() {}
// ********** End Class UGenGoogleChatStreamAsync **************************************************

// ********** Begin Class UGenGoogleChat ***********************************************************
void UGenGoogleChat::StaticRegisterNativesUGenGoogleChat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenGoogleChat;
UClass* UGenGoogleChat::GetPrivateStaticClass()
{
	using TClass = UGenGoogleChat;
	if (!Z_Registration_Info_UClass_UGenGoogleChat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenGoogleChat"),
			Z_Registration_Info_UClass_UGenGoogleChat.InnerSingleton,
			StaticRegisterNativesUGenGoogleChat,
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
	return Z_Registration_Info_UClass_UGenGoogleChat.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenGoogleChat_NoRegister()
{
	return UGenGoogleChat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenGoogleChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Google/GenGoogleChat.h" },
		{ "ModuleRelativePath", "Public/Google/GenGoogleChat.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenGoogleChat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenGoogleChat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleChat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenGoogleChat_Statics::ClassParams = {
	&UGenGoogleChat::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleChat_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenGoogleChat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenGoogleChat()
{
	if (!Z_Registration_Info_UClass_UGenGoogleChat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenGoogleChat.OuterSingleton, Z_Construct_UClass_UGenGoogleChat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenGoogleChat.OuterSingleton;
}
UGenGoogleChat::UGenGoogleChat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenGoogleChat);
UGenGoogleChat::~UGenGoogleChat() {}
// ********** End Class UGenGoogleChat *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenGoogleChatAsync, UGenGoogleChatAsync::StaticClass, TEXT("UGenGoogleChatAsync"), &Z_Registration_Info_UClass_UGenGoogleChatAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenGoogleChatAsync), 2792385770U) },
		{ Z_Construct_UClass_UGenGoogleChatStreamAsync, UGenGoogleChatStreamAsync::StaticClass, TEXT("UGenGoogleChatStreamAsync"), &Z_Registration_Info_UClass_UGenGoogleChatStreamAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenGoogleChatStreamAsync), 3431599005U) },
		{ Z_Construct_UClass_UGenGoogleChat, UGenGoogleChat::StaticClass, TEXT("UGenGoogleChat"), &Z_Registration_Info_UClass_UGenGoogleChat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenGoogleChat), 1880824474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h__Script_UU_GenAI_252231021(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
