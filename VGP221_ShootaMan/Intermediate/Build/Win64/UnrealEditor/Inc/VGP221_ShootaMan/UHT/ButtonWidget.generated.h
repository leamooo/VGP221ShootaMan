// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GUI/ButtonWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VGP221_SHOOTAMAN_ButtonWidget_generated_h
#error "ButtonWidget.generated.h already included, missing '#pragma once' in ButtonWidget.h"
#endif
#define VGP221_SHOOTAMAN_ButtonWidget_generated_h

#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnButtonClick); \
	DECLARE_FUNCTION(execSetText);


#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUButtonWidget(); \
	friend struct Z_Construct_UClass_UButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UButtonWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VGP221_ShootaMan"), NO_API) \
	DECLARE_SERIALIZER(UButtonWidget)


#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UButtonWidget(UButtonWidget&&); \
	UButtonWidget(const UButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButtonWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButtonWidget) \
	NO_API virtual ~UButtonWidget();


#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_14_PROLOG
#define FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VGP221_SHOOTAMAN_API UClass* StaticClass<class UButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxbr_Documents_VGP221ShootaMan_VGP221_ShootaMan_Source_VGP221_ShootaMan_GUI_ButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
