// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/AudiokineticToolsPrivatePCH.h"
#include "Classes/InterpTrackAkAudioRTPCHelper.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAkAudioRTPCHelper() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPCHelper_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPCHelper();
	MATINEE_API UClass* Z_Construct_UClass_UInterpTrackHelper();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UInterpTrackAkAudioRTPCHelper::StaticRegisterNativesUInterpTrackAkAudioRTPCHelper()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPCHelper_NoRegister()
	{
		return UInterpTrackAkAudioRTPCHelper::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPCHelper()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackHelper();
			Z_Construct_UPackage__Script_AudiokineticTools();
			OuterClass = UInterpTrackAkAudioRTPCHelper::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UInterpTrackAkAudioRTPCHelper> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InterpTrackAkAudioRTPCHelper.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioRTPCHelper.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackAkAudioRTPCHelper, 1508883248);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAkAudioRTPCHelper(Z_Construct_UClass_UInterpTrackAkAudioRTPCHelper, &UInterpTrackAkAudioRTPCHelper::StaticClass, TEXT("/Script/AudiokineticTools"), TEXT("UInterpTrackAkAudioRTPCHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAkAudioRTPCHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
