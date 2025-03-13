// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_ShootaMan/Enemies/BTT_Attack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_Attack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
UPackage* Z_Construct_UPackage__Script_VGP221_ShootaMan();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UBTT_Attack();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UBTT_Attack_NoRegister();
// End Cross Module References

// Begin Class UBTT_Attack
void UBTT_Attack::StaticRegisterNativesUBTT_Attack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_Attack);
UClass* Z_Construct_UClass_UBTT_Attack_NoRegister()
{
	return UBTT_Attack::StaticClass();
}
struct Z_Construct_UClass_UBTT_Attack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemies/BTT_Attack.h" },
		{ "ModuleRelativePath", "Enemies/BTT_Attack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_Attack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTT_Attack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_ShootaMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Attack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_Attack_Statics::ClassParams = {
	&UBTT_Attack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Attack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_Attack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_Attack()
{
	if (!Z_Registration_Info_UClass_UBTT_Attack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_Attack.OuterSingleton, Z_Construct_UClass_UBTT_Attack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_Attack.OuterSingleton;
}
template<> VGP221_SHOOTAMAN_API UClass* StaticClass<UBTT_Attack>()
{
	return UBTT_Attack::StaticClass();
}
UBTT_Attack::UBTT_Attack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_Attack);
UBTT_Attack::~UBTT_Attack() {}
// End Class UBTT_Attack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_BTT_Attack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_Attack, UBTT_Attack::StaticClass, TEXT("UBTT_Attack"), &Z_Registration_Info_UClass_UBTT_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_Attack), 2177398204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_BTT_Attack_h_26945794(TEXT("/Script/VGP221_ShootaMan"),
	Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_BTT_Attack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_BTT_Attack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
