// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkSpatialAudioVolume.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpatialAudioVolume() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
// End Cross Module References
	void AAkSpatialAudioVolume::StaticRegisterNativesAAkSpatialAudioVolume()
	{
	}
	UClass* Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister()
	{
		return AAkSpatialAudioVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_AAkSpatialAudioVolume()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AVolume();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = AAkSpatialAudioVolume::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_Room = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Room"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Room, AAkSpatialAudioVolume), 0x00100000000a001d, Z_Construct_UClass_UAkRoomComponent_NoRegister());
				UProperty* NewProp_LateReverb = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LateReverb"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LateReverb, AAkSpatialAudioVolume), 0x00100000000a001d, Z_Construct_UClass_UAkLateReverbComponent_NoRegister());
				UProperty* NewProp_SurfaceReflectorSet = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SurfaceReflectorSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SurfaceReflectorSet, AAkSpatialAudioVolume), 0x00100000000a001d, Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AAkSpatialAudioVolume> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Audiokinetic"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Advanced Attachment Volume Brush Physics Object Display Rendering Physics Input Blueprint"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkSpatialAudioVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkSpatialAudioVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("AAkSpatialAudioVolume"));
				MetaData->SetValue(NewProp_Room, TEXT("Category"), TEXT("Room"));
				MetaData->SetValue(NewProp_Room, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Room, TEXT("ModuleRelativePath"), TEXT("Classes/AkSpatialAudioVolume.h"));
				MetaData->SetValue(NewProp_Room, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_LateReverb, TEXT("Category"), TEXT("LateReverb"));
				MetaData->SetValue(NewProp_LateReverb, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LateReverb, TEXT("ModuleRelativePath"), TEXT("Classes/AkSpatialAudioVolume.h"));
				MetaData->SetValue(NewProp_LateReverb, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_SurfaceReflectorSet, TEXT("Category"), TEXT("SurfaceReflectorSet"));
				MetaData->SetValue(NewProp_SurfaceReflectorSet, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SurfaceReflectorSet, TEXT("ModuleRelativePath"), TEXT("Classes/AkSpatialAudioVolume.h"));
				MetaData->SetValue(NewProp_SurfaceReflectorSet, TEXT("ShowOnlyInnerProperties"), TEXT(""));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkSpatialAudioVolume, 1889812756);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkSpatialAudioVolume(Z_Construct_UClass_AAkSpatialAudioVolume, &AAkSpatialAudioVolume::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkSpatialAudioVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkSpatialAudioVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
