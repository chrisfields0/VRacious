// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkAmbientSound.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAmbientSound() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FAkAmbSoundCheckpointRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAmbSoundCheckpointRecord"), sizeof(FAkAmbSoundCheckpointRecord), Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAmbSoundCheckpointRecord(FAkAmbSoundCheckpointRecord::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAmbSoundCheckpointRecord"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAmbSoundCheckpointRecord")),new UScriptStruct::TCppStructOps<FAkAmbSoundCheckpointRecord>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord;
	UScriptStruct* Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAmbSoundCheckpointRecord"), sizeof(FAkAmbSoundCheckpointRecord), Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkAmbSoundCheckpointRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAkAmbSoundCheckpointRecord>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCurrentlyPlaying, FAkAmbSoundCheckpointRecord);
			UProperty* NewProp_bCurrentlyPlaying = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bCurrentlyPlaying"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCurrentlyPlaying, FAkAmbSoundCheckpointRecord), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bCurrentlyPlaying, FAkAmbSoundCheckpointRecord), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AkAmbientSound.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("FAkAmbSoundCheckpointRecord"));
			MetaData->SetValue(NewProp_bCurrentlyPlaying, TEXT("ModuleRelativePath"), TEXT("Classes/AkAmbientSound.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC() { return 48753042U; }
	void AAkAmbientSound::StaticRegisterNativesAAkAmbientSound()
	{
		UClass* Class = AAkAmbientSound::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "StartAmbientSound", (Native)&AAkAmbientSound::execStartAmbientSound },
			{ "StopAmbientSound", (Native)&AAkAmbientSound::execStopAmbientSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound()
	{
		UObject* Outer = Z_Construct_UClass_AAkAmbientSound();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartAmbientSound"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkAmbientSound"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkAmbientSound.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Start an Ak ambient sound."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound()
	{
		UObject* Outer = Z_Construct_UClass_AAkAmbientSound();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopAmbientSound"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkAmbientSound"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkAmbientSound.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Stop an Ak ambient sound."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister()
	{
		return AAkAmbientSound::StaticClass();
	}
	UClass* Z_Construct_UClass_AAkAmbientSound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = AAkAmbientSound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound());
				OuterClass->LinkChild(Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(AutoPost, AAkAmbientSound);
				UProperty* NewProp_AutoPost = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AutoPost"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(AutoPost, AAkAmbientSound), 0x0010020000000005, CPP_BOOL_PROPERTY_BITMASK(AutoPost, AAkAmbientSound), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(StopWhenOwnerIsDestroyed, AAkAmbientSound);
				UProperty* NewProp_StopWhenOwnerIsDestroyed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StopWhenOwnerIsDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(StopWhenOwnerIsDestroyed, AAkAmbientSound), 0x0010020000000005, CPP_BOOL_PROPERTY_BITMASK(StopWhenOwnerIsDestroyed, AAkAmbientSound), sizeof(bool), true);
				UProperty* NewProp_AkComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AkComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkComponent, AAkAmbientSound), 0x00100000000a001d, Z_Construct_UClass_UAkComponent_NoRegister());
				UProperty* NewProp_AkAudioEvent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AkAudioEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkAudioEvent_DEPRECATED, AAkAmbientSound), 0x0010000020000000, Z_Construct_UClass_UAkAudioEvent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound(), "StartAmbientSound"); // 2114002550
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound(), "StopAmbientSound"); // 916032648
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AAkAmbientSound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("AutoExpandCategories"), TEXT("AkAmbientSound"));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Audio"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkAmbientSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkAmbientSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("AAkAmbientSound"));
				MetaData->SetValue(NewProp_AutoPost, TEXT("Category"), TEXT("AkAmbientSound"));
				MetaData->SetValue(NewProp_AutoPost, TEXT("ModuleRelativePath"), TEXT("Classes/AkAmbientSound.h"));
				MetaData->SetValue(NewProp_AutoPost, TEXT("ToolTip"), TEXT("Automatically post the associated AkAudioEvent on BeginPlay"));
				MetaData->SetValue(NewProp_StopWhenOwnerIsDestroyed, TEXT("Category"), TEXT("AkAmbientSound"));
				MetaData->SetValue(NewProp_StopWhenOwnerIsDestroyed, TEXT("ModuleRelativePath"), TEXT("Classes/AkAmbientSound.h"));
				MetaData->SetValue(NewProp_StopWhenOwnerIsDestroyed, TEXT("ToolTip"), TEXT("Stop playback if the owner is destroyed"));
				MetaData->SetValue(NewProp_AkComponent, TEXT("Category"), TEXT("AkAmbientSound"));
				MetaData->SetValue(NewProp_AkComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_AkComponent, TEXT("ModuleRelativePath"), TEXT("Classes/AkAmbientSound.h"));
				MetaData->SetValue(NewProp_AkComponent, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_AkComponent, TEXT("ToolTip"), TEXT("AkComponent to handle playback"));
				MetaData->SetValue(NewProp_AkAudioEvent, TEXT("ModuleRelativePath"), TEXT("Classes/AkAmbientSound.h"));
				MetaData->SetValue(NewProp_AkAudioEvent, TEXT("ToolTip"), TEXT("AkAudioEvent to play. Deprecated as UE4.7 integration: Use AkComponent->AkAudioEvent instead"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkAmbientSound, 3645193219);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkAmbientSound(Z_Construct_UClass_AAkAmbientSound, &AAkAmbientSound::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkAmbientSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkAmbientSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
