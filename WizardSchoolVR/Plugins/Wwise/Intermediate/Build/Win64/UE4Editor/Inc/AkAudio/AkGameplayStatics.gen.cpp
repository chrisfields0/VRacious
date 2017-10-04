// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkGameplayStatics.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGameplayStatics() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_ClearBanks();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBank();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBanks();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostTrigger();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetState();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSwitch();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopActor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAll();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_TriggerRecording();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBank();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
static UEnum* PanningRule_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_PanningRule, Z_Construct_UPackage__Script_AkAudio(), TEXT("PanningRule"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PanningRule(PanningRule_StaticEnum, TEXT("/Script/AkAudio"), TEXT("PanningRule"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AkAudio_PanningRule()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UEnum_AkAudio_PanningRule_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PanningRule"), 0, Get_Z_Construct_UEnum_AkAudio_PanningRule_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PanningRule"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("PanningRule::PanningRule_Speakers"), 0);
			EnumNames.Emplace(TEXT("PanningRule::PanningRule_Headphones"), 1);
			EnumNames.Emplace(TEXT("PanningRule::PanningRule_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("PanningRule");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnEnum, TEXT("PanningRule_Headphones.ToolTip"), TEXT("< Left and right positioned 60 degrees apart (by default - see AK::SoundEngine::GetSpeakerAngles())."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AkAudio_PanningRule_CRC() { return 504569763U; }
static UEnum* AkChannelConfiguration_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkChannelConfiguration, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkChannelConfiguration"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkChannelConfiguration(AkChannelConfiguration_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkChannelConfiguration"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkChannelConfiguration"), 0, Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkChannelConfiguration"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Parent"), 0);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_1_0"), 1);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_2_0"), 2);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_3_0"), 3);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_4_0"), 4);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_5_1"), 5);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_7_1"), 6);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_5_1_2"), 7);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_7_1_2"), 8);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_7_1_4"), 9);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Auro_9_1"), 10);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Auro_10_1"), 11);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Auro_11_1"), 12);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Auro_13_1"), 13);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Ambisonics_1st_order"), 14);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Ambisonics_2nd_order"), 15);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_Ambisonics_3rd_order"), 16);
			EnumNames.Emplace(TEXT("AkChannelConfiguration::Ak_MAX"), 17);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("AkChannelConfiguration");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_CRC() { return 1590405768U; }
	void UAkGameplayStatics::StaticRegisterNativesUAkGameplayStatics()
	{
		UClass* Class = UAkGameplayStatics::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddOutputCaptureMarker", (Native)&UAkGameplayStatics::execAddOutputCaptureMarker },
			{ "ClearBanks", (Native)&UAkGameplayStatics::execClearBanks },
			{ "GetAkComponent", (Native)&UAkGameplayStatics::execGetAkComponent },
			{ "GetOcclusionScalingFactor", (Native)&UAkGameplayStatics::execGetOcclusionScalingFactor },
			{ "LoadBank", (Native)&UAkGameplayStatics::execLoadBank },
			{ "LoadBankByName", (Native)&UAkGameplayStatics::execLoadBankByName },
			{ "LoadBanks", (Native)&UAkGameplayStatics::execLoadBanks },
			{ "LoadInitBank", (Native)&UAkGameplayStatics::execLoadInitBank },
			{ "PostEvent", (Native)&UAkGameplayStatics::execPostEvent },
			{ "PostEventAtLocation", (Native)&UAkGameplayStatics::execPostEventAtLocation },
			{ "PostEventAtLocationByName", (Native)&UAkGameplayStatics::execPostEventAtLocationByName },
			{ "PostEventAttached", (Native)&UAkGameplayStatics::execPostEventAttached },
			{ "PostEventByName", (Native)&UAkGameplayStatics::execPostEventByName },
			{ "PostTrigger", (Native)&UAkGameplayStatics::execPostTrigger },
			{ "SetBusConfig", (Native)&UAkGameplayStatics::execSetBusConfig },
			{ "SetOcclusionRefreshInterval", (Native)&UAkGameplayStatics::execSetOcclusionRefreshInterval },
			{ "SetOcclusionScalingFactor", (Native)&UAkGameplayStatics::execSetOcclusionScalingFactor },
			{ "SetOutputBusVolume", (Native)&UAkGameplayStatics::execSetOutputBusVolume },
			{ "SetPanningRule", (Native)&UAkGameplayStatics::execSetPanningRule },
			{ "SetRTPCValue", (Native)&UAkGameplayStatics::execSetRTPCValue },
			{ "SetState", (Native)&UAkGameplayStatics::execSetState },
			{ "SetSwitch", (Native)&UAkGameplayStatics::execSetSwitch },
			{ "SpawnAkComponentAtLocation", (Native)&UAkGameplayStatics::execSpawnAkComponentAtLocation },
			{ "StartAllAmbientSounds", (Native)&UAkGameplayStatics::execStartAllAmbientSounds },
			{ "StartOutputCapture", (Native)&UAkGameplayStatics::execStartOutputCapture },
			{ "StartProfilerCapture", (Native)&UAkGameplayStatics::execStartProfilerCapture },
			{ "StopActor", (Native)&UAkGameplayStatics::execStopActor },
			{ "StopAll", (Native)&UAkGameplayStatics::execStopAll },
			{ "StopAllAmbientSounds", (Native)&UAkGameplayStatics::execStopAllAmbientSounds },
			{ "StopOutputCapture", (Native)&UAkGameplayStatics::execStopOutputCapture },
			{ "StopProfilerCapture", (Native)&UAkGameplayStatics::execStopProfilerCapture },
			{ "TriggerRecording", (Native)&UAkGameplayStatics::execTriggerRecording },
			{ "UnloadBank", (Native)&UAkGameplayStatics::execUnloadBank },
			{ "UnloadBankByName", (Native)&UAkGameplayStatics::execUnloadBankByName },
			{ "UseEarlyReflections", (Native)&UAkGameplayStatics::execUseEarlyReflections },
			{ "UseReverbVolumes", (Native)&UAkGameplayStatics::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker()
	{
		struct AkGameplayStatics_eventAddOutputCaptureMarker_Parms
		{
			FString MarkerText;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddOutputCaptureMarker"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventAddOutputCaptureMarker_Parms));
			UProperty* NewProp_MarkerText = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MarkerText"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MarkerText, AkGameplayStatics_eventAddOutputCaptureMarker_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Debug"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Add text marker in output capture file.\n@param MarkerText - The name text to put in the marker."));
			MetaData->SetValue(NewProp_MarkerText, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ClearBanks()
	{
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearBanks"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clear all loaded banks"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent()
	{
		struct AkGameplayStatics_eventGetAkComponent_Parms
		{
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			UAkComponent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAkComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(AkGameplayStatics_eventGetAkComponent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AkGameplayStatics_eventGetAkComponent_Parms), 0x0010000000080588, Z_Construct_UClass_UAkComponent_NoRegister());
			UProperty* NewProp_LocationType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocationType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocationType, AkGameplayStatics_eventGetAkComponent_Parms), 0x0010000000000080, Z_Construct_UEnum_Engine_EAttachLocation());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AkGameplayStatics_eventGetAkComponent_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, AkGameplayStatics_eventGetAkComponent_Parms), 0x0010000000000080);
			UProperty* NewProp_AttachToComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachToComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttachToComponent, AkGameplayStatics_eventGetAkComponent_Parms), 0x0010000000080080, Z_Construct_UClass_USceneComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_AttachPointName"), TEXT("None"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_LocationType"), TEXT("KeepRelativeOffset"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get an AkComponent attached to and following the specified component.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at."));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AttachToComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor()
	{
		struct AkGameplayStatics_eventGetOcclusionScalingFactor_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetOcclusionScalingFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AkGameplayStatics_eventGetOcclusionScalingFactor_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, AkGameplayStatics_eventGetOcclusionScalingFactor_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Allows to globally tweak the occlusion with a multiplicative factor."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBank()
	{
		struct AkGameplayStatics_eventLoadBank_Parms
		{
			UAkAudioBank* Bank;
			FString BankName;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadBank"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventLoadBank_Parms));
			UProperty* NewProp_BankName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BankName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BankName, AkGameplayStatics_eventLoadBank_Parms), 0x0010040000000080);
			UProperty* NewProp_Bank = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bank, AkGameplayStatics_eventLoadBank_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioBank_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("1"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Loads a bank.\n* @param Bank - The bank to load."));
			MetaData->SetValue(NewProp_BankName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName()
	{
		struct AkGameplayStatics_eventLoadBankByName_Parms
		{
			FString BankName;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadBankByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventLoadBankByName_Parms));
			UProperty* NewProp_BankName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BankName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BankName, AkGameplayStatics_eventLoadBankByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecationMessage"), TEXT("Please use the \"Bank Name\" field of Load Bank"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Loads a bank by its name.\n* @param Bank - The bank to load."));
			MetaData->SetValue(NewProp_BankName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBanks()
	{
		struct AkGameplayStatics_eventLoadBanks_Parms
		{
			TArray<UAkAudioBank*> SoundBanks;
			bool SynchronizeSoundBanks;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadBanks"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422409, 65535, sizeof(AkGameplayStatics_eventLoadBanks_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(SynchronizeSoundBanks, AkGameplayStatics_eventLoadBanks_Parms);
			UProperty* NewProp_SynchronizeSoundBanks = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SynchronizeSoundBanks"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(SynchronizeSoundBanks, AkGameplayStatics_eventLoadBanks_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(SynchronizeSoundBanks, AkGameplayStatics_eventLoadBanks_Parms), sizeof(bool), true);
			UProperty* NewProp_SoundBanks = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SoundBanks"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SoundBanks, AkGameplayStatics_eventLoadBanks_Parms), 0x0010000008000182);
			UProperty* NewProp_SoundBanks_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SoundBanks, TEXT("SoundBanks"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UAkAudioBank_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Loads an array of bank.\n* @param Banks - An array of banks to load\n* @param CleanUpBanks - If true, will unload any loaded banks that are not in Banks"));
			MetaData->SetValue(NewProp_SoundBanks, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank()
	{
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadInitBank"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Loads the init bank."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEvent()
	{
		struct AkGameplayStatics_eventPostEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			bool bStopWhenAttachedToDestroyed;
			FString EventName;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventPostEvent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkGameplayStatics_eventPostEvent_Parms), 0x0010000000000580);
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventPostEvent_Parms), 0x0010040000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEvent_Parms);
			UProperty* NewProp_bStopWhenAttachedToDestroyed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopWhenAttachedToDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEvent_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEvent_Parms), sizeof(bool), true);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventPostEvent_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_AkEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkEvent, AkGameplayStatics_eventPostEvent_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioEvent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bStopWhenAttachedToDestroyed"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Wwise Event attached to and following the root component of the specified actor.\n@param AkEvent - ak event to play.\n@param Actor - actor on which to play the event.\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation()
	{
		struct AkGameplayStatics_eventPostEventAtLocation_Parms
		{
			UAkAudioEvent* AkEvent;
			FVector Location;
			FRotator Orientation;
			FString EventName;
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostEventAtLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822409, 65535, sizeof(AkGameplayStatics_eventPostEventAtLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010000000000580);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010040000000080, Z_Construct_UClass_UObject_NoRegister());
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010040000000080);
			UProperty* NewProp_Orientation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Orientation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Orientation, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_AkEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkEvent, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioEvent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Wwise Event at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName()
	{
		struct AkGameplayStatics_eventPostEventAtLocationByName_Parms
		{
			FString EventName;
			FVector Location;
			FRotator Orientation;
			UObject* WorldContextObject;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostEventAtLocationByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822409, 65535, sizeof(AkGameplayStatics_eventPostEventAtLocationByName_Parms));
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AkGameplayStatics_eventPostEventAtLocationByName_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			UProperty* NewProp_Orientation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Orientation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Orientation, AkGameplayStatics_eventPostEventAtLocationByName_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AkGameplayStatics_eventPostEventAtLocationByName_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventPostEventAtLocationByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecationMessage"), TEXT("Please use the \"Event Name\" field of PostEventAtLocation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Wwise Event by name at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached()
	{
		struct AkGameplayStatics_eventPostEventAttached_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			FName AttachPointName;
			bool bStopWhenAttachedToDestroyed;
			FString EventName;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostEventAttached"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventPostEventAttached_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010000000000580);
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010040000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventAttached_Parms);
			UProperty* NewProp_bStopWhenAttachedToDestroyed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopWhenAttachedToDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventAttached_Parms), sizeof(bool), true);
			UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010000000000080);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_AkEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkEvent, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioEvent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_AttachPointName"), TEXT("None"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bStopWhenAttachedToDestroyed"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Wwise Event attached to and following the specified component.\n@param AkEvent - Wwise Event to post.\n@param Actor - actor on which to post the Wwise Event.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at (NOT FUNCTIONAL).\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventByName()
	{
		struct AkGameplayStatics_eventPostEventByName_Parms
		{
			FString EventName;
			AActor* Actor;
			bool bStopWhenAttachedToDestroyed;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostEventByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventPostEventByName_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventByName_Parms);
			UProperty* NewProp_bStopWhenAttachedToDestroyed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopWhenAttachedToDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventByName_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventByName_Parms), sizeof(bool), true);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventPostEventByName_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventPostEventByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bStopWhenAttachedToDestroyed"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecationMessage"), TEXT("Please use the \"Event Name\" field of PostEvent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Wwise Event by name attached to and following the root component of the specified actor.\n@param AkEvent - ak event to play.\n@param Actor - actor on which to play the event.\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed."));
			MetaData->SetValue(NewProp_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostTrigger()
	{
		struct AkGameplayStatics_eventPostTrigger_Parms
		{
			FName Trigger;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostTrigger"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventPostTrigger_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventPostTrigger_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_Trigger = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Trigger"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Trigger, AkGameplayStatics_eventPostTrigger_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Trigger, targetting the root component of a specified actor.\n@param Trigger - Name of the Trigger\n@param Actor - Actor on which to post the Trigger"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig()
	{
		struct AkGameplayStatics_eventSetBusConfig_Parms
		{
			FString BusName;
			AkChannelConfiguration ChannelConfiguration;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBusConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AkGameplayStatics_eventSetBusConfig_Parms));
			UProperty* NewProp_ChannelConfiguration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ChannelConfiguration"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ChannelConfiguration, AkGameplayStatics_eventSetBusConfig_Parms), 0x0010000000000080, Z_Construct_UEnum_AkAudio_AkChannelConfiguration());
			UProperty* NewProp_ChannelConfiguration_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ChannelConfiguration, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_BusName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BusName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BusName, AkGameplayStatics_eventSetBusConfig_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Force channel configuration for the specified bus.\nThis function has unspecified behavior when changing the configuration of a bus that\nis currently playing.\nYou cannot change the configuration of the master bus.\n\n@param BusName                                Bus Name\n@param ChannelConfiguration   Desired channel configuration.\n@return Always returns AK_Success"));
			MetaData->SetValue(NewProp_BusName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval()
	{
		struct AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms
		{
			float RefreshInterval;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetOcclusionRefreshInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_RefreshInterval = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RefreshInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefreshInterval, AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the occlusion calculation refresh interval, targetting the root component of a specified actor.\n@param RefreshInterval - Value of the wanted refresh interval\n@param Actor - Actor on which to set the refresh interval"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor()
	{
		struct AkGameplayStatics_eventSetOcclusionScalingFactor_Parms
		{
			float ScalingFactor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetOcclusionScalingFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AkGameplayStatics_eventSetOcclusionScalingFactor_Parms));
			UProperty* NewProp_ScalingFactor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ScalingFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ScalingFactor, AkGameplayStatics_eventSetOcclusionScalingFactor_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Allows to globally tweak the occlusion with a multiplicative factor."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume()
	{
		struct AkGameplayStatics_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetOutputBusVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventSetOutputBusVolume_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventSetOutputBusVolume_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_BusVolume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BusVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BusVolume, AkGameplayStatics_eventSetOutputBusVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set\n@param Actor - Actor on which to set the flag"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule()
	{
		struct AkGameplayStatics_eventSetPanningRule_Parms
		{
			PanningRule PanRule;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPanningRule"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AkGameplayStatics_eventSetPanningRule_Parms));
			UProperty* NewProp_PanRule = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PanRule"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PanRule, AkGameplayStatics_eventSetPanningRule_Parms), 0x0010000000000080, Z_Construct_UEnum_AkAudio_PanningRule());
			UProperty* NewProp_PanRule_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PanRule, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the panning rule of the specified output.\nThis may be changed anytime once the sound engine is initialized.\n@warning This function posts a message through the sound engine's internal message queue, whereas GetPanningRule() queries the current panning rule directly.\n\n@param PanRule        Panning rule."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue()
	{
		struct AkGameplayStatics_eventSetRTPCValue_Parms
		{
			FName RTPC;
			float Value;
			int32 InterpolationTimeMs;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetRTPCValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventSetRTPCValue_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventSetRTPCValue_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_InterpolationTimeMs = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InterpolationTimeMs"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(InterpolationTimeMs, AkGameplayStatics_eventSetRTPCValue_Parms), 0x0010000000000080);
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, AkGameplayStatics_eventSetRTPCValue_Parms), 0x0010000000000080);
			UProperty* NewProp_RTPC = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RTPC"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(RTPC, AkGameplayStatics_eventSetRTPCValue_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the value of a Game Parameter, optionally targetting the root component of a specified actor.\n@param RTPC - The name of the Game Parameter to set\n@param Value - The value of the Game Parameter\n@param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n@param Actor - (Optional) Actor on which to set the Game Parameter value"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetState()
	{
		struct AkGameplayStatics_eventSetState_Parms
		{
			FName StateGroup;
			FName State;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventSetState_Parms));
			UProperty* NewProp_State = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("State"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(State, AkGameplayStatics_eventSetState_Parms), 0x0010000000000080);
			UProperty* NewProp_StateGroup = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StateGroup"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(StateGroup, AkGameplayStatics_eventSetState_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the active State for a given State Group.\n@param StateGroup - Name of the State Group to be modified\n@param State - Name of the State to be made active"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSwitch()
	{
		struct AkGameplayStatics_eventSetSwitch_Parms
		{
			FName SwitchGroup;
			FName SwitchState;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSwitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventSetSwitch_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventSetSwitch_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_SwitchState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SwitchState"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(SwitchState, AkGameplayStatics_eventSetSwitch_Parms), 0x0010000000000080);
			UProperty* NewProp_SwitchGroup = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SwitchGroup"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(SwitchGroup, AkGameplayStatics_eventSetSwitch_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the active Switch for a given Switch Group, targetting the root component of a specified actor.\n@param SwitchGroup - Name of the Switch Group to be modified\n@param SwitchState - Name of the Switch to be made active\n@param Actor - Actor on which to set the switch"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation()
	{
		struct AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms
		{
			UObject* WorldContextObject;
			UAkAudioEvent* AkEvent;
			UAkAuxBus* EarlyReflectionsBus;
			FVector Location;
			FRotator Orientation;
			bool AutoPost;
			FString EventName;
			FString EarlyReflectionsBusName;
			bool AutoDestroy;
			UAkComponent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SpawnAkComponentAtLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822409, 65535, sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000080588, Z_Construct_UClass_UAkComponent_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(AutoDestroy, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms);
			UProperty* NewProp_AutoDestroy = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoDestroy"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(AutoDestroy, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(AutoDestroy, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_EarlyReflectionsBusName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EarlyReflectionsBusName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EarlyReflectionsBusName, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010040000000080);
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010040000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(AutoPost, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms);
			UProperty* NewProp_AutoPost = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoPost"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(AutoPost, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(AutoPost, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_Orientation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Orientation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Orientation, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_EarlyReflectionsBus = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EarlyReflectionsBus"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EarlyReflectionsBus, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAuxBus_NoRegister());
			UProperty* NewProp_AkEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkEvent, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioEvent_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("6"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_AutoDestroy"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Spawn an AkComponent at a location. Allows, for example, to set a switch on a fire and forget sound.\n@param AkEvent - Wwise Event to post.\n@param EarlyReflectionsBus - Use the provided auxiliary bus to process early reflections.  If NULL, EarlyReflectionsBusName will be used.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event.\n@param AutoPost - Automatically post the event once the AkComponent is created.\n@param EarlyReflectionsBusName - Use the provided auxiliary bus to process early reflections.  If empty, no early reflections will be processed.\n@param AutoDestroy - Automatically destroy the AkComponent once the event is finished."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_EarlyReflectionsBusName, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds()
	{
		struct AkGameplayStatics_eventStartAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartAllAmbientSounds"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventStartAllAmbientSounds_Parms));
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AkGameplayStatics_eventStartAllAmbientSounds_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkAmbientSound"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Start all Ak ambient sounds."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture()
	{
		struct AkGameplayStatics_eventStartOutputCapture_Parms
		{
			FString Filename;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartOutputCapture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventStartOutputCapture_Parms));
			UProperty* NewProp_Filename = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Filename"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Filename, AkGameplayStatics_eventStartOutputCapture_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Debug"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Starts a Wwise output capture. The output file will be located in the same folder as the SoundBanks.\n@param Filename - The name to give to the output file."));
			MetaData->SetValue(NewProp_Filename, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture()
	{
		struct AkGameplayStatics_eventStartProfilerCapture_Parms
		{
			FString Filename;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartProfilerCapture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventStartProfilerCapture_Parms));
			UProperty* NewProp_Filename = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Filename"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Filename, AkGameplayStatics_eventStartProfilerCapture_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Debug"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Starts a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.\n@param Filename - The name to give to the output file."));
			MetaData->SetValue(NewProp_Filename, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopActor()
	{
		struct AkGameplayStatics_eventStopActor_Parms
		{
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventStopActor_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventStopActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stop all sounds for an actor."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAll()
	{
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopAll"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stop all sounds."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds()
	{
		struct AkGameplayStatics_eventStopAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopAllAmbientSounds"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventStopAllAmbientSounds_Parms));
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AkGameplayStatics_eventStopAllAmbientSounds_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkAmbientSound"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stop all Ak ambient sounds."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture()
	{
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopOutputCapture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Debug"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops a Wwise output capture. The output file will be located in the same folder as the SoundBanks."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture()
	{
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopProfilerCapture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Debug"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_TriggerRecording()
	{
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TriggerRecording"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBank()
	{
		struct AkGameplayStatics_eventUnloadBank_Parms
		{
			UAkAudioBank* Bank;
			FString BankName;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnloadBank"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventUnloadBank_Parms));
			UProperty* NewProp_BankName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BankName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BankName, AkGameplayStatics_eventUnloadBank_Parms), 0x0010040000000080);
			UProperty* NewProp_Bank = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bank, AkGameplayStatics_eventUnloadBank_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioBank_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("1"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Unloads a bank.\n@param Bank - The bank to unload."));
			MetaData->SetValue(NewProp_BankName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName()
	{
		struct AkGameplayStatics_eventUnloadBankByName_Parms
		{
			FString BankName;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnloadBankByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventUnloadBankByName_Parms));
			UProperty* NewProp_BankName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BankName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BankName, AkGameplayStatics_eventUnloadBankByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecationMessage"), TEXT("Please use the \"Bank Name\" field of Unload Bank"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Unloads a bank by its name.\n@param Bank - The bank to unload."));
			MetaData->SetValue(NewProp_BankName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections()
	{
		struct AkGameplayStatics_eventUseEarlyReflections_Parms
		{
			AActor* Actor;
			UAkAuxBus* AuxBus;
			bool Left;
			bool Right;
			bool Floor;
			bool Ceiling;
			bool Back;
			bool Front;
			bool SpotReflectors;
			FString AuxBusName;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UseEarlyReflections"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms));
			UProperty* NewProp_AuxBusName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AuxBusName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AuxBusName, AkGameplayStatics_eventUseEarlyReflections_Parms), 0x0010040000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(SpotReflectors, AkGameplayStatics_eventUseEarlyReflections_Parms);
			UProperty* NewProp_SpotReflectors = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SpotReflectors"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(SpotReflectors, AkGameplayStatics_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(SpotReflectors, AkGameplayStatics_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Front, AkGameplayStatics_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Front = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Front"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Front, AkGameplayStatics_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Front, AkGameplayStatics_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Back, AkGameplayStatics_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Back = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Back"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Back, AkGameplayStatics_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Back, AkGameplayStatics_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Ceiling, AkGameplayStatics_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Ceiling = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Ceiling"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Ceiling, AkGameplayStatics_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Ceiling, AkGameplayStatics_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Floor, AkGameplayStatics_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Floor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Floor"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Floor, AkGameplayStatics_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Floor, AkGameplayStatics_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Right, AkGameplayStatics_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Right = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Right"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Right, AkGameplayStatics_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Right, AkGameplayStatics_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Left, AkGameplayStatics_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Left = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Left"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Left, AkGameplayStatics_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Left, AkGameplayStatics_eventUseEarlyReflections_Parms), sizeof(bool), true);
			UProperty* NewProp_AuxBus = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AuxBus"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AuxBus, AkGameplayStatics_eventUseEarlyReflections_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAuxBus_NoRegister());
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventUseEarlyReflections_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("9"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets UseEarlyReflections flag on a specified actor. Set value to true to use calculate and render early reflections on this component.\n\n@param Actor - Actor on which to set the flag\n@param AuxBus Aux bus that contains the AkReflect plugin\n@param Left   Enable reflections off left wall.\n@param Right  Enable reflections off right wall.\n@param Floor  Enable reflections off floor.\n@param Ceiling        Enable reflections off front wall.\n@param Back   Enable reflections off front wall.\n@param Front  Enable reflections off front wall.\n@param EnableSpotReflectors   Enable reflections off spot reflectors.\n@param AuxBusName     Aux bus name that contains the AkReflect plugin"));
			MetaData->SetValue(NewProp_AuxBusName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes()
	{
		struct AkGameplayStatics_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UseReverbVolumes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventUseReverbVolumes_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventUseReverbVolumes_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(inUseReverbVolumes, AkGameplayStatics_eventUseReverbVolumes_Parms);
			UProperty* NewProp_inUseReverbVolumes = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inUseReverbVolumes"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(inUseReverbVolumes, AkGameplayStatics_eventUseReverbVolumes_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(inUseReverbVolumes, AkGameplayStatics_eventUseReverbVolumes_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets UseReverbVolumes flag on a specified actor. Set value to true to use reverb volumes on this component.\n\n@param inUseReverbVolumes - Whether to use reverb volumes or not.\n@param Actor - Actor on which to set the flag"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister()
	{
		return UAkGameplayStatics::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkGameplayStatics()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkGameplayStatics::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_ClearBanks());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_LoadBank());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_LoadBanks());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetState());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StopActor());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StopAll());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_TriggerRecording());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_UnloadBank());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker(), "AddOutputCaptureMarker"); // 2727933747
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_ClearBanks(), "ClearBanks"); // 1543546564
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent(), "GetAkComponent"); // 3805384279
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor(), "GetOcclusionScalingFactor"); // 2837359959
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_LoadBank(), "LoadBank"); // 3090073532
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName(), "LoadBankByName"); // 2421623181
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_LoadBanks(), "LoadBanks"); // 402733124
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank(), "LoadInitBank"); // 1259959059
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostEvent(), "PostEvent"); // 209273687
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation(), "PostEventAtLocation"); // 3558139353
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName(), "PostEventAtLocationByName"); // 614575399
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached(), "PostEventAttached"); // 1157042696
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName(), "PostEventByName"); // 174786968
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger(), "PostTrigger"); // 2613453595
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig(), "SetBusConfig"); // 1474057484
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval(), "SetOcclusionRefreshInterval"); // 2760362184
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor(), "SetOcclusionScalingFactor"); // 2547100248
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume(), "SetOutputBusVolume"); // 2416012768
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule(), "SetPanningRule"); // 2343266761
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue(), "SetRTPCValue"); // 1611934061
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetState(), "SetState"); // 376386171
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch(), "SetSwitch"); // 3366934345
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation(), "SpawnAkComponentAtLocation"); // 3844237304
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds(), "StartAllAmbientSounds"); // 159730385
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture(), "StartOutputCapture"); // 103224411
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture(), "StartProfilerCapture"); // 746974296
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StopActor(), "StopActor"); // 876995177
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StopAll(), "StopAll"); // 3886348880
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds(), "StopAllAmbientSounds"); // 2322248568
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture(), "StopOutputCapture"); // 1894768333
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture(), "StopProfilerCapture"); // 3101362923
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_TriggerRecording(), "TriggerRecording"); // 2625316002
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_UnloadBank(), "UnloadBank"); // 3967900088
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName(), "UnloadBankByName"); // 844432255
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections(), "UseEarlyReflections"); // 1998739566
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes(), "UseReverbVolumes"); // 490448459
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkGameplayStatics> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkGameplayStatics.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkGameplayStatics, 1221109860);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkGameplayStatics(Z_Construct_UClass_UAkGameplayStatics, &UAkGameplayStatics::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkGameplayStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGameplayStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
