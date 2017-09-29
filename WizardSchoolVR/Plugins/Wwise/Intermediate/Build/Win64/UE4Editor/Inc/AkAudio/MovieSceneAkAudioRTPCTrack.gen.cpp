// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/MovieSceneAkAudioRTPCTrack.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCTrack() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UMovieSceneAkAudioRTPCTrack::StaticRegisterNativesUMovieSceneAkAudioRTPCTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_NoRegister()
	{
		return UMovieSceneAkAudioRTPCTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneAkTrack();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UMovieSceneAkAudioRTPCTrack::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A80080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UMovieSceneAkAudioRTPCTrack> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MovieSceneAkAudioRTPCTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/MovieSceneAkAudioRTPCTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Handles manipulation of float properties in a movie scene"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAkAudioRTPCTrack, 363166093);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkAudioRTPCTrack(Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack, &UMovieSceneAkAudioRTPCTrack::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkAudioRTPCTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioRTPCTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
