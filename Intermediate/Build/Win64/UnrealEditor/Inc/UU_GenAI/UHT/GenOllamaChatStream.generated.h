// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ollama/GenOllamaChatStream.h"

#ifdef UU_GENAI_GenOllamaChatStream_generated_h
#error "GenOllamaChatStream.generated.h already included, missing '#pragma once' in GenOllamaChatStream.h"
#endif
#define UU_GENAI_GenOllamaChatStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenOllamaChatStreamAsync;
class UObject;
struct FGenChatMessage;
struct FGenOllamaChatSettings;
struct FGenStreamDelta;

// ********** Begin Delegate FOnOllamaStreamDelta **************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_13_DELEGATE \
UU_GENAI_API void FOnOllamaStreamDelta_DelegateWrapper(const FMulticastScriptDelegate& OnOllamaStreamDelta, FGenStreamDelta const& Delta, bool bSuccess);


// ********** End Delegate FOnOllamaStreamDelta ****************************************************

// ********** Begin Class UGenOllamaChatStreamAsync ************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestOllamaChatStream);


UU_GENAI_API UClass* Z_Construct_UClass_UGenOllamaChatStreamAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOllamaChatStreamAsync(); \
	friend struct Z_Construct_UClass_UGenOllamaChatStreamAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOllamaChatStreamAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOllamaChatStreamAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOllamaChatStreamAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenOllamaChatStreamAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOllamaChatStreamAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOllamaChatStreamAsync(UGenOllamaChatStreamAsync&&) = delete; \
	UGenOllamaChatStreamAsync(const UGenOllamaChatStreamAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOllamaChatStreamAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOllamaChatStreamAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOllamaChatStreamAsync) \
	NO_API virtual ~UGenOllamaChatStreamAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_20_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_23_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOllamaChatStreamAsync;

// ********** End Class UGenOllamaChatStreamAsync **************************************************

// ********** Begin Class UGenOllamaChatStream *****************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenOllamaChatStream_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOllamaChatStream(); \
	friend struct Z_Construct_UClass_UGenOllamaChatStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOllamaChatStream_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOllamaChatStream, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOllamaChatStream_NoRegister) \
	DECLARE_SERIALIZER(UGenOllamaChatStream)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOllamaChatStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOllamaChatStream(UGenOllamaChatStream&&) = delete; \
	UGenOllamaChatStream(const UGenOllamaChatStream&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOllamaChatStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOllamaChatStream); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOllamaChatStream) \
	NO_API virtual ~UGenOllamaChatStream();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_65_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_68_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOllamaChatStream;

// ********** End Class UGenOllamaChatStream *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_Ollama_GenOllamaChatStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
