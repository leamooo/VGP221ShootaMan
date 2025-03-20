// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Collectables/PickUp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef VGP221_SHOOTAMAN_PickUp_generated_h
#error "PickUp.generated.h already included, missing '#pragma once' in PickUp.h"
#endif
#define VGP221_SHOOTAMAN_PickUp_generated_h

#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Collectables_PickUp_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Collectables_PickUp_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUp(); \
	friend struct Z_Construct_UClass_APickUp_Statics; \
public: \
	DECLARE_CLASS(APickUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VGP221_ShootaMan"), NO_API) \
	DECLARE_SERIALIZER(APickUp)


#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Collectables_PickUp_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APickUp(APickUp&&); \
	APickUp(const APickUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUp) \
	NO_API virtual ~APickUp();


#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Collectables_PickUp_h_8_PROLOG
#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Collectables_PickUp_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Collectables_PickUp_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Collectables_PickUp_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Collectables_PickUp_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VGP221_SHOOTAMAN_API UClass* StaticClass<class APickUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_Collectables_PickUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
