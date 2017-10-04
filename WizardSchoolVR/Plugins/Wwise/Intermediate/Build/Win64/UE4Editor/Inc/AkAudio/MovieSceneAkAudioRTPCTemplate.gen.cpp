// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Private/MovieSceneAkAudioRTPCTemplate.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCTemplate() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
class UScriptStruct* FMovieSceneAkAudioRTPCTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneAkAudioRTPCTemplate"), sizeof(FMovieSceneAkAudioRTPCTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate(FMovieSceneAkAudioRTPCTemplate::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneAkAudioRTPCTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCTemplate
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAkAudioRTPCTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneAkAudioRTPCTemplate>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAkAudioRTPCTemplate"), sizeof(FMovieSceneAkAudioRTPCTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MovieSceneAkAudioRTPCTemplate"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FMovieSceneEvalTemplate(), new UScriptStruct::TCppStructOps<FMovieSceneAkAudioRTPCTemplate>, EStructFlags(0x00000205));
			UProperty* NewProp_Section = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Section"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Section, FMovieSceneAkAudioRTPCTemplate), 0x0010000000080008, Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/MovieSceneAkAudioRTPCTemplate.h"));
			MetaData->SetValue(NewProp_Section, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Section, TEXT("ModuleRelativePath"), TEXT("Private/MovieSceneAkAudioRTPCTemplate.h"));
			MetaData->SetValue(NewProp_Section, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_CRC() { return 2055151286U; }
class UScriptStruct* FMovieSceneAkAudioRTPCSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneAkAudioRTPCSectionData"), sizeof(FMovieSceneAkAudioRTPCSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData(FMovieSceneAkAudioRTPCSectionData::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneAkAudioRTPCSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCSectionData
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAkAudioRTPCSectionData")),new UScriptStruct::TCppStructOps<FMovieSceneAkAudioRTPCSectionData>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCSectionData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAkAudioRTPCSectionData"), sizeof(FMovieSceneAkAudioRTPCSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MovieSceneAkAudioRTPCSectionData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMovieSceneAkAudioRTPCSectionData>, EStructFlags(0x00000001));
			UProperty* NewProp_RTPCCurve = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RTPCCurve"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RTPCCurve, FMovieSceneAkAudioRTPCSectionData), 0x0010000000000000, Z_Construct_UScriptStruct_FRichCurve());
			UProperty* NewProp_RTPCName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RTPCName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(RTPCName, FMovieSceneAkAudioRTPCSectionData), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/MovieSceneAkAudioRTPCTemplate.h"));
			MetaData->SetValue(NewProp_RTPCCurve, TEXT("ModuleRelativePath"), TEXT("Private/MovieSceneAkAudioRTPCTemplate.h"));
			MetaData->SetValue(NewProp_RTPCName, TEXT("ModuleRelativePath"), TEXT("Private/MovieSceneAkAudioRTPCTemplate.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData_CRC() { return 562798750U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
