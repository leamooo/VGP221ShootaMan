// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VGP221_SHOOTAMAN_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define VGP221_SHOOTAMAN_PlayerCharacter_generated_h

#define FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Public_PlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFire);


#define FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Public_PlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VGP221_ShootaMan"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Public_PlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerCharacter(APlayerCharacter&&); \
	APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Public_PlayerCharacter_h_13_PROLOG
#define FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Public_PlayerCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Public_PlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Public_PlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Public_PlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VGP221_SHOOTAMAN_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Public_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
