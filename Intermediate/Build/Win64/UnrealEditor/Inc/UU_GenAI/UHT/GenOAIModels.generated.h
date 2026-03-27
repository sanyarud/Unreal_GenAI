// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAI/GenOAIModels.h"

#ifdef UU_GENAI_GenOAIModels_generated_h
#error "GenOAIModels.generated.h already included, missing '#pragma once' in GenOAIModels.h"
#endif
#define UU_GENAI_GenOAIModels_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGenOAIModelsAsync;
class UObject;
struct FGenModelInfo;

// ********** Begin Delegate FOnOAIModelsComplete **************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_13_DELEGATE \
UU_GENAI_API void FOnOAIModelsComplete_DelegateWrapper(const FMulticastScriptDelegate& OnOAIModelsComplete, TArray<FGenModelInfo> const& Models, bool bSuccess);


// ********** End Delegate FOnOAIModelsComplete ****************************************************

// ********** Begin Class UGenOAIModelsAsync *******************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestGetAllOpenAIModels);


UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIModelsAsync_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAIModelsAsync(); \
	friend struct Z_Construct_UClass_UGenOAIModelsAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIModelsAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAIModelsAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAIModelsAsync_NoRegister) \
	DECLARE_SERIALIZER(UGenOAIModelsAsync)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAIModelsAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAIModelsAsync(UGenOAIModelsAsync&&) = delete; \
	UGenOAIModelsAsync(const UGenOAIModelsAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAIModelsAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAIModelsAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAIModelsAsync) \
	NO_API virtual ~UGenOAIModelsAsync();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_20_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_23_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAIModelsAsync;

// ********** End Class UGenOAIModelsAsync *********************************************************

// ********** Begin Class UGenOAIModels ************************************************************
UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIModels_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenOAIModels(); \
	friend struct Z_Construct_UClass_UGenOAIModels_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenOAIModels_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenOAIModels, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenOAIModels_NoRegister) \
	DECLARE_SERIALIZER(UGenOAIModels)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenOAIModels(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenOAIModels(UGenOAIModels&&) = delete; \
	UGenOAIModels(const UGenOAIModels&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenOAIModels); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenOAIModels); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenOAIModels) \
	NO_API virtual ~UGenOAIModels();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_57_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_60_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenOAIModels;

// ********** End Class UGenOAIModels **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_OpenAI_GenOAIModels_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
