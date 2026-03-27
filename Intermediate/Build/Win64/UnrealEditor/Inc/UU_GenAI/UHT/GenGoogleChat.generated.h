// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Google/GenGoogleChat.h"

#ifdef UU_GENAI_GenGoogleChat_generated_h
#error "GenGoogleChat.generated.h already included, missing '#pragma once' in GenGoogleChat.h"
#endif
#define UU_GENAI_GenGoogleChat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenGoogleChatAsync;
class UGenGoogleChatStreamAsync;
class UObject;
struct FGenChatMessage;
struct FGenChatResponse;
struct FGenGoogleChatSettings;
struct FGenStreamDelta;

// ********** Begin Delegate FOnGoogleChatComplete *************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_13_DELEGATE \
UU_GENAI_API void FOnGoogleChatComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGoogleChatComplete, FGenChatResponse const& Response, bool bSuccess);


// ********** End Delegate FOnGoogleChatComplete ***************************************************

// ********** Begin Class UGenGoogleChatAsync ******************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestGoogleChatCompletion);


UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChatAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenGoogleChatAsync(); \
	friend struct Z_Construct_UClass_UGenGoogleChatAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChatAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenGoogleChatAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenGoogleChatAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenGoogleChatAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenGoogleChatAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenGoogleChatAsync(UGenGoogleChatAsync&&) = delete; \
	UGenGoogleChatAsync(const UGenGoogleChatAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenGoogleChatAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenGoogleChatAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenGoogleChatAsync) \
	NO_API virtual ~UGenGoogleChatAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_21_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_24_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenGoogleChatAsync;

// ********** End Class UGenGoogleChatAsync ********************************************************

// ********** Begin Delegate FOnGoogleStreamDelta **************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_57_DELEGATE \
UU_GENAI_API void FOnGoogleStreamDelta_DelegateWrapper(const FMulticastScriptDelegate& OnGoogleStreamDelta, FGenStreamDelta const& Delta, bool bSuccess);


// ********** End Delegate FOnGoogleStreamDelta ****************************************************

// ********** Begin Class UGenGoogleChatStreamAsync ************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestGoogleChatStream);


UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChatStreamAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenGoogleChatStreamAsync(); \
	friend struct Z_Construct_UClass_UGenGoogleChatStreamAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChatStreamAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenGoogleChatStreamAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenGoogleChatStreamAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenGoogleChatStreamAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenGoogleChatStreamAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenGoogleChatStreamAsync(UGenGoogleChatStreamAsync&&) = delete; \
	UGenGoogleChatStreamAsync(const UGenGoogleChatStreamAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenGoogleChatStreamAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenGoogleChatStreamAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenGoogleChatStreamAsync) \
	NO_API virtual ~UGenGoogleChatStreamAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_59_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_62_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenGoogleChatStreamAsync;

// ********** End Class UGenGoogleChatStreamAsync **************************************************

// ********** Begin Class UGenGoogleChat ***********************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChat_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenGoogleChat(); \
	friend struct Z_Construct_UClass_UGenGoogleChat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenGoogleChat_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenGoogleChat, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenGoogleChat_NoRegister) \
	DECLARE_SERIALIZER(UGenGoogleChat)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenGoogleChat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenGoogleChat(UGenGoogleChat&&) = delete; \
	UGenGoogleChat(const UGenGoogleChat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenGoogleChat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenGoogleChat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenGoogleChat) \
	NO_API virtual ~UGenGoogleChat();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_105_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_108_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenGoogleChat;

// ********** End Class UGenGoogleChat *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Google_GenGoogleChat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
