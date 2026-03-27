// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenAISettings.h"

#ifdef UU_GENAI_GenAISettings_generated_h
#error "GenAISettings.generated.h already included, missing '#pragma once' in GenAISettings.h"
#endif
#define UU_GENAI_GenAISettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGenAISettings ***********************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMistralKey); \
	DECLARE_FUNCTION(execSetDeepSeekKey); \
	DECLARE_FUNCTION(execSetGoogleKey); \
	DECLARE_FUNCTION(execSetAnthropicKey); \
	DECLARE_FUNCTION(execSetOpenAIKey);


UU_GENAI_API UClass* Z_Construct_UClass_UGenAISettings_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenAISettings(); \
	friend struct Z_Construct_UClass_UGenAISettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenAISettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenAISettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenAISettings_NoRegister) \
	DECLARE_SERIALIZER(UGenAISettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenAISettings(UGenAISettings&&) = delete; \
	UGenAISettings(const UGenAISettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenAISettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenAISettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGenAISettings) \
	NO_API virtual ~UGenAISettings();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h_15_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenAISettings;

// ********** End Class UGenAISettings *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_GenAISettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
