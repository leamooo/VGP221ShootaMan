// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_ShootaMan/Player/MainMenuGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_VGP221_ShootaMan();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_AMainMenuGameMode();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
// End Cross Module References

// Begin Class AMainMenuGameMode Function ChangeMainMenuWidget
struct Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics
{
	struct MainMenuGameMode_eventChangeMainMenuWidget_Parms
	{
		TSubclassOf<UMainMenuWidget> NewWidgetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GUI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to change the widget at runtime\n" },
#endif
		{ "ModuleRelativePath", "Player/MainMenuGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to change the widget at runtime" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuGameMode_eventChangeMainMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainMenuWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::NewProp_NewWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuGameMode, nullptr, "ChangeMainMenuWidget", nullptr, nullptr, Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::MainMenuGameMode_eventChangeMainMenuWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::MainMenuGameMode_eventChangeMainMenuWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainMenuGameMode::execChangeMainMenuWidget)
{
	P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeMainMenuWidget(Z_Param_NewWidgetClass);
	P_NATIVE_END;
}
// End Class AMainMenuGameMode Function ChangeMainMenuWidget

// Begin Class AMainMenuGameMode
void AMainMenuGameMode::StaticRegisterNativesAMainMenuGameMode()
{
	UClass* Class = AMainMenuGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeMainMenuWidget", &AMainMenuGameMode::execChangeMainMenuWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuGameMode);
UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister()
{
	return AMainMenuGameMode::StaticClass();
}
struct Z_Construct_UClass_AMainMenuGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/MainMenuGameMode.h" },
		{ "ModuleRelativePath", "Player/MainMenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidgetPrefab_MetaData[] = {
		{ "Category", "GUI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Field to assign the Main Menu Widget class in the editor\n" },
#endif
		{ "ModuleRelativePath", "Player/MainMenuGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Field to assign the Main Menu Widget class in the editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current instance of the Main Menu Widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/MainMenuGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current instance of the Main Menu Widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_UserWidgetPrefab;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainMenuGameMode_ChangeMainMenuWidget, "ChangeMainMenuWidget" }, // 3098372225
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_UserWidgetPrefab = { "UserWidgetPrefab", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuGameMode, UserWidgetPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidgetPrefab_MetaData), NewProp_UserWidgetPrefab_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuGameMode, CurrentWidget), Z_Construct_UClass_UMainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainMenuGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_UserWidgetPrefab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_CurrentWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainMenuGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_ShootaMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams = {
	&AMainMenuGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainMenuGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainMenuGameMode()
{
	if (!Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton, Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton;
}
template<> VGP221_SHOOTAMAN_API UClass* StaticClass<AMainMenuGameMode>()
{
	return AMainMenuGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuGameMode);
AMainMenuGameMode::~AMainMenuGameMode() {}
// End Class AMainMenuGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_MainMenuGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuGameMode, AMainMenuGameMode::StaticClass, TEXT("AMainMenuGameMode"), &Z_Registration_Info_UClass_AMainMenuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuGameMode), 4091004429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_MainMenuGameMode_h_1652198270(TEXT("/Script/VGP221_ShootaMan"),
	Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_MainMenuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_MainMenuGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
