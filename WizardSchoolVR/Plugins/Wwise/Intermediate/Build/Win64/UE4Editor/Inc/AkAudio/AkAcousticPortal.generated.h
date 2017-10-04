// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class AkAcousticPortalState : uint8;
#ifdef AKAUDIO_AkAcousticPortal_generated_h
#error "AkAcousticPortal.generated.h already included, missing '#pragma once' in AkAcousticPortal.h"
#endif
#define AKAUDIO_AkAcousticPortal_generated_h

#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AkAcousticPortalState*)Z_Param__Result=this->GetCurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosePortal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosePortal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPortal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenPortal(); \
		P_NATIVE_END; \
	}


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AkAcousticPortalState*)Z_Param__Result=this->GetCurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosePortal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosePortal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPortal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenPortal(); \
		P_NATIVE_END; \
	}


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAkAcousticPortal(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_AAkAcousticPortal(); \
public: \
	DECLARE_CLASS(AAkAcousticPortal, AVolume, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAcousticPortal) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAAkAcousticPortal(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_AAkAcousticPortal(); \
public: \
	DECLARE_CLASS(AAkAcousticPortal, AVolume, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAcousticPortal) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAcousticPortal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAcousticPortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAcousticPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAcousticPortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAcousticPortal(AAkAcousticPortal&&); \
	NO_API AAkAcousticPortal(const AAkAcousticPortal&); \
public:


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAcousticPortal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAcousticPortal(AAkAcousticPortal&&); \
	NO_API AAkAcousticPortal(const AAkAcousticPortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAcousticPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAcousticPortal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAcousticPortal)


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_PRIVATE_PROPERTY_OFFSET
#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_18_PROLOG
#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_PRIVATE_PROPERTY_OFFSET \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_RPC_WRAPPERS \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_INCLASS \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_PRIVATE_PROPERTY_OFFSET \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_INCLASS_NO_PURE_DECLS \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkAcousticPortal."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h


#define FOREACH_ENUM_AKACOUSTICPORTALSTATE(op) \
	op(AkAcousticPortalState::Closed) \
	op(AkAcousticPortalState::Open) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
