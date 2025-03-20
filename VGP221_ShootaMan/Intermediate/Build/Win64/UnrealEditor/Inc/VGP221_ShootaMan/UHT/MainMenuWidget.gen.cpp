// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_ShootaMan/HUD/MainMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VGP221_ShootaMan();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UMainMenuWidget();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
// End Cross Module References

// Begin Class UMainMenuWidget Function OnOptionsClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnOptionsClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Menu" },
		{ "ModuleRelativePath", "HUD/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnOptionsClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnOptionsClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnOptionsClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnOptionsClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnOptionsClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnOptionsClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnOptionsClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOptionsClicked();
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnOptionsClicked

// Begin Class UMainMenuWidget Function OnPlayClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Menu" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Setup buttons' actions in the widget\n" },
#endif
		{ "ModuleRelativePath", "HUD/MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setup buttons' actions in the widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnPlayClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnPlayClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayClicked();
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnPlayClicked

// Begin Class UMainMenuWidget Function OnQuitClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Menu" },
		{ "ModuleRelativePath", "HUD/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnQuitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnQuitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnQuitClicked();
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnQuitClicked

// Begin Class UMainMenuWidget
void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
{
	UClass* Class = UMainMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOptionsClicked", &UMainMenuWidget::execOnOptionsClicked },
		{ "OnPlayClicked", &UMainMenuWidget::execOnPlayClicked },
		{ "OnQuitClicked", &UMainMenuWidget::execOnQuitClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuWidget);
UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
{
	return UMainMenuWidget::StaticClass();
}
struct Z_Construct_UClass_UMainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "HUD/MainMenuWidget.h" },
		{ "ModuleRelativePath", "HUD/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Button variables that you can bind to in C++ code\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Button variables that you can bind to in C++ code" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_OnOptionsClicked, "OnOptionsClicked" }, // 752589569
		{ &Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked, "OnPlayClicked" }, // 345043888
		{ &Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked, "OnQuitClicked" }, // 530010683
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_PlayButton = { "PlayButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, PlayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayButton_MetaData), NewProp_PlayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_OptionsButton = { "OptionsButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, OptionsButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsButton_MetaData), NewProp_OptionsButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitButton_MetaData), NewProp_QuitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_PlayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_OptionsButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_ShootaMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
	&UMainMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenuWidget()
{
	if (!Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton;
}
template<> VGP221_SHOOTAMAN_API UClass* StaticClass<UMainMenuWidget>()
{
	return UMainMenuWidget::StaticClass();
}
UMainMenuWidget::UMainMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidget);
UMainMenuWidget::~UMainMenuWidget() {}
// End Class UMainMenuWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_HUD_MainMenuWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuWidget, UMainMenuWidget::StaticClass, TEXT("UMainMenuWidget"), &Z_Registration_Info_UClass_UMainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuWidget), 2011623807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_HUD_MainMenuWidget_h_1988641033(TEXT("/Script/VGP221_ShootaMan"),
	Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_HUD_MainMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_HUD_MainMenuWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
