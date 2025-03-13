// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayerUserWidget;
#ifdef VGP221_SHOOTAMAN_PlayerGameMode_generated_h
#error "PlayerGameMode.generated.h already included, missing '#pragma once' in PlayerGameMode.h"
#endif
#define VGP221_SHOOTAMAN_PlayerGameMode_generated_h

#define FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeMenuWidget);


#define FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerGameMode(); \
	friend struct Z_Construct_UClass_APlayerGameMode_Statics; \
public: \
	DECLARE_CLASS(APlayerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VGP221_ShootaMan"), NO_API) \
	DECLARE_SERIALIZER(APlayerGameMode)


#define FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerGameMode(APlayerGameMode&&); \
	APlayerGameMode(const APlayerGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerGameMode) \
	NO_API virtual ~APlayerGameMode();


#define FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_14_PROLOG
#define FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VGP221_SHOOTAMAN_API UClass* StaticClass<class APlayerGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxbr_Desktop_VGP221_ShootaMan_Source_VGP221_ShootaMan_Player_PlayerGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
