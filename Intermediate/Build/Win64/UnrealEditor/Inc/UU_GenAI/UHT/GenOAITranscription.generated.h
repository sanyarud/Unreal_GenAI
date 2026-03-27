// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAI/GenOAITranscription.h"

#ifdef UU_GENAI_GenOAITranscription_generated_h
#error "GenOAITranscription.generated.h already included, missing '#pragma once' in GenOAITranscription.h"
#endif
#define UU_GENAI_GenOAITranscription_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenOAITranscriptionAsync;
class UObject;
struct FGenOAITranscriptionSettings;

// ********** Begin Delegate FOnOAITranscriptionComplete *******************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_14_DELEGATE \
UU_GENAI_API void FOnOAITranscriptionComplete_DelegateWrapper(const FMulticastScriptDelegate& OnOAITranscriptionComplete, const FString& TranscribedText, const FString& DetectedLanguage, bool bSuccess);


// ********** End Delegate FOnOAITranscriptionComplete *********************************************

// ********** Begin Class UGenOAITranscriptionAsync ************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestOpenAITranscription);


UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITranscriptionAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAITranscriptionAsync(); \
	friend struct Z_Construct_UClass_UGenOAITranscriptionAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITranscriptionAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAITranscriptionAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAITranscriptionAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenOAITranscriptionAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAITranscriptionAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAITranscriptionAsync(UGenOAITranscriptionAsync&&) = delete; \
	UGenOAITranscriptionAsync(const UGenOAITranscriptionAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAITranscriptionAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAITranscriptionAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAITranscriptionAsync) \
	NO_API virtual ~UGenOAITranscriptionAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_22_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_25_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAITranscriptionAsync;

// ********** End Class UGenOAITranscriptionAsync **************************************************

// ********** Begin Class UGenOAITranscription *****************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITranscription_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAITranscription(); \
	friend struct Z_Construct_UClass_UGenOAITranscription_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAITranscription_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAITranscription, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAITranscription_NoRegister) \
	DECLARE_SERIALIZER(UGenOAITranscription)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAITranscription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAITranscription(UGenOAITranscription&&) = delete; \
	UGenOAITranscription(const UGenOAITranscription&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAITranscription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAITranscription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAITranscription) \
	NO_API virtual ~UGenOAITranscription();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_64_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_67_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAITranscription;

// ********** End Class UGenOAITranscription *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAITranscription_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
