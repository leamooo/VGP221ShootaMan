// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_ShootaMan/Enemies/EnemyAICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAICharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_VGP221_ShootaMan();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_AEnemyAICharacter();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_AEnemyAICharacter_NoRegister();
// End Cross Module References

// Begin Class AEnemyAICharacter
void AEnemyAICharacter::StaticRegisterNativesAEnemyAICharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyAICharacter);
UClass* Z_Construct_UClass_AEnemyAICharacter_NoRegister()
{
	return AEnemyAICharacter::StaticClass();
}
struct Z_Construct_UClass_AEnemyAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/EnemyAICharacter.h" },
		{ "ModuleRelativePath", "Enemies/EnemyAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Enemies/EnemyAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Enemies/EnemyAICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyAICharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAICharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyAICharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAICharacter, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyAICharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAICharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAICharacter_Statics::NewProp_CurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAICharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_ShootaMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAICharacter_Statics::ClassParams = {
	&AEnemyAICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemyAICharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAICharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyAICharacter()
{
	if (!Z_Registration_Info_UClass_AEnemyAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyAICharacter.OuterSingleton, Z_Construct_UClass_AEnemyAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyAICharacter.OuterSingleton;
}
template<> VGP221_SHOOTAMAN_API UClass* StaticClass<AEnemyAICharacter>()
{
	return AEnemyAICharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAICharacter);
AEnemyAICharacter::~AEnemyAICharacter() {}
// End Class AEnemyAICharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAICharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyAICharacter, AEnemyAICharacter::StaticClass, TEXT("AEnemyAICharacter"), &Z_Registration_Info_UClass_AEnemyAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyAICharacter), 87102799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAICharacter_h_1429283000(TEXT("/Script/VGP221_ShootaMan"),
	Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
