// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Private/MovieSceneAkAudioEventTemplate.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventTemplate() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneAkAudioEventTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneAkAudioEventTemplate"), sizeof(FMovieSceneAkAudioEventTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAkAudioEventTemplate(FMovieSceneAkAudioEventTemplate::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneAkAudioEventTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioEventTemplate
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioEventTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAkAudioEventTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneAkAudioEventTemplate>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioEventTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAkAudioEventTemplate"), sizeof(FMovieSceneAkAudioEventTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MovieSceneAkAudioEventTemplate"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FMovieSceneEvalTemplate(), new UScriptStruct::TCppStructOps<FMovieSceneAkAudioEventTemplate>, EStructFlags(0x00000205));
			UProperty* NewProp_Section = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Section"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Section, FMovieSceneAkAudioEventTemplate), 0x0010000000080008, Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/MovieSceneAkAudioEventTemplate.h"));
			MetaData->SetValue(NewProp_Section, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Section, TEXT("ModuleRelativePath"), TEXT("Private/MovieSceneAkAudioEventTemplate.h"));
			MetaData->SetValue(NewProp_Section, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_CRC() { return 2283002567U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
