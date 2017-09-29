// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WIZARDSCHOOLVR_WizardPawn_generated_h
#error "WizardPawn.generated.h already included, missing '#pragma once' in WizardPawn.h"
#endif
#define WIZARDSCHOOLVR_WizardPawn_generated_h

#define WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_RPC_WRAPPERS
#define WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWizardPawn(); \
	friend WIZARDSCHOOLVR_API class UClass* Z_Construct_UClass_AWizardPawn(); \
public: \
	DECLARE_CLASS(AWizardPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WizardSchoolVR"), NO_API) \
	DECLARE_SERIALIZER(AWizardPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWizardPawn(); \
	friend WIZARDSCHOOLVR_API class UClass* Z_Construct_UClass_AWizardPawn(); \
public: \
	DECLARE_CLASS(AWizardPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WizardSchoolVR"), NO_API) \
	DECLARE_SERIALIZER(AWizardPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWizardPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWizardPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardPawn(AWizardPawn&&); \
	NO_API AWizardPawn(const AWizardPawn&); \
public:


#define WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardPawn(AWizardPawn&&); \
	NO_API AWizardPawn(const AWizardPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWizardPawn)


#define WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VROrigin() { return STRUCT_OFFSET(AWizardPawn, VROrigin); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AWizardPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AWizardPawn, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_HandMesh() { return STRUCT_OFFSET(AWizardPawn, L_HandMesh); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AWizardPawn, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__R_HandMesh() { return STRUCT_OFFSET(AWizardPawn, R_HandMesh); }


#define WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_11_PROLOG
#define WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_RPC_WRAPPERS \
	WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_INCLASS \
	WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_INCLASS_NO_PURE_DECLS \
	WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WizardSchoolVR_Source_WizardSchoolVR_WizardPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
