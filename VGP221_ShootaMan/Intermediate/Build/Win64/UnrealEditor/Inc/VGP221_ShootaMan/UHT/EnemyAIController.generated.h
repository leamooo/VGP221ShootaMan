// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/EnemyAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UObject;
#ifdef VGP221_SHOOTAMAN_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define VGP221_SHOOTAMAN_EnemyAIController_generated_h

#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCanSeePlayer); \
	DECLARE_FUNCTION(execOnSeePawn);


#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VGP221_ShootaMan"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyAIController(AEnemyAIController&&); \
	AEnemyAIController(const AEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAIController) \
	NO_API virtual ~AEnemyAIController();


#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_17_PROLOG
#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VGP221_SHOOTAMAN_API UClass* StaticClass<class AEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Enemies_EnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
