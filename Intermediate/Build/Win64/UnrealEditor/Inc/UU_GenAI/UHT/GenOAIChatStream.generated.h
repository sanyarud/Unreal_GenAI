// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAI/GenOAIChatStream.h"

#ifdef UU_GENAI_GenOAIChatStream_generated_h
#error "GenOAIChatStream.generated.h already included, missing '#pragma once' in GenOAIChatStream.h"
#endif
#define UU_GENAI_GenOAIChatStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenOAIChatStreamAsync;
class UObject;
struct FGenChatMessage;
struct FGenOAIChatSettings;
struct FGenStreamDelta;

// ********** Begin Delegate FOnOAIStreamDelta *****************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_13_DELEGATE \
UU_GENAI_API void FOnOAIStreamDelta_DelegateWrapper(const FMulticastScriptDelegate& OnOAIStreamDelta, FGenStreamDelta const& Delta, bool bSuccess);


// ********** End Delegate FOnOAIStreamDelta *******************************************************

// ********** Begin Class UGenOAIChatStreamAsync ***************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestOpenAIChatStream);


UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatStreamAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAIChatStreamAsync(); \
	friend struct Z_Construct_UClass_UGenOAIChatStreamAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatStreamAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAIChatStreamAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAIChatStreamAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenOAIChatStreamAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAIChatStreamAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAIChatStreamAsync(UGenOAIChatStreamAsync&&) = delete; \
	UGenOAIChatStreamAsync(const UGenOAIChatStreamAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAIChatStreamAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAIChatStreamAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAIChatStreamAsync) \
	NO_API virtual ~UGenOAIChatStreamAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_26_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_29_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAIChatStreamAsync;

// ********** End Class UGenOAIChatStreamAsync *****************************************************

// ********** Begin Class UGenOAIChatStream ********************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatStream_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAIChatStream(); \
	friend struct Z_Construct_UClass_UGenOAIChatStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatStream_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAIChatStream, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAIChatStream_NoRegister) \
	DECLARE_SERIALIZER(UGenOAIChatStream)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAIChatStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAIChatStream(UGenOAIChatStream&&) = delete; \
	UGenOAIChatStream(const UGenOAIChatStream&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAIChatStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAIChatStream); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAIChatStream) \
	NO_API virtual ~UGenOAIChatStream();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_78_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_81_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAIChatStream;

// ********** End Class UGenOAIChatStream **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChatStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
