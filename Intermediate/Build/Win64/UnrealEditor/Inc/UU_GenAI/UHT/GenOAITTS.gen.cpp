// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAI/GenOAITTS.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenOAITTS() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITTS();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITTS_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITTSAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITTSAsync_NoRegister();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenOAITTSSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnOAITTSComplete *****************************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnOAITTSComplete_Parms
	{
		TArray<uint8> AudioData;
		FString AudioFormat;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITTS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioFormat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioFormat;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnOAITTSComplete_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioData_MetaData), NewProp_AudioData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnOAITTSComplete_Parms, AudioFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioFormat_MetaData), NewProp_AudioFormat_MetaData) };
void Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnOAITTSComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnOAITTSComplete_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::NewProp_AudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::NewProp_AudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::NewProp_AudioFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnOAITTSComplete__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAITTSComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAITTSComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOAITTSComplete_DelegateWrapper(const FMulticastScriptDelegate& OnOAITTSComplete, TArray<uint8> const& AudioData, const FString& AudioFormat, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnOAITTSComplete_Parms
	{
		TArray<uint8> AudioData;
		FString AudioFormat;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnOAITTSComplete_Parms Parms;
	Parms.AudioData=AudioData;
	Parms.AudioFormat=AudioFormat;
	Parms.bSuccess=bSuccess ? true : false;
	OnOAITTSComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnOAITTSComplete *******************************************************

// ********** Begin Class UGenOAITTSAsync Function RequestOpenAITextToSpeech ***********************
struct Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics
{
	struct GenOAITTSAsync_eventRequestOpenAITextToSpeech_Parms
	{
		UObject* WorldContextObject;
		FString InputText;
		FGenOAITTSSettings Settings;
		UGenOAITTSAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|OpenAI" },
		{ "DisplayName", "Request OpenAI Text To Speech" },
		{ "Keywords", "openai tts text speech audio voice" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITTS.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAITTSAsync_eventRequestOpenAITextToSpeech_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::NewProp_InputText = { "InputText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAITTSAsync_eventRequestOpenAITextToSpeech_Parms, InputText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputText_MetaData), NewProp_InputText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAITTSAsync_eventRequestOpenAITextToSpeech_Parms, Settings), Z_Construct_UScriptStruct_FGenOAITTSSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3979124614
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAITTSAsync_eventRequestOpenAITextToSpeech_Parms, ReturnValue), Z_Construct_UClass_UGenOAITTSAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::NewProp_InputText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenOAITTSAsync, nullptr, "RequestOpenAITextToSpeech", Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::GenOAITTSAsync_eventRequestOpenAITextToSpeech_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::GenOAITTSAsync_eventRequestOpenAITextToSpeech_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenOAITTSAsync::execRequestOpenAITextToSpeech)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputText);
	P_GET_STRUCT_REF(FGenOAITTSSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenOAITTSAsync**)Z_Param__Result=UGenOAITTSAsync::RequestOpenAITextToSpeech(Z_Param_WorldContextObject,Z_Param_InputText,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenOAITTSAsync Function RequestOpenAITextToSpeech *************************

// ********** Begin Class UGenOAITTSAsync **********************************************************
void UGenOAITTSAsync::StaticRegisterNativesUGenOAITTSAsync()
{
	UClass* Class = UGenOAITTSAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestOpenAITextToSpeech", &UGenOAITTSAsync::execRequestOpenAITextToSpeech },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAITTSAsync;
UClass* UGenOAITTSAsync::GetPrivateStaticClass()
{
	using TClass = UGenOAITTSAsync;
	if (!Z_Registration_Info_UClass_UGenOAITTSAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAITTSAsync"),
			Z_Registration_Info_UClass_UGenOAITTSAsync.InnerSingleton,
			StaticRegisterNativesUGenOAITTSAsync,
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
	return Z_Registration_Info_UClass_UGenOAITTSAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAITTSAsync_NoRegister()
{
	return UGenOAITTSAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAITTSAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request OpenAI Text To Speech\n *\n * Converts text to audio using OpenAI TTS models (tts-1, tts-1-hd, gpt-4o-mini-tts).\n * Returns raw audio bytes that can be played back or saved to disk.\n */" },
#endif
		{ "HideThen", "TRUE" },
		{ "IncludePath", "OpenAI/GenOAITTS.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITTS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request OpenAI Text To Speech\n\nConverts text to audio using OpenAI TTS models (tts-1, tts-1-hd, gpt-4o-mini-tts).\nReturns raw audio bytes that can be played back or saved to disk." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITTS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITTS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenOAITTSAsync_RequestOpenAITextToSpeech, "RequestOpenAITextToSpeech" }, // 1445959094
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAITTSAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAITTSAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAITTSAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 276399124
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAITTSAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAITTSAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnOAITTSComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 276399124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenOAITTSAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAITTSAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAITTSAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITTSAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenOAITTSAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITTSAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAITTSAsync_Statics::ClassParams = {
	&UGenOAITTSAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenOAITTSAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITTSAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITTSAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAITTSAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAITTSAsync()
{
	if (!Z_Registration_Info_UClass_UGenOAITTSAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAITTSAsync.OuterSingleton, Z_Construct_UClass_UGenOAITTSAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAITTSAsync.OuterSingleton;
}
UGenOAITTSAsync::UGenOAITTSAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAITTSAsync);
UGenOAITTSAsync::~UGenOAITTSAsync() {}
// ********** End Class UGenOAITTSAsync ************************************************************

// ********** Begin Class UGenOAITTS ***************************************************************
void UGenOAITTS::StaticRegisterNativesUGenOAITTS()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAITTS;
UClass* UGenOAITTS::GetPrivateStaticClass()
{
	using TClass = UGenOAITTS;
	if (!Z_Registration_Info_UClass_UGenOAITTS.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAITTS"),
			Z_Registration_Info_UClass_UGenOAITTS.InnerSingleton,
			StaticRegisterNativesUGenOAITTS,
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
	return Z_Registration_Info_UClass_UGenOAITTS.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAITTS_NoRegister()
{
	return UGenOAITTS::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAITTS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OpenAI/GenOAITTS.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITTS.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAITTS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenOAITTS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITTS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAITTS_Statics::ClassParams = {
	&UGenOAITTS::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITTS_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAITTS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAITTS()
{
	if (!Z_Registration_Info_UClass_UGenOAITTS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAITTS.OuterSingleton, Z_Construct_UClass_UGenOAITTS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAITTS.OuterSingleton;
}
UGenOAITTS::UGenOAITTS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAITTS);
UGenOAITTS::~UGenOAITTS() {}
// ********** End Class UGenOAITTS *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenOAITTSAsync, UGenOAITTSAsync::StaticClass, TEXT("UGenOAITTSAsync"), &Z_Registration_Info_UClass_UGenOAITTSAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAITTSAsync), 2829567486U) },
		{ Z_Construct_UClass_UGenOAITTS, UGenOAITTS::StaticClass, TEXT("UGenOAITTS"), &Z_Registration_Info_UClass_UGenOAITTS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAITTS), 1793208046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h__Script_UU_GenAI_2066892268(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
