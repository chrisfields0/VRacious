// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkSpotReflector.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpotReflector() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
// End Cross Module References
	void AAkSpotReflector::StaticRegisterNativesAAkSpotReflector()
	{
	}
	UClass* Z_Construct_UClass_AAkSpotReflector_NoRegister()
	{
		return AAkSpotReflector::StaticClass();
	}
	UClass* Z_Construct_UClass_AAkSpotReflector()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = AAkSpotReflector::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_Level = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Level"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Level, AAkSpotReflector), 0x0010000000000005);
				UProperty* NewProp_DistanceScalingFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DistanceScalingFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DistanceScalingFactor, AAkSpotReflector), 0x0010000000000005);
				UProperty* NewProp_AcousticTexture = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AcousticTexture"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AcousticTexture, AAkSpotReflector), 0x0010000000000005, Z_Construct_UClass_UAkAcousticTexture_NoRegister());
				UProperty* NewProp_AuxBusName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AuxBusName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AuxBusName, AAkSpotReflector), 0x0010040000000005);
				UProperty* NewProp_AuxBus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AuxBus"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AuxBus, AAkSpotReflector), 0x0010000000000005, Z_Construct_UClass_UAkAuxBus_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AAkSpotReflector> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkSpotReflector.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkSpotReflector.h"));
				MetaData->SetValue(NewProp_Level, TEXT("Category"), TEXT("AkSpotReflector"));
				MetaData->SetValue(NewProp_Level, TEXT("ClampMax"), TEXT("4.0"));
				MetaData->SetValue(NewProp_Level, TEXT("ClampMin"), TEXT("0.0"));
				MetaData->SetValue(NewProp_Level, TEXT("ModuleRelativePath"), TEXT("Classes/AkSpotReflector.h"));
				MetaData->SetValue(NewProp_DistanceScalingFactor, TEXT("Category"), TEXT("AkSpotReflector"));
				MetaData->SetValue(NewProp_DistanceScalingFactor, TEXT("ClampMin"), TEXT("0.0"));
				MetaData->SetValue(NewProp_DistanceScalingFactor, TEXT("ModuleRelativePath"), TEXT("Classes/AkSpotReflector.h"));
				MetaData->SetValue(NewProp_AcousticTexture, TEXT("Category"), TEXT("AkSpotReflector"));
				MetaData->SetValue(NewProp_AcousticTexture, TEXT("ModuleRelativePath"), TEXT("Classes/AkSpotReflector.h"));
				MetaData->SetValue(NewProp_AuxBusName, TEXT("Category"), TEXT("AkSpotReflector"));
				MetaData->SetValue(NewProp_AuxBusName, TEXT("ModuleRelativePath"), TEXT("Classes/AkSpotReflector.h"));
				MetaData->SetValue(NewProp_AuxBus, TEXT("Category"), TEXT("AkSpotReflector"));
				MetaData->SetValue(NewProp_AuxBus, TEXT("ModuleRelativePath"), TEXT("Classes/AkSpotReflector.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkSpotReflector, 2649638347);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkSpotReflector(Z_Construct_UClass_AAkSpotReflector, &AAkSpotReflector::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkSpotReflector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkSpotReflector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
