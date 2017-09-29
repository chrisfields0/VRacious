// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/MovieSceneAkAudioEventSection.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventSection() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	void UMovieSceneAkAudioEventSection::StaticRegisterNativesUMovieSceneAkAudioEventSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister()
	{
		return UMovieSceneAkAudioEventSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneSection();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UMovieSceneAkAudioEventSection::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20280080u;


				UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, UMovieSceneAkAudioEventSection), 0x0040040000000001);
				UProperty* NewProp_Event = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Event"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Event, UMovieSceneAkAudioEventSection), 0x0040000000000001, Z_Construct_UClass_UAkAudioEvent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UMovieSceneAkAudioEventSection> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MovieSceneAkAudioEventSection.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/MovieSceneAkAudioEventSection.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A single floating point section"));
				MetaData->SetValue(NewProp_EventName, TEXT("Category"), TEXT("AkAudioEvent"));
				MetaData->SetValue(NewProp_EventName, TEXT("ModuleRelativePath"), TEXT("Classes/MovieSceneAkAudioEventSection.h"));
				MetaData->SetValue(NewProp_EventName, TEXT("ToolTip"), TEXT("The name of the AkAudioEvent represented by this section"));
				MetaData->SetValue(NewProp_Event, TEXT("Category"), TEXT("AkAudioEvent"));
				MetaData->SetValue(NewProp_Event, TEXT("ModuleRelativePath"), TEXT("Classes/MovieSceneAkAudioEventSection.h"));
				MetaData->SetValue(NewProp_Event, TEXT("ToolTip"), TEXT("The AkAudioEvent represented by this section"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAkAudioEventSection, 3234825587);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkAudioEventSection(Z_Construct_UClass_UMovieSceneAkAudioEventSection, &UMovieSceneAkAudioEventSection::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkAudioEventSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioEventSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
