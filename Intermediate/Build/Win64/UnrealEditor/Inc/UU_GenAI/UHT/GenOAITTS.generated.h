// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAI/GenOAITTS.h"

#ifdef UU_GENAI_GenOAITTS_generated_h
#error "GenOAITTS.generated.h already included, missing '#pragma once' in GenOAITTS.h"
#endif
#define UU_GENAI_GenOAITTS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenOAITTSAsync;
class UObject;
struct FGenOAITTSSettings;

// ********** Begin Delegate FOnOAITTSComplete *****************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_14_DELEGATE \
UU_GENAI_API void FOnOAITTSComplete_DelegateWrapper(const FMulticastScriptDelegate& OnOAITTSComplete, TArray<uint8> const& AudioData, const FString& AudioFormat, bool bSuccess);


// ********** End Delegate FOnOAITTSComplete *******************************************************

// ********** Begin Class UGenOAITTSAsync **********************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestOpenAITextToSpeech);


UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITTSAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAITTSAsync(); \
	friend struct Z_Construct_UClass_UGenOAITTSAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITTSAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAITTSAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAITTSAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenOAITTSAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAITTSAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAITTSAsync(UGenOAITTSAsync&&) = delete; \
	UGenOAITTSAsync(const UGenOAITTSAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAITTSAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAITTSAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAITTSAsync) \
	NO_API virtual ~UGenOAITTSAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_22_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_25_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAITTSAsync;

// ********** End Class UGenOAITTSAsync ************************************************************

// ********** Begin Class UGenOAITTS ***************************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITTS_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAITTS(); \
	friend struct Z_Construct_UClass_UGenOAITTS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITTS_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAITTS, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAITTS_NoRegister) \
	DECLARE_SERIALIZER(UGenOAITTS)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAITTS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAITTS(UGenOAITTS&&) = delete; \
	UGenOAITTS(const UGenOAITTS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAITTS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAITTS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAITTS) \
	NO_API virtual ~UGenOAITTS();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_62_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_65_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAITTS;

// ********** End Class UGenOAITTS *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITTS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
