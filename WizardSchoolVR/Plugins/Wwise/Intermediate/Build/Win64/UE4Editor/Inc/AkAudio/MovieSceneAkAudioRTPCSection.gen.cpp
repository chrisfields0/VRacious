// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/MovieSceneAkAudioRTPCSection.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCSection() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
	void UMovieSceneAkAudioRTPCSection::StaticRegisterNativesUMovieSceneAkAudioRTPCSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister()
	{
		return UMovieSceneAkAudioRTPCSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneSection();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UMovieSceneAkAudioRTPCSection::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20280080u;


				UProperty* NewProp_FloatCurve = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FloatCurve"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FloatCurve, UMovieSceneAkAudioRTPCSection), 0x0020080000000000, Z_Construct_UScriptStruct_FRichCurve());
				UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, UMovieSceneAkAudioRTPCSection), 0x0020080000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<UMovieSceneAkAudioRTPCSection> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MovieSceneAkAudioRTPCSection.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/MovieSceneAkAudioRTPCSection.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A single floating point section"));
				MetaData->SetValue(NewProp_FloatCurve, TEXT("ModuleRelativePath"), TEXT("Classes/MovieSceneAkAudioRTPCSection.h"));
				MetaData->SetValue(NewProp_FloatCurve, TEXT("ToolTip"), TEXT("Curve data"));
				MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("AkAudioRTPC"));
				MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Classes/MovieSceneAkAudioRTPCSection.h"));
				MetaData->SetValue(NewProp_Name, TEXT("NoResetToDefault"), TEXT(""));
				MetaData->SetValue(NewProp_Name, TEXT("ToolTip"), TEXT("Name of the RTPC to modify."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAkAudioRTPCSection, 271969441);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkAudioRTPCSection(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection, &UMovieSceneAkAudioRTPCSection::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkAudioRTPCSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioRTPCSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
