// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/AudiokineticToolsPrivatePCH.h"
#include "Classes/InterpTrackAkAudioEventHelper.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAkAudioEventHelper() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UInterpTrackAkAudioEventHelper_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UInterpTrackAkAudioEventHelper();
	MATINEE_API UClass* Z_Construct_UClass_UInterpTrackHelper();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UInterpTrackAkAudioEventHelper::StaticRegisterNativesUInterpTrackAkAudioEventHelper()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioEventHelper_NoRegister()
	{
		return UInterpTrackAkAudioEventHelper::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioEventHelper()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackHelper();
			Z_Construct_UPackage__Script_AudiokineticTools();
			OuterClass = UInterpTrackAkAudioEventHelper::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UInterpTrackAkAudioEventHelper> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InterpTrackAkAudioEventHelper.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioEventHelper.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackAkAudioEventHelper, 1031465434);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAkAudioEventHelper(Z_Construct_UClass_UInterpTrackAkAudioEventHelper, &UInterpTrackAkAudioEventHelper::StaticClass, TEXT("/Script/AudiokineticTools"), TEXT("UInterpTrackAkAudioEventHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAkAudioEventHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
