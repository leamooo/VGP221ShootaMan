// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_ShootaMan/GUI/ButtonWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VGP221_ShootaMan();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UButtonWidget();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UButtonWidget_NoRegister();
// End Cross Module References

// Begin Class UButtonWidget Function OnButtonClick
struct Z_Construct_UFunction_UButtonWidget_OnButtonClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GUI/ButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButtonWidget_OnButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButtonWidget, nullptr, "OnButtonClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonWidget_OnButtonClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UButtonWidget_OnButtonClick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UButtonWidget_OnButtonClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButtonWidget_OnButtonClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UButtonWidget::execOnButtonClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonClick();
	P_NATIVE_END;
}
// End Class UButtonWidget Function OnButtonClick

// Begin Class UButtonWidget Function SetText
struct Z_Construct_UFunction_UButtonWidget_SetText_Statics
{
	struct ButtonWidget_eventSetText_Parms
	{
		int32 value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GUI/ButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UButtonWidget_SetText_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ButtonWidget_eventSetText_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButtonWidget_SetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButtonWidget_SetText_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonWidget_SetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButtonWidget_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButtonWidget, nullptr, "SetText", nullptr, nullptr, Z_Construct_UFunction_UButtonWidget_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonWidget_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UButtonWidget_SetText_Statics::ButtonWidget_eventSetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonWidget_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UButtonWidget_SetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UButtonWidget_SetText_Statics::ButtonWidget_eventSetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UButtonWidget_SetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButtonWidget_SetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UButtonWidget::execSetText)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetText(Z_Param_value);
	P_NATIVE_END;
}
// End Class UButtonWidget Function SetText

// Begin Class UButtonWidget
void UButtonWidget::StaticRegisterNativesUButtonWidget()
{
	UClass* Class = UButtonWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnButtonClick", &UButtonWidget::execOnButtonClick },
		{ "SetText", &UButtonWidget::execSetText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UButtonWidget);
UClass* Z_Construct_UClass_UButtonWidget_NoRegister()
{
	return UButtonWidget::StaticClass();
}
struct Z_Construct_UClass_UButtonWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GUI/ButtonWidget.h" },
		{ "ModuleRelativePath", "GUI/ButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GUI/ButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GUI/ButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UButtonWidget_OnButtonClick, "OnButtonClick" }, // 4005766374
		{ &Z_Construct_UFunction_UButtonWidget_SetText, "SetText" }, // 1827800119
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButtonWidget, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UButtonWidget_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButtonWidget, ButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonText_MetaData), NewProp_ButtonText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWidget_Statics::NewProp_ButtonText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UButtonWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_ShootaMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UButtonWidget_Statics::ClassParams = {
	&UButtonWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UButtonWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UButtonWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UButtonWidget()
{
	if (!Z_Registration_Info_UClass_UButtonWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UButtonWidget.OuterSingleton, Z_Construct_UClass_UButtonWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UButtonWidget.OuterSingleton;
}
template<> VGP221_SHOOTAMAN_API UClass* StaticClass<UButtonWidget>()
{
	return UButtonWidget::StaticClass();
}
UButtonWidget::UButtonWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonWidget);
UButtonWidget::~UButtonWidget() {}
// End Class UButtonWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UButtonWidget, UButtonWidget::StaticClass, TEXT("UButtonWidget"), &Z_Registration_Info_UClass_UButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UButtonWidget), 1376785696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_3845882330(TEXT("/Script/VGP221_ShootaMan"),
	Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
