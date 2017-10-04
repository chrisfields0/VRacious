// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkAudioEvent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioEvent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
// End Cross Module References
	void UAkAudioEvent::StaticRegisterNativesUAkAudioEvent()
	{
	}
	UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister()
	{
		return UAkAudioEvent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkAudioEvent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkAudioEvent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_MaximumDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaximumDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaximumDuration, UAkAudioEvent), 0x0010000000000014);
				UProperty* NewProp_MinimumDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinimumDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinimumDuration, UAkAudioEvent), 0x0010000000000014);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsInfinite, UAkAudioEvent);
				UProperty* NewProp_IsInfinite = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsInfinite"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsInfinite, UAkAudioEvent), 0x0010000000000014, CPP_BOOL_PROPERTY_BITMASK(IsInfinite, UAkAudioEvent), sizeof(bool), true);
				UProperty* NewProp_MaxAttenuationRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxAttenuationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxAttenuationRadius, UAkAudioEvent), 0x0010000000000014);
				UProperty* NewProp_RequiredBank = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RequiredBank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RequiredBank, UAkAudioEvent), 0x0010000000000005, Z_Construct_UClass_UAkAudioBank_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkAudioEvent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkAudioEvent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkAudioEvent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UAkAudioEvent"));
				MetaData->SetValue(NewProp_MaximumDuration, TEXT("Category"), TEXT("AkAudioEvent"));
				MetaData->SetValue(NewProp_MaximumDuration, TEXT("ModuleRelativePath"), TEXT("Classes/AkAudioEvent.h"));
				MetaData->SetValue(NewProp_MaximumDuration, TEXT("ToolTip"), TEXT("Maximum duration"));
				MetaData->SetValue(NewProp_MinimumDuration, TEXT("Category"), TEXT("AkAudioEvent"));
				MetaData->SetValue(NewProp_MinimumDuration, TEXT("ModuleRelativePath"), TEXT("Classes/AkAudioEvent.h"));
				MetaData->SetValue(NewProp_MinimumDuration, TEXT("ToolTip"), TEXT("Minimum duration"));
				MetaData->SetValue(NewProp_IsInfinite, TEXT("Category"), TEXT("AkAudioEvent"));
				MetaData->SetValue(NewProp_IsInfinite, TEXT("ModuleRelativePath"), TEXT("Classes/AkAudioEvent.h"));
				MetaData->SetValue(NewProp_IsInfinite, TEXT("ToolTip"), TEXT("Whether this event is infinite (looping) or finite (duration parameters are valid)"));
				MetaData->SetValue(NewProp_MaxAttenuationRadius, TEXT("Category"), TEXT("AkAudioEvent"));
				MetaData->SetValue(NewProp_MaxAttenuationRadius, TEXT("ModuleRelativePath"), TEXT("Classes/AkAudioEvent.h"));
				MetaData->SetValue(NewProp_MaxAttenuationRadius, TEXT("ToolTip"), TEXT("Maximum attenuation radius for this event"));
				MetaData->SetValue(NewProp_RequiredBank, TEXT("Category"), TEXT("Bank"));
				MetaData->SetValue(NewProp_RequiredBank, TEXT("ModuleRelativePath"), TEXT("Classes/AkAudioEvent.h"));
				MetaData->SetValue(NewProp_RequiredBank, TEXT("ToolTip"), TEXT("Bank to which this event should be added."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAudioEvent, 381543354);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioEvent(Z_Construct_UClass_UAkAudioEvent, &UAkAudioEvent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
