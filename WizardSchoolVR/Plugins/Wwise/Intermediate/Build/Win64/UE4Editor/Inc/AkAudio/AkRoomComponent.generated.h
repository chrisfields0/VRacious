// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkRoomComponent_generated_h
#error "AkRoomComponent.generated.h already included, missing '#pragma once' in AkRoomComponent.h"
#endif
#define AKAUDIO_AkRoomComponent_generated_h

#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveSpatialAudioRoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveSpatialAudioRoom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSpatialAudioRoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddSpatialAudioRoom(); \
		P_NATIVE_END; \
	}


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveSpatialAudioRoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveSpatialAudioRoom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSpatialAudioRoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddSpatialAudioRoom(); \
		P_NATIVE_END; \
	}


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkRoomComponent(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkRoomComponent(); \
public: \
	DECLARE_CLASS(UAkRoomComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkRoomComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAkRoomComponent(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkRoomComponent(); \
public: \
	DECLARE_CLASS(UAkRoomComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkRoomComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkRoomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkRoomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkRoomComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkRoomComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkRoomComponent(UAkRoomComponent&&); \
	NO_API UAkRoomComponent(const UAkRoomComponent&); \
public:


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkRoomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkRoomComponent(UAkRoomComponent&&); \
	NO_API UAkRoomComponent(const UAkRoomComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkRoomComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkRoomComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkRoomComponent)


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_PRIVATE_PROPERTY_OFFSET
#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_8_PROLOG
#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_RPC_WRAPPERS \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_INCLASS \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_INCLASS_NO_PURE_DECLS \
	WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkRoomComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WizardSchoolVR_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
