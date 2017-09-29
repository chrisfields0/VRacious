// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef WIZARDSCHOOLVR_InteractableItem_generated_h
#error "InteractableItem.generated.h already included, missing '#pragma once' in InteractableItem.h"
#endif
#define WIZARDSCHOOLVR_InteractableItem_generated_h

#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_RPC_WRAPPERS \
	virtual void LerpPosition_Implementation(FVector const& EndLocation); \
 \
	DECLARE_FUNCTION(execSetIsBeingInteractedWith) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsBeingInteractedWith(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsBeingInteractedWith) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsBeingInteractedWith(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowObjectToBeLevitated) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllowObjectToBeLevitated(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllowObjectToBeLevitated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAllowObjectToBeLevitated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowObjectToBeGrabbed) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllowObjectToBeGrabbed(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllowObjectToBeGrabbed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAllowObjectToBeGrabbed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowRing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ShowRing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLerpPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LerpPosition_Implementation(Z_Param_Out_EndLocation); \
		P_NATIVE_END; \
	}


#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void LerpPosition_Implementation(FVector const& EndLocation); \
 \
	DECLARE_FUNCTION(execSetIsBeingInteractedWith) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsBeingInteractedWith(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsBeingInteractedWith) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsBeingInteractedWith(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowObjectToBeLevitated) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllowObjectToBeLevitated(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllowObjectToBeLevitated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAllowObjectToBeLevitated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowObjectToBeGrabbed) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllowObjectToBeGrabbed(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllowObjectToBeGrabbed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAllowObjectToBeGrabbed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowRing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ShowRing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLerpPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LerpPosition_Implementation(Z_Param_Out_EndLocation); \
		P_NATIVE_END; \
	}


#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_EVENT_PARMS \
	struct InteractableItem_eventLerpPosition_Parms \
	{ \
		FVector EndLocation; \
	};


#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_CALLBACK_WRAPPERS
#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableItem(); \
	friend WIZARDSCHOOLVR_API class UClass* Z_Construct_UClass_AInteractableItem(); \
public: \
	DECLARE_CLASS(AInteractableItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WizardSchoolVR"), NO_API) \
	DECLARE_SERIALIZER(AInteractableItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractableItem(); \
	friend WIZARDSCHOOLVR_API class UClass* Z_Construct_UClass_AInteractableItem(); \
public: \
	DECLARE_CLASS(AInteractableItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WizardSchoolVR"), NO_API) \
	DECLARE_SERIALIZER(AInteractableItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractableItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractableItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableItem(AInteractableItem&&); \
	NO_API AInteractableItem(const AInteractableItem&); \
public:


#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableItem(AInteractableItem&&); \
	NO_API AInteractableItem(const AInteractableItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableItem)


#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bAllowObjectToBeGrabbed() { return STRUCT_OFFSET(AInteractableItem, bAllowObjectToBeGrabbed); } \
	FORCEINLINE static uint32 __PPO__bAllowObjectToBeLevitated() { return STRUCT_OFFSET(AInteractableItem, bAllowObjectToBeLevitated); } \
	FORCEINLINE static uint32 __PPO__bIsBeingInteractedWith() { return STRUCT_OFFSET(AInteractableItem, bIsBeingInteractedWith); }


#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_9_PROLOG \
	WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_EVENT_PARMS


#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_PRIVATE_PROPERTY_OFFSET \
	WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_RPC_WRAPPERS \
	WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_CALLBACK_WRAPPERS \
	WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_INCLASS \
	WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_PRIVATE_PROPERTY_OFFSET \
	WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_CALLBACK_WRAPPERS \
	WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_INCLASS_NO_PURE_DECLS \
	WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WizardSchoolVR_Source_WizardSchoolVR_InteractableItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
