// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compat/GenCompatChat.h"

#ifdef UU_GENAI_GenCompatChat_generated_h
#error "GenCompatChat.generated.h already included, missing '#pragma once' in GenCompatChat.h"
#endif
#define UU_GENAI_GenCompatChat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenCompatChatAsync;
class UGenDeepSeekChatAsync;
class UGenMistralChatAsync;
class UObject;
struct FGenChatMessage;
struct FGenChatResponse;
struct FGenDeepSeekChatSettings;
struct FGenMistralChatSettings;
struct FGenOAIChatSettings;

// ********** Begin Delegate FOnDeepSeekChatComplete ***********************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_21_DELEGATE \
UU_GENAI_API void FOnDeepSeekChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnDeepSeekChatComplete, FGenChatResponse const& Response, bool bSuccess);


// ********** End Delegate FOnDeepSeekChatComplete *************************************************

// ********** Begin Class UGenDeepSeekChatAsync ****************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestDeepSeekChatCompletion);


UU_GENAI_API UClass* Z_Construct_UClass_UGenDeepSeekChatAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenDeepSeekChatAsync(); \
	friend struct Z_Construct_UClass_UGenDeepSeekChatAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenDeepSeekChatAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenDeepSeekChatAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenDeepSeekChatAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenDeepSeekChatAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenDeepSeekChatAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenDeepSeekChatAsync(UGenDeepSeekChatAsync&&) = delete; \
	UGenDeepSeekChatAsync(const UGenDeepSeekChatAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenDeepSeekChatAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenDeepSeekChatAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenDeepSeekChatAsync) \
	NO_API virtual ~UGenDeepSeekChatAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_23_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_26_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenDeepSeekChatAsync;

// ********** End Class UGenDeepSeekChatAsync ******************************************************

// ********** Begin Delegate FOnMistralChatComplete ************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_58_DELEGATE \
UU_GENAI_API void FOnMistralChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnMistralChatComplete, FGenChatResponse const& Response, bool bSuccess);


// ********** End Delegate FOnMistralChatComplete **************************************************

// ********** Begin Class UGenMistralChatAsync *****************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestMistralChatCompletion);


UU_GENAI_API UClass* Z_Construct_UClass_UGenMistralChatAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenMistralChatAsync(); \
	friend struct Z_Construct_UClass_UGenMistralChatAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenMistralChatAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenMistralChatAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenMistralChatAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenMistralChatAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenMistralChatAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenMistralChatAsync(UGenMistralChatAsync&&) = delete; \
	UGenMistralChatAsync(const UGenMistralChatAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenMistralChatAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenMistralChatAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenMistralChatAsync) \
	NO_API virtual ~UGenMistralChatAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_60_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_63_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenMistralChatAsync;

// ********** End Class UGenMistralChatAsync *******************************************************

// ********** Begin Delegate FOnCompatChatComplete *************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_98_DELEGATE \
UU_GENAI_API void FOnCompatChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnCompatChatComplete, FGenChatResponse const& Response, bool bSuccess);


// ********** End Delegate FOnCompatChatComplete ***************************************************

// ********** Begin Class UGenCompatChatAsync ******************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestCompatChatCompletion);


UU_GENAI_API UClass* Z_Construct_UClass_UGenCompatChatAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenCompatChatAsync(); \
	friend struct Z_Construct_UClass_UGenCompatChatAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenCompatChatAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenCompatChatAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenCompatChatAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenCompatChatAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenCompatChatAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenCompatChatAsync(UGenCompatChatAsync&&) = delete; \
	UGenCompatChatAsync(const UGenCompatChatAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenCompatChatAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenCompatChatAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenCompatChatAsync) \
	NO_API virtual ~UGenCompatChatAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_100_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_103_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenCompatChatAsync;

// ********** End Class UGenCompatChatAsync ********************************************************

// ********** Begin Class UGenCompatChat ***********************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenCompatChat_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenCompatChat(); \
	friend struct Z_Construct_UClass_UGenCompatChat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenCompatChat_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenCompatChat, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenCompatChat_NoRegister) \
	DECLARE_SERIALIZER(UGenCompatChat)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_152_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenCompatChat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenCompatChat(UGenCompatChat&&) = delete; \
	UGenCompatChat(const UGenCompatChat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenCompatChat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenCompatChat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenCompatChat) \
	NO_API virtual ~UGenCompatChat();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_149_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_152_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h_152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenCompatChat;

// ********** End Class UGenCompatChat *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Compat_GenCompatChat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
