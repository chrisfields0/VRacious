// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkSettings.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void UAkSettings::StaticRegisterNativesUAkSettings()
	{
	}
	UClass* Z_Construct_UClass_UAkSettings_NoRegister()
	{
		return UAkSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100086u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(UseAlternateObstructionOcclusionFeature, UAkSettings);
				UProperty* NewProp_UseAlternateObstructionOcclusionFeature = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UseAlternateObstructionOcclusionFeature"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UseAlternateObstructionOcclusionFeature, UAkSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(UseAlternateObstructionOcclusionFeature, UAkSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(SuppressWwiseProjectPathWarnings, UAkSettings);
				UProperty* NewProp_SuppressWwiseProjectPathWarnings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SuppressWwiseProjectPathWarnings"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(SuppressWwiseProjectPathWarnings, UAkSettings), 0x0010000000004000, CPP_BOOL_PROPERTY_BITMASK(SuppressWwiseProjectPathWarnings, UAkSettings), sizeof(bool), true);
				UProperty* NewProp_WwiseMacInstallationPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WwiseMacInstallationPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WwiseMacInstallationPath, UAkSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FFilePath());
				UProperty* NewProp_WwiseWindowsInstallationPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WwiseWindowsInstallationPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WwiseWindowsInstallationPath, UAkSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FDirectoryPath());
				UProperty* NewProp_WwiseProjectPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WwiseProjectPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WwiseProjectPath, UAkSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FFilePath());
				UProperty* NewProp_MaxSimultaneousReverbVolumes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxSimultaneousReverbVolumes"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(MaxSimultaneousReverbVolumes, UAkSettings), 0x0010000000004001);
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkSettings.h"));
				MetaData->SetValue(NewProp_UseAlternateObstructionOcclusionFeature, TEXT("Category"), TEXT("Experimental Features"));
				MetaData->SetValue(NewProp_UseAlternateObstructionOcclusionFeature, TEXT("ModuleRelativePath"), TEXT("Classes/AkSettings.h"));
				MetaData->SetValue(NewProp_SuppressWwiseProjectPathWarnings, TEXT("ModuleRelativePath"), TEXT("Classes/AkSettings.h"));
				MetaData->SetValue(NewProp_WwiseMacInstallationPath, TEXT("AbsolutePath"), TEXT(""));
				MetaData->SetValue(NewProp_WwiseMacInstallationPath, TEXT("Category"), TEXT("Installation"));
				MetaData->SetValue(NewProp_WwiseMacInstallationPath, TEXT("FilePathFilter"), TEXT("app"));
				MetaData->SetValue(NewProp_WwiseMacInstallationPath, TEXT("ModuleRelativePath"), TEXT("Classes/AkSettings.h"));
				MetaData->SetValue(NewProp_WwiseMacInstallationPath, TEXT("ToolTip"), TEXT("Wwise Installation Path (Mac Authoring tool)"));
				MetaData->SetValue(NewProp_WwiseWindowsInstallationPath, TEXT("Category"), TEXT("Installation"));
				MetaData->SetValue(NewProp_WwiseWindowsInstallationPath, TEXT("ModuleRelativePath"), TEXT("Classes/AkSettings.h"));
				MetaData->SetValue(NewProp_WwiseWindowsInstallationPath, TEXT("ToolTip"), TEXT("Wwise Installation Path (Windows Authoring tool)"));
				MetaData->SetValue(NewProp_WwiseProjectPath, TEXT("AbsolutePath"), TEXT(""));
				MetaData->SetValue(NewProp_WwiseProjectPath, TEXT("Category"), TEXT("Installation"));
				MetaData->SetValue(NewProp_WwiseProjectPath, TEXT("FilePathFilter"), TEXT("wproj"));
				MetaData->SetValue(NewProp_WwiseProjectPath, TEXT("ModuleRelativePath"), TEXT("Classes/AkSettings.h"));
				MetaData->SetValue(NewProp_WwiseProjectPath, TEXT("ToolTip"), TEXT("Wwise Project Path"));
				MetaData->SetValue(NewProp_MaxSimultaneousReverbVolumes, TEXT("Category"), TEXT("Ak Reverb Volume"));
				MetaData->SetValue(NewProp_MaxSimultaneousReverbVolumes, TEXT("ModuleRelativePath"), TEXT("Classes/AkSettings.h"));
				MetaData->SetValue(NewProp_MaxSimultaneousReverbVolumes, TEXT("ToolTip"), TEXT("The number of AkReverbVolumes that will be simultaneously applied to a sound source"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSettings, 2630459658);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSettings(Z_Construct_UClass_UAkSettings, &UAkSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
