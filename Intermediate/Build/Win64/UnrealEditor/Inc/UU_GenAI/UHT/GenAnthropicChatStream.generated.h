// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Anthropic/GenAnthropicChatStream.h"

#ifdef UU_GENAI_GenAnthropicChatStream_generated_h
#error "GenAnthropicChatStream.generated.h already included, missing '#pragma once' in GenAnthropicChatStream.h"
#endif
#define UU_GENAI_GenAnthropicChatStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenAnthropicChatStreamAsync;
class UObject;
struct FGenAnthropicChatSettings;
struct FGenChatMessage;
struct FGenStreamDelta;

// ********** Begin Delegate FOnAnthropicStreamDelta ***********************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_13_DELEGATE \
UU_GENAI_API void FOnAnthropicStreamDelta_DelegateWrapper(const FMulticastScriptDelegate& OnAnthropicStreamDelta, FGenStreamDelta const& Delta, bool bSuccess);


// ********** End Delegate FOnAnthropicStreamDelta *************************************************

// ********** Begin Class UGenAnthropicChatStreamAsync *********************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestAnthropicChatStream);


UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatStreamAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenAnthropicChatStreamAsync(); \
	friend struct Z_Construct_UClass_UGenAnthropicChatStreamAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatStreamAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenAnthropicChatStreamAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenAnthropicChatStreamAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenAnthropicChatStreamAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenAnthropicChatStreamAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenAnthropicChatStreamAsync(UGenAnthropicChatStreamAsync&&) = delete; \
	UGenAnthropicChatStreamAsync(const UGenAnthropicChatStreamAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenAnthropicChatStreamAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenAnthropicChatStreamAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenAnthropicChatStreamAsync) \
	NO_API virtual ~UGenAnthropicChatStreamAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_20_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_23_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenAnthropicChatStreamAsync;

// ********** End Class UGenAnthropicChatStreamAsync ***********************************************

// ********** Begin Class UGenAnthropicChatStream **************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatStream_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenAnthropicChatStream(); \
	friend struct Z_Construct_UClass_UGenAnthropicChatStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatStream_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenAnthropicChatStream, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenAnthropicChatStream_NoRegister) \
	DECLARE_SERIALIZER(UGenAnthropicChatStream)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenAnthropicChatStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenAnthropicChatStream(UGenAnthropicChatStream&&) = delete; \
	UGenAnthropicChatStream(const UGenAnthropicChatStream&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenAnthropicChatStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenAnthropicChatStream); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenAnthropicChatStream) \
	NO_API virtual ~UGenAnthropicChatStream();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_62_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_65_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenAnthropicChatStream;

// ********** End Class UGenAnthropicChatStream ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChatStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
