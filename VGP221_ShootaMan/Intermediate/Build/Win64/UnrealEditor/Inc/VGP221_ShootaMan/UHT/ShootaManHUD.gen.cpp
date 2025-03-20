// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_ShootaMan/HUD/ShootaManHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootaManHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VGP221_ShootaMan();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_AShootaManHUD();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_AShootaManHUD_NoRegister();
// End Cross Module References

// Begin Class AShootaManHUD
void AShootaManHUD::StaticRegisterNativesAShootaManHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootaManHUD);
UClass* Z_Construct_UClass_AShootaManHUD_NoRegister()
{
	return AShootaManHUD::StaticClass();
}
struct Z_Construct_UClass_AShootaManHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/ShootaManHUD.h" },
		{ "ModuleRelativePath", "HUD/ShootaManHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "ShootaManHUD" },
		{ "ModuleRelativePath", "HUD/ShootaManHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootaManHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootaManHUD_Statics::NewProp_CrosshairTexture = { "CrosshairTexture", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootaManHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairTexture_MetaData), NewProp_CrosshairTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootaManHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootaManHUD_Statics::NewProp_CrosshairTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootaManHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShootaManHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_ShootaMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootaManHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootaManHUD_Statics::ClassParams = {
	&AShootaManHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShootaManHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShootaManHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootaManHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootaManHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShootaManHUD()
{
	if (!Z_Registration_Info_UClass_AShootaManHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootaManHUD.OuterSingleton, Z_Construct_UClass_AShootaManHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShootaManHUD.OuterSingleton;
}
template<> VGP221_SHOOTAMAN_API UClass* StaticClass<AShootaManHUD>()
{
	return AShootaManHUD::StaticClass();
}
AShootaManHUD::AShootaManHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShootaManHUD);
AShootaManHUD::~AShootaManHUD() {}
// End Class AShootaManHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_HUD_ShootaManHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShootaManHUD, AShootaManHUD::StaticClass, TEXT("AShootaManHUD"), &Z_Registration_Info_UClass_AShootaManHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootaManHUD), 3423933054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_HUD_ShootaManHUD_h_1492176508(TEXT("/Script/VGP221_ShootaMan"),
	Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_HUD_ShootaManHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_HUD_ShootaManHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
