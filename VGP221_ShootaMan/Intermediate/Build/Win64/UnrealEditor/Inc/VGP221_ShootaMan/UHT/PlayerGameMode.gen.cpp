// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_ShootaMan/Player/PlayerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_VGP221_ShootaMan();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_APlayerGameMode();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_APlayerGameMode_NoRegister();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UPlayerUserWidget_NoRegister();
// End Cross Module References

// Begin Class APlayerGameMode Function ChangeMenuWidget
struct Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics
{
	struct PlayerGameMode_eventChangeMenuWidget_Parms
	{
		TSubclassOf<UPlayerUserWidget> NewWidgetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GUI" },
		{ "ModuleRelativePath", "Player/PlayerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerGameMode_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::NewProp_NewWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerGameMode, nullptr, "ChangeMenuWidget", nullptr, nullptr, Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::PlayerGameMode_eventChangeMenuWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::PlayerGameMode_eventChangeMenuWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerGameMode::execChangeMenuWidget)
{
	P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass);
	P_NATIVE_END;
}
// End Class APlayerGameMode Function ChangeMenuWidget

// Begin Class APlayerGameMode
void APlayerGameMode::StaticRegisterNativesAPlayerGameMode()
{
	UClass* Class = APlayerGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeMenuWidget", &APlayerGameMode::execChangeMenuWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerGameMode);
UClass* Z_Construct_UClass_APlayerGameMode_NoRegister()
{
	return APlayerGameMode::StaticClass();
}
struct Z_Construct_UClass_APlayerGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/PlayerGameMode.h" },
		{ "ModuleRelativePath", "Player/PlayerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidgetPrefab_MetaData[] = {
		{ "Category", "GUI" },
		{ "ModuleRelativePath", "Player/PlayerGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_UserWidgetPrefab;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerGameMode_ChangeMenuWidget, "ChangeMenuWidget" }, // 1258157160
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerGameMode_Statics::NewProp_UserWidgetPrefab = { "UserWidgetPrefab", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerGameMode, UserWidgetPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidgetPrefab_MetaData), NewProp_UserWidgetPrefab_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerGameMode, CurrentWidget), Z_Construct_UClass_UPlayerUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerGameMode_Statics::NewProp_UserWidgetPrefab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerGameMode_Statics::NewProp_CurrentWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_ShootaMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerGameMode_Statics::ClassParams = {
	&APlayerGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerGameMode()
{
	if (!Z_Registration_Info_UClass_APlayerGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerGameMode.OuterSingleton, Z_Construct_UClass_APlayerGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerGameMode.OuterSingleton;
}
template<> VGP221_SHOOTAMAN_API UClass* StaticClass<APlayerGameMode>()
{
	return APlayerGameMode::StaticClass();
}
APlayerGameMode::APlayerGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerGameMode);
APlayerGameMode::~APlayerGameMode() {}
// End Class APlayerGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerGameMode, APlayerGameMode::StaticClass, TEXT("APlayerGameMode"), &Z_Registration_Info_UClass_APlayerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerGameMode), 3697989642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_3113351415(TEXT("/Script/VGP221_ShootaMan"),
	Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
