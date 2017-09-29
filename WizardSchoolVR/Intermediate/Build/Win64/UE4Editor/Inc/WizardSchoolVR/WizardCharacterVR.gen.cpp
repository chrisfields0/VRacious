// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WizardCharacterVR.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWizardCharacterVR() {}
// Cross Module References
	WIZARDSCHOOLVR_API UClass* Z_Construct_UClass_AWizardCharacterVR_NoRegister();
	WIZARDSCHOOLVR_API UClass* Z_Construct_UClass_AWizardCharacterVR();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_WizardSchoolVR();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AWizardCharacterVR::StaticRegisterNativesAWizardCharacterVR()
	{
	}
	UClass* Z_Construct_UClass_AWizardCharacterVR_NoRegister()
	{
		return AWizardCharacterVR::StaticClass();
	}
	UClass* Z_Construct_UClass_AWizardCharacterVR()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_WizardSchoolVR();
			OuterClass = AWizardCharacterVR::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_R_HandMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("R_HandMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(R_HandMesh, AWizardCharacterVR), 0x00200800000a000d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_L_HandMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("L_HandMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(L_HandMesh, AWizardCharacterVR), 0x00200800000a000d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_R_MotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("R_MotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(R_MotionController, AWizardCharacterVR), 0x00200800000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_L_MotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("L_MotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(L_MotionController, AWizardCharacterVR), 0x00200800000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, AWizardCharacterVR), 0x00200800000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_VROrigin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VROrigin"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VROrigin, AWizardCharacterVR), 0x00200800000a001d, Z_Construct_UClass_USceneComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AWizardCharacterVR> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WizardCharacterVR.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WizardCharacterVR.h"));
				MetaData->SetValue(NewProp_R_HandMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_R_HandMesh, TEXT("Category"), TEXT("WizardCharacterVR"));
				MetaData->SetValue(NewProp_R_HandMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_R_HandMesh, TEXT("ModuleRelativePath"), TEXT("WizardCharacterVR.h"));
				MetaData->SetValue(NewProp_L_HandMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_L_HandMesh, TEXT("Category"), TEXT("WizardCharacterVR"));
				MetaData->SetValue(NewProp_L_HandMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_L_HandMesh, TEXT("ModuleRelativePath"), TEXT("WizardCharacterVR.h"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("Category"), TEXT("WizardCharacterVR"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("ModuleRelativePath"), TEXT("WizardCharacterVR.h"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("ToolTip"), TEXT("Motion controller (right hand)"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("Category"), TEXT("WizardCharacterVR"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("ModuleRelativePath"), TEXT("WizardCharacterVR.h"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("ToolTip"), TEXT("Motion controller (left hand)"));
				MetaData->SetValue(NewProp_Camera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("WizardCharacterVR"));
				MetaData->SetValue(NewProp_Camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("WizardCharacterVR.h"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("Category"), TEXT("WizardCharacterVR"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("ModuleRelativePath"), TEXT("WizardCharacterVR.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWizardCharacterVR, 2925078569);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWizardCharacterVR(Z_Construct_UClass_AWizardCharacterVR, &AWizardCharacterVR::StaticClass, TEXT("/Script/WizardSchoolVR"), TEXT("AWizardCharacterVR"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWizardCharacterVR);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
