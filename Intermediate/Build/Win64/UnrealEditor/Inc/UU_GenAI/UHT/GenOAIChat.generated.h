// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAI/GenOAIChat.h"

#ifdef UU_GENAI_GenOAIChat_generated_h
#error "GenOAIChat.generated.h already included, missing '#pragma once' in GenOAIChat.h"
#endif
#define UU_GENAI_GenOAIChat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenOAIChatAsync;
class UObject;
struct FGenChatMessage;
struct FGenChatResponse;
struct FGenOAIChatSettings;

// ********** Begin Delegate FOnOAIChatComplete ****************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_13_DELEGATE \
UU_GENAI_API void FOnOAIChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnOAIChatComplete, FGenChatResponse const& Response, bool bSuccess);


// ********** End Delegate FOnOAIChatComplete ******************************************************

// ********** Begin Class UGenOAIChatAsync *********************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestOpenAIChatCompletion);


UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAIChatAsync(); \
	friend struct Z_Construct_UClass_UGenOAIChatAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChatAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAIChatAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAIChatAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenOAIChatAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAIChatAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAIChatAsync(UGenOAIChatAsync&&) = delete; \
	UGenOAIChatAsync(const UGenOAIChatAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAIChatAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAIChatAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAIChatAsync) \
	NO_API virtual ~UGenOAIChatAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_25_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_28_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAIChatAsync;

// ********** End Class UGenOAIChatAsync ***********************************************************

// ********** Begin Class UGenOAIChat **************************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChat_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAIChat(); \
	friend struct Z_Construct_UClass_UGenOAIChat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIChat_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAIChat, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAIChat_NoRegister) \
	DECLARE_SERIALIZER(UGenOAIChat)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAIChat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAIChat(UGenOAIChat&&) = delete; \
	UGenOAIChat(const UGenOAIChat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAIChat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAIChat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAIChat) \
	NO_API virtual ~UGenOAIChat();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_86_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_89_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAIChat;

// ********** End Class UGenOAIChat ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIChat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
