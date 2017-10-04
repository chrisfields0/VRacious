// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/MovieSceneAkTrack.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkTrack() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneAkTrack::StaticRegisterNativesUMovieSceneAkTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkTrack_NoRegister()
	{
		return UMovieSceneAkTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAkTrack()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneTrack();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UMovieSceneAkTrack::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A80081u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsAMasterTrack, UMovieSceneAkTrack);
				UProperty* NewProp_bIsAMasterTrack = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsAMasterTrack"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsAMasterTrack, UMovieSceneAkTrack), 0x0020080000000000, CPP_BOOL_PROPERTY_BITMASK(bIsAMasterTrack, UMovieSceneAkTrack), sizeof(uint8), false);
				UProperty* NewProp_Sections = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sections"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Sections, UMovieSceneAkTrack), 0x0020088000000008);
				UProperty* NewProp_Sections_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Sections, TEXT("Sections"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080008, Z_Construct_UClass_UMovieSceneSection_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UMovieSceneAkTrack> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MovieSceneAkTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/MovieSceneAkTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Handles manipulation of an Ak track in a movie scene"));
				MetaData->SetValue(NewProp_bIsAMasterTrack, TEXT("ModuleRelativePath"), TEXT("Classes/MovieSceneAkTrack.h"));
				MetaData->SetValue(NewProp_Sections, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Sections, TEXT("ModuleRelativePath"), TEXT("Classes/MovieSceneAkTrack.h"));
				MetaData->SetValue(NewProp_Sections, TEXT("ToolTip"), TEXT("All the sections in this track"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAkTrack, 3852504160);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkTrack(Z_Construct_UClass_UMovieSceneAkTrack, &UMovieSceneAkTrack::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
