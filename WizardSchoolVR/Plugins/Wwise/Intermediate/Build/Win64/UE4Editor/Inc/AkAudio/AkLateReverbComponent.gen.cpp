// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkLateReverbComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLateReverbComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
// End Cross Module References
	void UAkLateReverbComponent::StaticRegisterNativesUAkLateReverbComponent()
	{
	}
	UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister()
	{
		return UAkLateReverbComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkLateReverbComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkLateReverbComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_Priority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Priority"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Priority, UAkLateReverbComponent), 0x0010000000000005);
				UProperty* NewProp_FadeRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeRate, UAkLateReverbComponent), 0x0010000000000005);
				UProperty* NewProp_SendLevel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SendLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SendLevel, UAkLateReverbComponent), 0x0010000000000005);
				UProperty* NewProp_AuxBusName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AuxBusName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AuxBusName, UAkLateReverbComponent), 0x0010040000000005);
				UProperty* NewProp_AuxBus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AuxBus"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AuxBus, UAkLateReverbComponent), 0x0010000000000005, Z_Construct_UClass_UAkAuxBus_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, UAkLateReverbComponent);
				UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, UAkLateReverbComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bEnable, UAkLateReverbComponent), sizeof(uint8), false);
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkLateReverbComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Audiokinetic"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkLateReverbComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkLateReverbComponent.h"));
				MetaData->SetValue(NewProp_Priority, TEXT("Category"), TEXT("LateReverb"));
				MetaData->SetValue(NewProp_Priority, TEXT("ModuleRelativePath"), TEXT("Classes/AkLateReverbComponent.h"));
				MetaData->SetValue(NewProp_Priority, TEXT("ToolTip"), TEXT("The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones\nwith the highest priority are chosen (the number of simultaneous AkReverbVolumes is configurable in the Unreal\nEditor Project Settings under Plugins > Wwise). If two or more overlapping AkReverbVolumes have the same\npriority, the chosen AkReverbVolume is unpredictable."));
				MetaData->SetValue(NewProp_FadeRate, TEXT("Category"), TEXT("LateReverb"));
				MetaData->SetValue(NewProp_FadeRate, TEXT("ModuleRelativePath"), TEXT("Classes/AkLateReverbComponent.h"));
				MetaData->SetValue(NewProp_FadeRate, TEXT("ToolTip"), TEXT("Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds)"));
				MetaData->SetValue(NewProp_SendLevel, TEXT("Category"), TEXT("LateReverb"));
				MetaData->SetValue(NewProp_SendLevel, TEXT("ModuleRelativePath"), TEXT("Classes/AkLateReverbComponent.h"));
				MetaData->SetValue(NewProp_SendLevel, TEXT("ToolTip"), TEXT("Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume"));
				MetaData->SetValue(NewProp_AuxBusName, TEXT("Category"), TEXT("LateReverb"));
				MetaData->SetValue(NewProp_AuxBusName, TEXT("ModuleRelativePath"), TEXT("Classes/AkLateReverbComponent.h"));
				MetaData->SetValue(NewProp_AuxBusName, TEXT("ToolTip"), TEXT("Wwise Auxiliary Bus associated to this AkReverbVolume"));
				MetaData->SetValue(NewProp_AuxBus, TEXT("Category"), TEXT("LateReverb"));
				MetaData->SetValue(NewProp_AuxBus, TEXT("ModuleRelativePath"), TEXT("Classes/AkLateReverbComponent.h"));
				MetaData->SetValue(NewProp_bEnable, TEXT("Category"), TEXT("Toggle"));
				MetaData->SetValue(NewProp_bEnable, TEXT("DisplayName"), TEXT("Enable Late Reverb"));
				MetaData->SetValue(NewProp_bEnable, TEXT("ModuleRelativePath"), TEXT("Classes/AkLateReverbComponent.h"));
				MetaData->SetValue(NewProp_bEnable, TEXT("ToolTip"), TEXT("Whether this volume is currently enabled and able to affect sounds"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkLateReverbComponent, 836732631);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkLateReverbComponent(Z_Construct_UClass_UAkLateReverbComponent, &UAkLateReverbComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkLateReverbComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLateReverbComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
