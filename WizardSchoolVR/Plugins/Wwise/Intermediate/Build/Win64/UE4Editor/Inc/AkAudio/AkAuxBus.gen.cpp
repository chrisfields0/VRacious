// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkAuxBus.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAuxBus() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
// End Cross Module References
	void UAkAuxBus::StaticRegisterNativesUAkAuxBus()
	{
	}
	UClass* Z_Construct_UClass_UAkAuxBus_NoRegister()
	{
		return UAkAuxBus::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkAuxBus()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkAuxBus::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_RequiredBank = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RequiredBank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RequiredBank, UAkAuxBus), 0x0010000000000005, Z_Construct_UClass_UAkAudioBank_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkAuxBus> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Advanced Attachment Volume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkAuxBus.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkAuxBus.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("AAkAuxBus"));
				MetaData->SetValue(NewProp_RequiredBank, TEXT("Category"), TEXT("Bank"));
				MetaData->SetValue(NewProp_RequiredBank, TEXT("ModuleRelativePath"), TEXT("Classes/AkAuxBus.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAuxBus, 503182839);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAuxBus(Z_Construct_UClass_UAkAuxBus, &UAkAuxBus::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAuxBus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAuxBus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
