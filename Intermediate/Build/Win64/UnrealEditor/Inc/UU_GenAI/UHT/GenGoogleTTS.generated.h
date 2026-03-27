// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Google/GenGoogleTTS.h"

#ifdef UU_GENAI_GenGoogleTTS_generated_h
#error "GenGoogleTTS.generated.h already included, missing '#pragma once' in GenGoogleTTS.h"
#endif
#define UU_GENAI_GenGoogleTTS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenGoogleTTSAsync;
class UObject;
struct FGenGoogleTTSSettings;

// ********** Begin Delegate FOnGoogleTTSComplete **************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_14_DELEGATE \
UU_GENAI_API void FOnGoogleTTSComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGoogleTTSComplete, TArray<uint8> const& AudioData, const FString& AudioEncoding, bool bSuccess);


// ********** End Delegate FOnGoogleTTSComplete ****************************************************

// ********** Begin Class UGenGoogleTTSAsync *******************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestGoogleTextToSpeech);


UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleTTSAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenGoogleTTSAsync(); \
	friend struct Z_Construct_UClass_UGenGoogleTTSAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleTTSAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenGoogleTTSAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenGoogleTTSAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenGoogleTTSAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenGoogleTTSAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenGoogleTTSAsync(UGenGoogleTTSAsync&&) = delete; \
	UGenGoogleTTSAsync(const UGenGoogleTTSAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenGoogleTTSAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenGoogleTTSAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenGoogleTTSAsync) \
	NO_API virtual ~UGenGoogleTTSAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_21_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_24_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenGoogleTTSAsync;

// ********** End Class UGenGoogleTTSAsync *********************************************************

// ********** Begin Class UGenGoogleTTS ************************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleTTS_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenGoogleTTS(); \
	friend struct Z_Construct_UClass_UGenGoogleTTS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleTTS_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenGoogleTTS, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenGoogleTTS_NoRegister) \
	DECLARE_SERIALIZER(UGenGoogleTTS)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenGoogleTTS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenGoogleTTS(UGenGoogleTTS&&) = delete; \
	UGenGoogleTTS(const UGenGoogleTTS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenGoogleTTS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenGoogleTTS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenGoogleTTS) \
	NO_API virtual ~UGenGoogleTTS();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_61_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_64_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenGoogleTTS;

// ********** End Class UGenGoogleTTS **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleTTS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
