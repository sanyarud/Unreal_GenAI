// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAI/GenOAIImageGen.h"

#ifdef UU_GENAI_GenOAIImageGen_generated_h
#error "GenOAIImageGen.generated.h already included, missing '#pragma once' in GenOAIImageGen.h"
#endif
#define UU_GENAI_GenOAIImageGen_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenOAIImageEditAsync;
class UGenOAIImageGenAsync;
class UObject;
struct FGenImageResult;
struct FGenOAIImageSettings;

// ********** Begin Delegate FOnOAIImageComplete ***************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_13_DELEGATE \
UU_GENAI_API void FOnOAIImageComplete_DelegateWrapper(const FMulticastScriptDelegate& OnOAIImageComplete, TArray<FGenImageResult> const& Results, bool bSuccess);


// ********** End Delegate FOnOAIImageComplete *****************************************************

// ********** Begin Class UGenOAIImageGenAsync *****************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestOpenAIImageGeneration);


UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageGenAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAIImageGenAsync(); \
	friend struct Z_Construct_UClass_UGenOAIImageGenAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageGenAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAIImageGenAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAIImageGenAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenOAIImageGenAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAIImageGenAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAIImageGenAsync(UGenOAIImageGenAsync&&) = delete; \
	UGenOAIImageGenAsync(const UGenOAIImageGenAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAIImageGenAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAIImageGenAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAIImageGenAsync) \
	NO_API virtual ~UGenOAIImageGenAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_20_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_23_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAIImageGenAsync;

// ********** End Class UGenOAIImageGenAsync *******************************************************

// ********** Begin Class UGenOAIImageEditAsync ****************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestOpenAIImageEdit);


UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageEditAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAIImageEditAsync(); \
	friend struct Z_Construct_UClass_UGenOAIImageEditAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageEditAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAIImageEditAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAIImageEditAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenOAIImageEditAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAIImageEditAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAIImageEditAsync(UGenOAIImageEditAsync&&) = delete; \
	UGenOAIImageEditAsync(const UGenOAIImageEditAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAIImageEditAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAIImageEditAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAIImageEditAsync) \
	NO_API virtual ~UGenOAIImageEditAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_57_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_60_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAIImageEditAsync;

// ********** End Class UGenOAIImageEditAsync ******************************************************

// ********** Begin Class UGenOAIImageGen **********************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageGen_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAIImageGen(); \
	friend struct Z_Construct_UClass_UGenOAIImageGen_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIImageGen_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAIImageGen, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAIImageGen_NoRegister) \
	DECLARE_SERIALIZER(UGenOAIImageGen)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAIImageGen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAIImageGen(UGenOAIImageGen&&) = delete; \
	UGenOAIImageGen(const UGenOAIImageGen&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAIImageGen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAIImageGen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAIImageGen) \
	NO_API virtual ~UGenOAIImageGen();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_100_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_103_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAIImageGen;

// ********** End Class UGenOAIImageGen ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIImageGen_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
