// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_ShootaMan/Player/MainMenuPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_VGP221_ShootaMan();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_AMainMenuPlayerController();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_AMainMenuPlayerController_NoRegister();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
// End Cross Module References

// Begin Class AMainMenuPlayerController
void AMainMenuPlayerController::StaticRegisterNativesAMainMenuPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuPlayerController);
UClass* Z_Construct_UClass_AMainMenuPlayerController_NoRegister()
{
	return AMainMenuPlayerController::StaticClass();
}
struct Z_Construct_UClass_AMainMenuPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/MainMenuPlayerController.h" },
		{ "ModuleRelativePath", "Player/MainMenuPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pointer to the actual widget instance\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/MainMenuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the actual widget instance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuPlayerController_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuPlayerController, MainMenuWidget), Z_Construct_UClass_UMainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidget_MetaData), NewProp_MainMenuWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainMenuPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuPlayerController_Statics::NewProp_MainMenuWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainMenuPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_ShootaMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuPlayerController_Statics::ClassParams = {
	&AMainMenuPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMainMenuPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainMenuPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainMenuPlayerController()
{
	if (!Z_Registration_Info_UClass_AMainMenuPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuPlayerController.OuterSingleton, Z_Construct_UClass_AMainMenuPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainMenuPlayerController.OuterSingleton;
}
template<> VGP221_SHOOTAMAN_API UClass* StaticClass<AMainMenuPlayerController>()
{
	return AMainMenuPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuPlayerController);
AMainMenuPlayerController::~AMainMenuPlayerController() {}
// End Class AMainMenuPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_MainMenuPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuPlayerController, AMainMenuPlayerController::StaticClass, TEXT("AMainMenuPlayerController"), &Z_Registration_Info_UClass_AMainMenuPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuPlayerController), 539870641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_MainMenuPlayerController_h_775033824(TEXT("/Script/VGP221_ShootaMan"),
	Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_MainMenuPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_MainMenuPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
