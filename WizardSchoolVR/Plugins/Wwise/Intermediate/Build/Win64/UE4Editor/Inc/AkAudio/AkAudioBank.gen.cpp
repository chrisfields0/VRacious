// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkAudioBank.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioBank() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAudioBank::StaticRegisterNativesUAkAudioBank()
	{
	}
	UClass* Z_Construct_UClass_UAkAudioBank_NoRegister()
	{
		return UAkAudioBank::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkAudioBank()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkAudioBank::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(AutoLoad, UAkAudioBank);
				UProperty* NewProp_AutoLoad = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AutoLoad"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(AutoLoad, UAkAudioBank), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(AutoLoad, UAkAudioBank), sizeof(bool), true);
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkAudioBank> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkAudioBank.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkAudioBank.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UAkAudioBank"));
				MetaData->SetValue(NewProp_AutoLoad, TEXT("Category"), TEXT("Behaviour"));
				MetaData->SetValue(NewProp_AutoLoad, TEXT("ModuleRelativePath"), TEXT("Classes/AkAudioBank.h"));
				MetaData->SetValue(NewProp_AutoLoad, TEXT("ToolTip"), TEXT("Auto-load bank when its package is accessed for the first time"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAudioBank, 1648177631);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioBank(Z_Construct_UClass_UAkAudioBank, &UAkAudioBank::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioBank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioBank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
