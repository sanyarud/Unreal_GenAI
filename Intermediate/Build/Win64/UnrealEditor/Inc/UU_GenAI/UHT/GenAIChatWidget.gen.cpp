// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/GenAIChatWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenAIChatWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_UU_GenAI();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAIChatWidget();
UU_GENAI_API UClass* Z_Construct_UClass_UGenAIChatWidget_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGenAIChatWidget Function CloseGenAIChat *********************************
struct Z_Construct_UFunction_UGenAIChatWidget_CloseGenAIChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GenAI|Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Close the currently open chat panel. */" },
#endif
		{ "DisplayName", "Close GenAI Chat" },
		{ "ModuleRelativePath", "Public/UI/GenAIChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Close the currently open chat panel." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenAIChatWidget_CloseGenAIChat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenAIChatWidget, nullptr, "CloseGenAIChat", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAIChatWidget_CloseGenAIChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenAIChatWidget_CloseGenAIChat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGenAIChatWidget_CloseGenAIChat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenAIChatWidget_CloseGenAIChat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenAIChatWidget::execCloseGenAIChat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UGenAIChatWidget::CloseGenAIChat();
	P_NATIVE_END;
}
// ********** End Class UGenAIChatWidget Function CloseGenAIChat ***********************************

// ********** Begin Class UGenAIChatWidget Function IsGenAIChatOpen ********************************
struct Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics
{
	struct GenAIChatWidget_eventIsGenAIChatOpen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GenAI|Chat" },
		{ "ModuleRelativePath", "Public/UI/GenAIChatWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GenAIChatWidget_eventIsGenAIChatOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GenAIChatWidget_eventIsGenAIChatOpen_Parms), &Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenAIChatWidget, nullptr, "IsGenAIChatOpen", Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::GenAIChatWidget_eventIsGenAIChatOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::GenAIChatWidget_eventIsGenAIChatOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenAIChatWidget::execIsGenAIChatOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGenAIChatWidget::IsGenAIChatOpen();
	P_NATIVE_END;
}
// ********** End Class UGenAIChatWidget Function IsGenAIChatOpen **********************************

// ********** Begin Class UGenAIChatWidget Function OpenGenAIChat **********************************
struct Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics
{
	struct GenAIChatWidget_eventOpenGenAIChat_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GenAI|Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Open the GenAI chat panel as a full-screen overlay.\n     * Safe to call multiple times \xe2\x80\x94 won't open duplicates.\n     */" },
#endif
		{ "DisplayName", "Open GenAI Chat" },
		{ "ModuleRelativePath", "Public/UI/GenAIChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open the GenAI chat panel as a full-screen overlay.\nSafe to call multiple times \xe2\x80\x94 won't open duplicates." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenAIChatWidget_eventOpenGenAIChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGenAIChatWidget, nullptr, "OpenGenAIChat", Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::GenAIChatWidget_eventOpenGenAIChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::GenAIChatWidget_eventOpenGenAIChat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenAIChatWidget::execOpenGenAIChat)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGenAIChatWidget::OpenGenAIChat(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UGenAIChatWidget Function OpenGenAIChat ************************************

// ********** Begin Class UGenAIChatWidget *********************************************************
void UGenAIChatWidget::StaticRegisterNativesUGenAIChatWidget()
{
	UClass* Class = UGenAIChatWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseGenAIChat", &UGenAIChatWidget::execCloseGenAIChat },
		{ "IsGenAIChatOpen", &UGenAIChatWidget::execIsGenAIChatOpen },
		{ "OpenGenAIChat", &UGenAIChatWidget::execOpenGenAIChat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGenAIChatWidget;
UClass* UGenAIChatWidget::GetPrivateStaticClass()
{
	using TClass = UGenAIChatWidget;
	if (!Z_Registration_Info_UClass_UGenAIChatWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GenAIChatWidget"),
			Z_Registration_Info_UClass_UGenAIChatWidget.InnerSingleton,
			StaticRegisterNativesUGenAIChatWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGenAIChatWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UGenAIChatWidget_NoRegister()
{
	return UGenAIChatWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGenAIChatWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n//  UMG wrapper  (use in Widget Blueprints or via static helpers)\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "DisplayName", "GenAI Chat Widget" },
		{ "IncludePath", "UI/GenAIChatWidget.h" },
		{ "ModuleRelativePath", "Public/UI/GenAIChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n UMG wrapper  (use in Widget Blueprints or via static helpers)\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenAIChatWidget_CloseGenAIChat, "CloseGenAIChat" }, // 30511026
		{ &Z_Construct_UFunction_UGenAIChatWidget_IsGenAIChatOpen, "IsGenAIChatOpen" }, // 3889056373
		{ &Z_Construct_UFunction_UGenAIChatWidget_OpenGenAIChat, "OpenGenAIChat" }, // 3539923535
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenAIChatWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenAIChatWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UU_GenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAIChatWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenAIChatWidget_Statics::ClassParams = {
	&UGenAIChatWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenAIChatWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenAIChatWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenAIChatWidget()
{
	if (!Z_Registration_Info_UClass_UGenAIChatWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenAIChatWidget.OuterSingleton, Z_Construct_UClass_UGenAIChatWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenAIChatWidget.OuterSingleton;
}
UGenAIChatWidget::UGenAIChatWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenAIChatWidget);
UGenAIChatWidget::~UGenAIChatWidget() {}
// ********** End Class UGenAIChatWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h__Script_UU_GenAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenAIChatWidget, UGenAIChatWidget::StaticClass, TEXT("UGenAIChatWidget"), &Z_Registration_Info_UClass_UGenAIChatWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenAIChatWidget), 3006944234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h__Script_UU_GenAI_353720411(TEXT("/Script/UU_GenAI"),
	Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h__Script_UU_GenAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Rebirth_Fight_Plugins_UU_GenAI_Source_UU_GenAI_Public_UI_GenAIChatWidget_h__Script_UU_GenAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
