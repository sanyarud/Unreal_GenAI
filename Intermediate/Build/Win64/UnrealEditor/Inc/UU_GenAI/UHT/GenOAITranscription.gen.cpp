// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAI/GenOAITranscription.h"
#include "GenAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenOAITranscription() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITranscription();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITranscription_NoRegister();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITranscriptionAsync();
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITranscriptionAsync_NoRegister();
UU_GENAI_API UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature();
UU_GENAI_API UScriptStruct* Z_Construct_UScriptStruct_FGenOAITranscriptionSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnOAITranscriptionComplete *******************************************
struct Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics
{
	struct _Script_UU_GenAI_eventOnOAITranscriptionComplete_Parms
	{
		FString TranscribedText;
		FString DetectedLanguage;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITranscription.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranscribedText_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectedLanguage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TranscribedText;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DetectedLanguage;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::NewProp_TranscribedText = { "TranscribedText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnOAITranscriptionComplete_Parms, TranscribedText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranscribedText_MetaData), NewProp_TranscribedText_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::NewProp_DetectedLanguage = { "DetectedLanguage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UU_GenAI_eventOnOAITranscriptionComplete_Parms, DetectedLanguage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectedLanguage_MetaData), NewProp_DetectedLanguage_MetaData) };
void Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_UU_GenAI_eventOnOAITranscriptionComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UU_GenAI_eventOnOAITranscriptionComplete_Parms), &Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::NewProp_TranscribedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::NewProp_DetectedLanguage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UU_GenAI, nullptr, "OnOAITranscriptionComplete__DelegateSignature", Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAITranscriptionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::_Script_UU_GenAI_eventOnOAITranscriptionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOAITranscriptionComplete_DelegateWrapper(const FMulticastScriptDelegate& OnOAITranscriptionComplete, const FString& TranscribedText, const FString& DetectedLanguage, bool bSuccess)
{
	struct _Script_UU_GenAI_eventOnOAITranscriptionComplete_Parms
	{
		FString TranscribedText;
		FString DetectedLanguage;
		bool bSuccess;
	};
	_Script_UU_GenAI_eventOnOAITranscriptionComplete_Parms Parms;
	Parms.TranscribedText=TranscribedText;
	Parms.DetectedLanguage=DetectedLanguage;
	Parms.bSuccess=bSuccess ? true : false;
	OnOAITranscriptionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnOAITranscriptionComplete *********************************************

// ********** Begin Class UGenOAITranscriptionAsync Function RequestOpenAITranscription ************
struct Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics
{
	struct GenOAITranscriptionAsync_eventRequestOpenAITranscription_Parms
	{
		UObject* WorldContextObject;
		TArray<uint8> AudioData;
		FString Filename;
		FGenOAITranscriptionSettings Settings;
		UGenOAITranscriptionAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GenAI|OpenAI" },
		{ "DisplayName", "Request OpenAI Audio Transcription" },
		{ "Keywords", "openai whisper transcription audio speech to text" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITranscription.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAITranscriptionAsync_eventRequestOpenAITranscription_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAITranscriptionAsync_eventRequestOpenAITranscription_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioData_MetaData), NewProp_AudioData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAITranscriptionAsync_eventRequestOpenAITranscription_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAITranscriptionAsync_eventRequestOpenAITranscription_Parms, Settings), Z_Construct_UScriptStruct_FGenOAITranscriptionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 898278126
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenOAITranscriptionAsync_eventRequestOpenAITranscription_Parms, ReturnValue), Z_Construct_UClass_UGenOAITranscriptionAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_AudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_AudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenOAITranscriptionAsync, nullptr, "RequestOpenAITranscription", Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::GenOAITranscriptionAsync_eventRequestOpenAITranscription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::GenOAITranscriptionAsync_eventRequestOpenAITranscription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenOAITranscriptionAsync::execRequestOpenAITranscription)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_AudioData);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_STRUCT_REF(FGenOAITranscriptionSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenOAITranscriptionAsync**)Z_Param__Result=UGenOAITranscriptionAsync::RequestOpenAITranscription(Z_Param_WorldContextObject,Z_Param_Out_AudioData,Z_Param_Filename,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class UGenOAITranscriptionAsync Function RequestOpenAITranscription **************

// ********** Begin Class UGenOAITranscriptionAsync ************************************************
void UGenOAITranscriptionAsync::StaticRegisterNativesUGenOAITranscriptionAsync()
{
	UClass* Class = UGenOAITranscriptionAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestOpenAITranscription", &UGenOAITranscriptionAsync::execRequestOpenAITranscription },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAITranscriptionAsync;
UClass* UGenOAITranscriptionAsync::GetPrivateStaticClass()
{
	using TClass = UGenOAITranscriptionAsync;
	if (!Z_Registration_Info_UClass_UGenOAITranscriptionAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAITranscriptionAsync"),
			Z_Registration_Info_UClass_UGenOAITranscriptionAsync.InnerSingleton,
			StaticRegisterNativesUGenOAITranscriptionAsync,
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
	return Z_Registration_Info_UClass_UGenOAITranscriptionAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAITranscriptionAsync_NoRegister()
{
	return UGenOAITranscriptionAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAITranscriptionAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint async node: Request OpenAI Audio Transcription\n *\n * Transcribes audio to text using OpenAI Whisper.\n * Accepts raw audio bytes (WAV, MP3, M4A, FLAC, OGG, WEBM).\n */" },
#endif
		{ "HideThen", "TRUE" },
		{ "IncludePath", "OpenAI/GenOAITranscription.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITranscription.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint async node: Request OpenAI Audio Transcription\n\nTranscribes audio to text using OpenAI Whisper.\nAccepts raw audio bytes (WAV, MP3, M4A, FLAC, OGG, WEBM)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITranscription.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITranscription.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenOAITranscriptionAsync_RequestOpenAITranscription, "RequestOpenAITranscription" }, // 2911015613
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAITranscriptionAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAITranscriptionAsync, OnComplete), Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3764667392
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenOAITranscriptionAsync, OnFailure), Z_Construct_UDelegateFunction_UU_GenAI_OnOAITranscriptionComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3764667392
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::ClassParams = {
	&UGenOAITranscriptionAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAITranscriptionAsync()
{
	if (!Z_Registration_Info_UClass_UGenOAITranscriptionAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAITranscriptionAsync.OuterSingleton, Z_Construct_UClass_UGenOAITranscriptionAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAITranscriptionAsync.OuterSingleton;
}
UGenOAITranscriptionAsync::UGenOAITranscriptionAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAITranscriptionAsync);
UGenOAITranscriptionAsync::~UGenOAITranscriptionAsync() {}
// ********** End Class UGenOAITranscriptionAsync **************************************************

// ********** Begin Class UGenOAITranscription *****************************************************
void UGenOAITranscription::StaticRegisterNativesUGenOAITranscription()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenOAITranscription;
UClass* UGenOAITranscription::GetPrivateStaticClass()
{
	using TClass = UGenOAITranscription;
	if (!Z_Registration_Info_UClass_UGenOAITranscription.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenOAITranscription"),
			Z_Registration_Info_UClass_UGenOAITranscription.InnerSingleton,
			StaticRegisterNativesUGenOAITranscription,
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
	return Z_Registration_Info_UClass_UGenOAITranscription.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenOAITranscription_NoRegister()
{
	return UGenOAITranscription::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenOAITranscription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OpenAI/GenOAITranscription.h" },
		{ "ModuleRelativePath", "Public/OpenAI/GenOAITranscription.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenOAITranscription>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenOAITranscription_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITranscription_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenOAITranscription_Statics::ClassParams = {
	&UGenOAITranscription::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenOAITranscription_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenOAITranscription_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenOAITranscription()
{
	if (!Z_Registration_Info_UClass_UGenOAITranscription.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenOAITranscription.OuterSingleton, Z_Construct_UClass_UGenOAITranscription_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenOAITranscription.OuterSingleton;
}
UGenOAITranscription::UGenOAITranscription(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenOAITranscription);
UGenOAITranscription::~UGenOAITranscription() {}
// ********** End Class UGenOAITranscription *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenOAITranscriptionAsync, UGenOAITranscriptionAsync::StaticClass, TEXT("UGenOAITranscriptionAsync"), &Z_Registration_Info_UClass_UGenOAITranscriptionAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAITranscriptionAsync), 4058021360U) },
		{ Z_Construct_UClass_UGenOAITranscription, UGenOAITranscription::StaticClass, TEXT("UGenOAITranscription"), &Z_Registration_Info_UClass_UGenOAITranscription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenOAITranscription), 3783662283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h__Script_UU_GenAI_907279236(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
