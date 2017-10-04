// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/InterpTrackAkAudioEvent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAkAudioEvent() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioEventTrackKey();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
// End Cross Module References
class UScriptStruct* FAkAudioEventTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAudioEventTrackKey, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAudioEventTrackKey"), sizeof(FAkAudioEventTrackKey), Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAudioEventTrackKey(FAkAudioEventTrackKey::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAudioEventTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAudioEventTrackKey")),new UScriptStruct::TCppStructOps<FAkAudioEventTrackKey>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey;
	UScriptStruct* Z_Construct_UScriptStruct_FAkAudioEventTrackKey()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAudioEventTrackKey"), sizeof(FAkAudioEventTrackKey), Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkAudioEventTrackKey"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAkAudioEventTrackKey>, EStructFlags(0x00000001));
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, FAkAudioEventTrackKey), 0x0010000000020005);
			UProperty* NewProp_AkAudioEvent = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AkAudioEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkAudioEvent, FAkAudioEventTrackKey), 0x0010000000020005, Z_Construct_UClass_UAkAudioEvent_NoRegister());
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, FAkAudioEventTrackKey), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioEvent.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Information for one event in the track."));
			MetaData->SetValue(NewProp_EventName, TEXT("Category"), TEXT("AkAudioEventTrackKey"));
			MetaData->SetValue(NewProp_EventName, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioEvent.h"));
			MetaData->SetValue(NewProp_AkAudioEvent, TEXT("Category"), TEXT("AkAudioEventTrackKey"));
			MetaData->SetValue(NewProp_AkAudioEvent, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioEvent.h"));
			MetaData->SetValue(NewProp_Time, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioEvent.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_CRC() { return 1227874291U; }
	void UInterpTrackAkAudioEvent::StaticRegisterNativesUInterpTrackAkAudioEvent()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent_NoRegister()
	{
		return UInterpTrackAkAudioEvent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackVectorBase();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UInterpTrackAkAudioEvent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20102080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bContinueEventOnMatineeEnd, UInterpTrackAkAudioEvent);
				UProperty* NewProp_bContinueEventOnMatineeEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bContinueEventOnMatineeEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bContinueEventOnMatineeEnd, UInterpTrackAkAudioEvent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bContinueEventOnMatineeEnd, UInterpTrackAkAudioEvent), sizeof(uint8), false);
				UProperty* NewProp_Events = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Events, UInterpTrackAkAudioEvent), 0x0010000000000000);
				UProperty* NewProp_Events_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Events, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAkAudioEventTrackKey());
				static TCppClassTypeInfo<TCppClassTypeTraits<UInterpTrackAkAudioEvent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InterpTrackAkAudioEvent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioEvent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("MinimalAPI"));
				MetaData->SetValue(NewProp_bContinueEventOnMatineeEnd, TEXT("Category"), TEXT("InterpTrackAkAudioEvent"));
				MetaData->SetValue(NewProp_bContinueEventOnMatineeEnd, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioEvent.h"));
				MetaData->SetValue(NewProp_bContinueEventOnMatineeEnd, TEXT("ToolTip"), TEXT("If true, events on this track will not be forced to finish when the matinee sequence finishes."));
				MetaData->SetValue(NewProp_Events, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioEvent.h"));
				MetaData->SetValue(NewProp_Events, TEXT("ToolTip"), TEXT("Array of ak events to play at specific times."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackAkAudioEvent, 4187556618);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAkAudioEvent(Z_Construct_UClass_UInterpTrackAkAudioEvent, &UInterpTrackAkAudioEvent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackAkAudioEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAkAudioEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
