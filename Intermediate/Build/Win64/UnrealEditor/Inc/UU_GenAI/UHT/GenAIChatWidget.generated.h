// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/GenAIChatWidget.h"

#ifdef UU_GENAI_GenAIChatWidget_generated_h
#error "GenAIChatWidget.generated.h already included, missing '#pragma once' in GenAIChatWidget.h"
#endif
#define UU_GENAI_GenAIChatWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin Class UGenAIChatWidget *********************************************************
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsGenAIChatOpen); \
	DECLARE_FUNCTION(execCloseGenAIChat); \
	DECLARE_FUNCTION(execOpenGenAIChat);


UU_GENAI_API UClass* Z_Construct_UClass_UGenAIChatWidget_NoRegister();

#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenAIChatWidget(); \
	friend struct Z_Construct_UClass_UGenAIChatWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UU_GENAI_API UClass* Z_Construct_UClass_UGenAIChatWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenAIChatWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UU_GenAI"), Z_Construct_UClass_UGenAIChatWidget_NoRegister) \
	DECLARE_SERIALIZER(UGenAIChatWidget)


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenAIChatWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenAIChatWidget(UGenAIChatWidget&&) = delete; \
	UGenAIChatWidget(const UGenAIChatWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenAIChatWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenAIChatWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenAIChatWidget) \
	NO_API virtual ~UGenAIChatWidget();


#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h_116_PROLOG
#define FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h_119_INCLASS_NO_PURE_DECLS \
	FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenAIChatWidget;

// ********** End Class UGenAIChatWidget ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
