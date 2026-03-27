// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Google/GenGoogleTTS.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenGoogleTTS() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleTTS();
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleTTS_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleTTSAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleTTSAsync_NoRegister();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenGoogleTTSSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGoogleTTSComplete **************************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnGoogleTTSComplete_Parms
	{
		TArray<uint8> AudioData;
		FString AudioEncoding;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Google/GenGoogleTTS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioEncoding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioEncoding;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnGoogleTTSComplete_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioData_MetaData), NewProp_AudioData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::NewProp_AudioEncoding = { "AudioEncoding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnGoogleTTSComplete_Parms, AudioEncoding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioEncoding_MetaData), NewProp_AudioEncoding_MetaData) };
void Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnGoogleTTSComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnGoogleTTSComplete_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::NewProp_AudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::NewProp_AudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::NewProp_AudioEncoding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnGoogleTTSComplete__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnGoogleTTSComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnGoogleTTSComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGoogleTTSComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGoogleTTSComplete, TArray<uint8> const& AudioData, const FString& AudioEncoding, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnGoogleTTSComplete_Parms
	{
		TArray<uint8> AudioData;
		FString AudioEncoding;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnGoogleTTSComplete_Parms Parms;
	Parms.AudioData=AudioData;
	Parms.AudioEncoding=AudioEncoding;
	Parms.bSuccess=bSuccess ? true : false;
	OnGoogleTTSComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGoogleTTSComplete ****************************************************

// ********** Begin Class UGenGoogleTTSAsync Function RequestGoogleTextToSpeech ********************
struct Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics
{
	struct GenGoogleTTSAsync_eventRequestGoogleTextToSpeech_Parms
	{
		UObject* WorldContextObject;
		FString InputText;
		FGenGoogleTTSSettings Settings;
		UGenGoogleTTSAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|Google" },
		{ "DisplayName", "Request Google Text To Speech" },
		{ "Keywords", "google tts text speech audio" },
		{ "ModuleRelativePath", "Public/Google/GenGoogleTTS.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputText_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleTTSAsync_eventRequestGoogleTextToSpeech_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::NewProp_InputText = { "InputText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleTTSAsync_eventRequestGoogleTextToSpeech_Parms, InputText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputText_MetaData), NewProp_InputText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleTTSAsync_eventRequestGoogleTextToSpeech_Parms, Settings), Z_Construct_UScriptStruct_FGenGoogleTTSSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4053892702
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenGoogleTTSAsync_eventRequestGoogleTextToSpeech_Parms, ReturnValue), Z_Construct_UClass_UGenGoogleTTSAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::NewProp_InputText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenGoogleTTSAsync, nullptr, "RequestGoogleTextToSpeech", Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::GenGoogleTTSAsync_eventRequestGoogleTextToSpeech_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::GenGoogleTTSAsync_eventRequestGoogleTextToSpeech_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenGoogleTTSAsync::execRequestGoogleTextToSpeech)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputText);
	P_GET_STRUCT_REF(FGenGoogleTTSSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenGoogleTTSAsync**)Z_Param__Result=UGenGoogleTTSAsync::RequestGoogleTextToSpeech(Z_Param_WorldContextObject,Z_Param_InputText,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenGoogleTTSAsync Function RequestGoogleTextToSpeech **********************

// ********** Begin Class UGenGoogleTTSAsync *******************************************************
void UGenGoogleTTSAsync::StaticRegisterNativesUGenGoogleTTSAsync()
{
	UClass* Class = UGenGoogleTTSAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestGoogleTextToSpeech", &UGenGoogleTTSAsync::execRequestGoogleTextToSpeech },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenGoogleTTSAsync;
UClass* UGenGoogleTTSAsync::GetPrivateStaticClass()
{
	using TClass = UGenGoogleTTSAsync;
	if (!Z_Registration_Info_UClass_UGenGoogleTTSAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenGoogleTTSAsync"),
			Z_Registration_Info_UClass_UGenGoogleTTSAsync.InnerSingleton,
			StaticRegisterNativesUGenGoogleTTSAsync,
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
	return Z_Registration_Info_UClass_UGenGoogleTTSAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenGoogleTTSAsync_NoRegister()
{
	return UGenGoogleTTSAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenGoogleTTSAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request Google Text To Speech\n *\n * Converts text to audio using Google Cloud Text-to-Speech.\n */" },
#endif
		{ "HideThen", "TRUE" },
		{ "IncludePath", "Google/GenGoogleTTS.h" },
		{ "ModuleRelativePath", "Public/Google/GenGoogleTTS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request Google Text To Speech\n\nConverts text to audio using Google Cloud Text-to-Speech." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Google/GenGoogleTTS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Google/GenGoogleTTS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenGoogleTTSAsync_RequestGoogleTextToSpeech, "RequestGoogleTextToSpeech" }, // 2752448229
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenGoogleTTSAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenGoogleTTSAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenGoogleTTSAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3800287978
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenGoogleTTSAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenGoogleTTSAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnGoogleTTSComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3800287978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenGoogleTTSAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenGoogleTTSAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenGoogleTTSAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleTTSAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenGoogleTTSAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleTTSAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenGoogleTTSAsync_Statics::ClassParams = {
	&UGenGoogleTTSAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenGoogleTTSAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleTTSAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleTTSAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenGoogleTTSAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenGoogleTTSAsync()
{
	if (!Z_Registration_Info_UClass_UGenGoogleTTSAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenGoogleTTSAsync.OuterSingleton, Z_Construct_UClass_UGenGoogleTTSAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenGoogleTTSAsync.OuterSingleton;
}
UGenGoogleTTSAsync::UGenGoogleTTSAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenGoogleTTSAsync);
UGenGoogleTTSAsync::~UGenGoogleTTSAsync() {}
// ********** End Class UGenGoogleTTSAsync *********************************************************

// ********** Begin Class UGenGoogleTTS ************************************************************
void UGenGoogleTTS::StaticRegisterNativesUGenGoogleTTS()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenGoogleTTS;
UClass* UGenGoogleTTS::GetPrivateStaticClass()
{
	using TClass = UGenGoogleTTS;
	if (!Z_Registration_Info_UClass_UGenGoogleTTS.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenGoogleTTS"),
			Z_Registration_Info_UClass_UGenGoogleTTS.InnerSingleton,
			StaticRegisterNativesUGenGoogleTTS,
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
	return Z_Registration_Info_UClass_UGenGoogleTTS.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenGoogleTTS_NoRegister()
{
	return UGenGoogleTTS::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenGoogleTTS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Google/GenGoogleTTS.h" },
		{ "ModuleRelativePath", "Public/Google/GenGoogleTTS.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenGoogleTTS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenGoogleTTS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleTTS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenGoogleTTS_Statics::ClassParams = {
	&UGenGoogleTTS::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenGoogleTTS_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenGoogleTTS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenGoogleTTS()
{
	if (!Z_Registration_Info_UClass_UGenGoogleTTS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenGoogleTTS.OuterSingleton, Z_Construct_UClass_UGenGoogleTTS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenGoogleTTS.OuterSingleton;
}
UGenGoogleTTS::UGenGoogleTTS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenGoogleTTS);
UGenGoogleTTS::~UGenGoogleTTS() {}
// ********** End Class UGenGoogleTTS **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenGoogleTTSAsync, UGenGoogleTTSAsync::StaticClass, TEXT("UGenGoogleTTSAsync"), &Z_Registration_Info_UClass_UGenGoogleTTSAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenGoogleTTSAsync), 1515460302U) },
		{ Z_Construct_UClass_UGenGoogleTTS, UGenGoogleTTS::StaticClass, TEXT("UGenGoogleTTS"), &Z_Registration_Info_UClass_UGenGoogleTTS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenGoogleTTS), 150415058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h__Script_UU_GenAI_3172237705(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
