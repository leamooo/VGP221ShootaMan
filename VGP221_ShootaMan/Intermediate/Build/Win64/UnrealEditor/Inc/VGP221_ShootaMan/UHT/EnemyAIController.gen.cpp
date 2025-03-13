// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_ShootaMan/Enemies/EnemyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_VGP221_ShootaMan();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_AEnemyAIController();
VGP221_SHOOTAMAN_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();
// End Cross Module References

// Begin Class AEnemyAIController Function OnSeePawn
struct Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics
{
	struct EnemyAIController_eventOnSeePawn_Parms
	{
		APawn* PlayerPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/EnemyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyAIController_eventOnSeePawn_Parms, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::NewProp_PlayerPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyAIController, nullptr, "OnSeePawn", nullptr, nullptr, Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::EnemyAIController_eventOnSeePawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::EnemyAIController_eventOnSeePawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyAIController_OnSeePawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyAIController_OnSeePawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyAIController::execOnSeePawn)
{
	P_GET_OBJECT(APawn,Z_Param_PlayerPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeePawn(Z_Param_PlayerPawn);
	P_NATIVE_END;
}
// End Class AEnemyAIController Function OnSeePawn

// Begin Class AEnemyAIController Function SetCanSeePlayer
struct Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics
{
	struct EnemyAIController_eventSetCanSeePlayer_Parms
	{
		bool SeePlayer;
		UObject* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/EnemyAIController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_SeePlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SeePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::NewProp_SeePlayer_SetBit(void* Obj)
{
	((EnemyAIController_eventSetCanSeePlayer_Parms*)Obj)->SeePlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::NewProp_SeePlayer = { "SeePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnemyAIController_eventSetCanSeePlayer_Parms), &Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::NewProp_SeePlayer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyAIController_eventSetCanSeePlayer_Parms, Player), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::NewProp_SeePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyAIController, nullptr, "SetCanSeePlayer", nullptr, nullptr, Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::EnemyAIController_eventSetCanSeePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::EnemyAIController_eventSetCanSeePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyAIController::execSetCanSeePlayer)
{
	P_GET_UBOOL(Z_Param_SeePlayer);
	P_GET_OBJECT(UObject,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanSeePlayer(Z_Param_SeePlayer,Z_Param_Player);
	P_NATIVE_END;
}
// End Class AEnemyAIController Function SetCanSeePlayer

// Begin Class AEnemyAIController
void AEnemyAIController::StaticRegisterNativesAEnemyAIController()
{
	UClass* Class = AEnemyAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSeePawn", &AEnemyAIController::execOnSeePawn },
		{ "SetCanSeePlayer", &AEnemyAIController::execSetCanSeePlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyAIController);
UClass* Z_Construct_UClass_AEnemyAIController_NoRegister()
{
	return AEnemyAIController::StaticClass();
}
struct Z_Construct_UClass_AEnemyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemies/EnemyAIController.h" },
		{ "ModuleRelativePath", "Enemies/EnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingBehaviorTree_MetaData[] = {
		{ "Category", "EnemyAIController" },
		{ "ModuleRelativePath", "Enemies/EnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensing_MetaData[] = {
		{ "Category", "EnemyAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/EnemyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartingBehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyAIController_OnSeePawn, "OnSeePawn" }, // 234481754
		{ &Z_Construct_UFunction_AEnemyAIController_SetCanSeePlayer, "SetCanSeePlayer" }, // 3974175280
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_StartingBehaviorTree = { "StartingBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAIController, StartingBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingBehaviorTree_MetaData), NewProp_StartingBehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_PawnSensing = { "PawnSensing", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAIController, PawnSensing), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensing_MetaData), NewProp_PawnSensing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_StartingBehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_PawnSensing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_ShootaMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAIController_Statics::ClassParams = {
	&AEnemyAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyAIController()
{
	if (!Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton, Z_Construct_UClass_AEnemyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton;
}
template<> VGP221_SHOOTAMAN_API UClass* StaticClass<AEnemyAIController>()
{
	return AEnemyAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAIController);
AEnemyAIController::~AEnemyAIController() {}
// End Class AEnemyAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyAIController, AEnemyAIController::StaticClass, TEXT("AEnemyAIController"), &Z_Registration_Info_UClass_AEnemyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyAIController), 3782273012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_3551104914(TEXT("/Script/VGP221_ShootaMan"),
	Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
