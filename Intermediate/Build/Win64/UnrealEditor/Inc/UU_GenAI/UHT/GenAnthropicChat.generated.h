// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Anthropic/GenAnthropicChat.h"

#ifdef UU_GENAI_GenAnthropicChat_generated_h
#error "GenAnthropicChat.generated.h already included, missing '#pragma once' in GenAnthropicChat.h"
#endif
#define UU_GENAI_GenAnthropicChat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenAnthropicChatAsync;
class UObject;
struct FGenAnthropicChatSettings;
struct FGenChatMessage;
struct FGenChatResponse;

// ********** Begin Delegate FOnAnthropicChatComplete **********************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_13_DELEGATE \
UU_GENAI_API void FOnAnthropicChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAnthropicChatComplete, FGenChatResponse const& Response, bool bSuccess);


// ********** End Delegate FOnAnthropicChatComplete ************************************************

// ********** Begin Class UGenAnthropicChatAsync ***************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestAnthropicChatCompletion);


UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenAnthropicChatAsync(); \
	friend struct Z_Construct_UClass_UGenAnthropicChatAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChatAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenAnthropicChatAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenAnthropicChatAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenAnthropicChatAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenAnthropicChatAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenAnthropicChatAsync(UGenAnthropicChatAsync&&) = delete; \
	UGenAnthropicChatAsync(const UGenAnthropicChatAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenAnthropicChatAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenAnthropicChatAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenAnthropicChatAsync) \
	NO_API virtual ~UGenAnthropicChatAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_21_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_24_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenAnthropicChatAsync;

// ********** End Class UGenAnthropicChatAsync *****************************************************

// ********** Begin Class UGenAnthropicChat ********************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChat_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenAnthropicChat(); \
	friend struct Z_Construct_UClass_UGenAnthropicChat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenAnthropicChat_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenAnthropicChat, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenAnthropicChat_NoRegister) \
	DECLARE_SERIALIZER(UGenAnthropicChat)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenAnthropicChat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenAnthropicChat(UGenAnthropicChat&&) = delete; \
	UGenAnthropicChat(const UGenAnthropicChat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenAnthropicChat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenAnthropicChat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenAnthropicChat) \
	NO_API virtual ~UGenAnthropicChat();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_60_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_63_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenAnthropicChat;

// ********** End Class UGenAnthropicChat **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Anthropic_GenAnthropicChat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
