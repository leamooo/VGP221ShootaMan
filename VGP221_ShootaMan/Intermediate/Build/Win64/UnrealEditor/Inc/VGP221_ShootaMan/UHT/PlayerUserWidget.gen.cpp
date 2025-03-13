// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_ShootaMan/GUI/PlayerUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerUserWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_VGP221_ShootaMan();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UButtonWidget_NoRegister();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UPlayerUserWidget();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UPlayerUserWidget_NoRegister();
// End Cross Module References

// Begin Class UPlayerUserWidget Function SetHealthBar
struct Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics
{
	struct PlayerUserWidget_eventSetHealthBar_Parms
	{
		float percentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GUI/PlayerUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_percentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerUserWidget_eventSetHealthBar_Parms, percentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::NewProp_percentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerUserWidget, nullptr, "SetHealthBar", nullptr, nullptr, Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::PlayerUserWidget_eventSetHealthBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::PlayerUserWidget_eventSetHealthBar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerUserWidget::execSetHealthBar)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_percentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealthBar(Z_Param_percentage);
	P_NATIVE_END;
}
// End Class UPlayerUserWidget Function SetHealthBar

// Begin Class UPlayerUserWidget
void UPlayerUserWidget::StaticRegisterNativesUPlayerUserWidget()
{
	UClass* Class = UPlayerUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHealthBar", &UPlayerUserWidget::execSetHealthBar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerUserWidget);
UClass* Z_Construct_UClass_UPlayerUserWidget_NoRegister()
{
	return UPlayerUserWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GUI/PlayerUserWidget.h" },
		{ "ModuleRelativePath", "GUI/PlayerUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GUI/PlayerUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GUI/PlayerUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonWidgetPrefab_MetaData[] = {
		{ "Category", "PlayerUserWidget" },
		{ "ModuleRelativePath", "GUI/PlayerUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonContainer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ButtonWidgetPrefab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerUserWidget_SetHealthBar, "SetHealthBar" }, // 3971030472
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUserWidget_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerUserWidget, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUserWidget_Statics::NewProp_ButtonContainer = { "ButtonContainer", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerUserWidget, ButtonContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonContainer_MetaData), NewProp_ButtonContainer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerUserWidget_Statics::NewProp_ButtonWidgetPrefab = { "ButtonWidgetPrefab", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerUserWidget, ButtonWidgetPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_UButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonWidgetPrefab_MetaData), NewProp_ButtonWidgetPrefab_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUserWidget_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUserWidget_Statics::NewProp_ButtonContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUserWidget_Statics::NewProp_ButtonWidgetPrefab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_ShootaMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerUserWidget_Statics::ClassParams = {
	&UPlayerUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerUserWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerUserWidget.OuterSingleton, Z_Construct_UClass_UPlayerUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerUserWidget.OuterSingleton;
}
template<> VGP221_SHOOTAMAN_API UClass* StaticClass<UPlayerUserWidget>()
{
	return UPlayerUserWidget::StaticClass();
}
UPlayerUserWidget::UPlayerUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerUserWidget);
UPlayerUserWidget::~UPlayerUserWidget() {}
// End Class UPlayerUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_PlayerUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerUserWidget, UPlayerUserWidget::StaticClass, TEXT("UPlayerUserWidget"), &Z_Registration_Info_UClass_UPlayerUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerUserWidget), 715357698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_PlayerUserWidget_h_3238721675(TEXT("/Script/VGP221_ShootaMan"),
	Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_PlayerUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_PlayerUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
