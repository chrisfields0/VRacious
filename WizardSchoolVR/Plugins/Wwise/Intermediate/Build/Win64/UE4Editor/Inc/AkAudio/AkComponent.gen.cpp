// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkComponent() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEvent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetListeners();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_Stop();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
static UEnum* EReflectionFilterBits_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EReflectionFilterBits, Z_Construct_UPackage__Script_AkAudio(), TEXT("EReflectionFilterBits"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReflectionFilterBits(EReflectionFilterBits_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EReflectionFilterBits"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UEnum_AkAudio_EReflectionFilterBits_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReflectionFilterBits"), 0, Get_Z_Construct_UEnum_AkAudio_EReflectionFilterBits_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EReflectionFilterBits"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EReflectionFilterBits::Wall"), 0);
			EnumNames.Emplace(TEXT("EReflectionFilterBits::Ceiling"), 1);
			EnumNames.Emplace(TEXT("EReflectionFilterBits::Floor"), 2);
			EnumNames.Emplace(TEXT("EReflectionFilterBits::EReflectionFilterBits_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EReflectionFilterBits");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Bitflags"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AkAudio_EReflectionFilterBits_CRC() { return 3417174960U; }
	void UAkComponent::StaticRegisterNativesUAkComponent()
	{
		UClass* Class = UAkComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetAttenuationRadius", (Native)&UAkComponent::execGetAttenuationRadius },
			{ "PostAkEvent", (Native)&UAkComponent::execPostAkEvent },
			{ "PostAkEventByName", (Native)&UAkComponent::execPostAkEventByName },
			{ "PostAssociatedAkEvent", (Native)&UAkComponent::execPostAssociatedAkEvent },
			{ "PostTrigger", (Native)&UAkComponent::execPostTrigger },
			{ "SetAttenuationScalingFactor", (Native)&UAkComponent::execSetAttenuationScalingFactor },
			{ "SetListeners", (Native)&UAkComponent::execSetListeners },
			{ "SetOutputBusVolume", (Native)&UAkComponent::execSetOutputBusVolume },
			{ "SetRTPCValue", (Native)&UAkComponent::execSetRTPCValue },
			{ "SetStopWhenOwnerDestroyed", (Native)&UAkComponent::execSetStopWhenOwnerDestroyed },
			{ "SetSwitch", (Native)&UAkComponent::execSetSwitch },
			{ "Stop", (Native)&UAkComponent::execStop },
			{ "UseEarlyReflections", (Native)&UAkComponent::execUseEarlyReflections },
			{ "UseReverbVolumes", (Native)&UAkComponent::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius()
	{
		struct AkComponent_eventGetAttenuationRadius_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAttenuationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020409, 65535, sizeof(AkComponent_eventGetAttenuationRadius_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, AkComponent_eventGetAttenuationRadius_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Return the real attenuation radius for this component (AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEvent()
	{
		struct AkComponent_eventPostAkEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			FString in_EventName;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostAkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventPostAkEvent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkComponent_eventPostAkEvent_Parms), 0x0010000000000580);
			UProperty* NewProp_in_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("in_EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(in_EventName, AkComponent_eventPostAkEvent_Parms), 0x0010040000000080);
			UProperty* NewProp_AkEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkEvent, AkComponent_eventPostAkEvent_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioEvent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("1"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts an event to Wwise, using this component as the game object source\n\n@param AkEvent               The event to post"));
			MetaData->SetValue(NewProp_in_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName()
	{
		struct AkComponent_eventPostAkEventByName_Parms
		{
			FString in_EventName;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostAkEventByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventPostAkEventByName_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkComponent_eventPostAkEventByName_Parms), 0x0010000000000580);
			UProperty* NewProp_in_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("in_EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(in_EventName, AkComponent_eventPostAkEventByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecationMessage"), TEXT("Please use the \"Event Name\" field of Post Ak Event"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts an event to Wwise using its name, using this component as the game object source\n\n@param AkEvent               The event to post"));
			MetaData->SetValue(NewProp_in_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent()
	{
		struct AkComponent_eventPostAssociatedAkEvent_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostAssociatedAkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventPostAssociatedAkEvent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkComponent_eventPostAssociatedAkEvent_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts this component's AkAudioEvent to Wwise, using this component as the game object source"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger()
	{
		struct AkComponent_eventPostTrigger_Parms
		{
			FString Trigger;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostTrigger"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventPostTrigger_Parms));
			UProperty* NewProp_Trigger = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Trigger"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Trigger, AkComponent_eventPostTrigger_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a trigger to wwise, using this component as the game object source\n\n@param Trigger               The name of the trigger"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor()
	{
		struct AkComponent_eventSetAttenuationScalingFactor_Parms
		{
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetAttenuationScalingFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventSetAttenuationScalingFactor_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, AkComponent_eventSetAttenuationScalingFactor_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the attenuation scaling factor, which modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetListeners()
	{
		struct AkComponent_eventSetListeners_Parms
		{
			TArray<UAkComponent*> Listeners;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetListeners"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420409, 65535, sizeof(AkComponent_eventSetListeners_Parms));
			UProperty* NewProp_Listeners = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Listeners"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Listeners, AkComponent_eventSetListeners_Parms), 0x0010008008000182);
			UProperty* NewProp_Listeners_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Listeners, TEXT("Listeners"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080000, Z_Construct_UClass_UAkComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set a game object's active listeners\n\n@param in_uListenerMask      Bitmask representing the active listeners (LSB = Listener 0, set to 1 means active)"));
			MetaData->SetValue(NewProp_Listeners, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Listeners, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume()
	{
		struct AkComponent_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetOutputBusVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventSetOutputBusVolume_Parms));
			UProperty* NewProp_BusVolume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BusVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BusVolume, AkComponent_eventSetOutputBusVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue()
	{
		struct AkComponent_eventSetRTPCValue_Parms
		{
			FString RTPC;
			float Value;
			int32 InterpolationTimeMs;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetRTPCValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventSetRTPCValue_Parms));
			UProperty* NewProp_InterpolationTimeMs = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InterpolationTimeMs"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(InterpolationTimeMs, AkComponent_eventSetRTPCValue_Parms), 0x0010000000000080);
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, AkComponent_eventSetRTPCValue_Parms), 0x0010000000000080);
			UProperty* NewProp_RTPC = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RTPC"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(RTPC, AkComponent_eventSetRTPCValue_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets an RTPC value, using this component as the game object source\n\n@param RTPC                  The name of the RTPC to set\n@param Value                 The value of the RTPC\n@param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed()
	{
		struct AkComponent_eventSetStopWhenOwnerDestroyed_Parms
		{
			bool bStopWhenOwnerDestroyed;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetStopWhenOwnerDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenOwnerDestroyed, AkComponent_eventSetStopWhenOwnerDestroyed_Parms);
			UProperty* NewProp_bStopWhenOwnerDestroyed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopWhenOwnerDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenOwnerDestroyed, AkComponent_eventSetStopWhenOwnerDestroyed_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bStopWhenOwnerDestroyed, AkComponent_eventSetStopWhenOwnerDestroyed_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets whether or not to stop sounds when the component's owner is destroyed\n\n@param bStopWhenOwnerDestroyed       Whether or not to stop sounds when the component's owner is destroyed"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch()
	{
		struct AkComponent_eventSetSwitch_Parms
		{
			FString SwitchGroup;
			FString SwitchState;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSwitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventSetSwitch_Parms));
			UProperty* NewProp_SwitchState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SwitchState"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SwitchState, AkComponent_eventSetSwitch_Parms), 0x0010000000000080);
			UProperty* NewProp_SwitchGroup = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SwitchGroup"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SwitchGroup, AkComponent_eventSetSwitch_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets a switch group in wwise, using this component as the game object source\n\n@param SwitchGroup   The name of the switch group\n@param SwitchState   The new state of the switch"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_Stop()
	{
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops playback using this component as the game object to stop"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections()
	{
		struct AkComponent_eventUseEarlyReflections_Parms
		{
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
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UseEarlyReflections"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AkComponent_eventUseEarlyReflections_Parms));
			UProperty* NewProp_AuxBusName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AuxBusName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AuxBusName, AkComponent_eventUseEarlyReflections_Parms), 0x0010040000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(SpotReflectors, AkComponent_eventUseEarlyReflections_Parms);
			UProperty* NewProp_SpotReflectors = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SpotReflectors"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(SpotReflectors, AkComponent_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(SpotReflectors, AkComponent_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Front, AkComponent_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Front = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Front"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Front, AkComponent_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Front, AkComponent_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Back, AkComponent_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Back = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Back"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Back, AkComponent_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Back, AkComponent_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Ceiling, AkComponent_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Ceiling = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Ceiling"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Ceiling, AkComponent_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Ceiling, AkComponent_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Floor, AkComponent_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Floor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Floor"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Floor, AkComponent_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Floor, AkComponent_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Right, AkComponent_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Right = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Right"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Right, AkComponent_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Right, AkComponent_eventUseEarlyReflections_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Left, AkComponent_eventUseEarlyReflections_Parms);
			UProperty* NewProp_Left = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Left"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Left, AkComponent_eventUseEarlyReflections_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Left, AkComponent_eventUseEarlyReflections_Parms), sizeof(bool), true);
			UProperty* NewProp_AuxBus = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AuxBus"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AuxBus, AkComponent_eventUseEarlyReflections_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAuxBus_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("8"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("UseEarlyReflections. Enable (or disable) early reflections for this ak component.\n\n@param AuxBus Aux bus that contains the AkReflect plugin\n@param Left   Enable reflections off left wall.\n@param Right  Enable reflections off right wall.\n@param Floor  Enable reflections off floor.\n@param Ceiling        Enable reflections off front wall.\n@param Back   Enable reflections off front wall.\n@param Front  Enable reflections off front wall.\n@param EnableSpotReflectors   Enable reflections off spot reflectors.\n@param AuxBusName     Aux bus name that contains the AkReflect plugin"));
			MetaData->SetValue(NewProp_AuxBusName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes()
	{
		struct AkComponent_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UseReverbVolumes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventUseReverbVolumes_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(inUseReverbVolumes, AkComponent_eventUseReverbVolumes_Parms);
			UProperty* NewProp_inUseReverbVolumes = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inUseReverbVolumes"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(inUseReverbVolumes, AkComponent_eventUseReverbVolumes_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(inUseReverbVolumes, AkComponent_eventUseReverbVolumes_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set UseReverbVolumes flag. Set value to true to use reverb volumes on this component.\n\n@param inUseReverbVolumes    Whether to use reverb volumes or not."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkComponent_NoRegister()
	{
		return UAkComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_PostAkEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_PostAkEventByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_PostTrigger());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetListeners());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetRTPCValue());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetSwitch());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_Stop());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_UseEarlyReflections());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_UseReverbVolumes());

				UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, UAkComponent), 0x0010040000000005);
				UProperty* NewProp_AkAudioEvent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AkAudioEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkAudioEvent, UAkComponent), 0x0010000000000005, Z_Construct_UClass_UAkAudioEvent_NoRegister());
				UProperty* NewProp_OcclusionRefreshInterval = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OcclusionRefreshInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OcclusionRefreshInterval, UAkComponent), 0x0010000000000005);
				UProperty* NewProp_AttenuationScalingFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttenuationScalingFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AttenuationScalingFactor, UAkComponent), 0x0010000000000015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(StopWhenOwnerDestroyed, UAkComponent);
				UProperty* NewProp_StopWhenOwnerDestroyed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StopWhenOwnerDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(StopWhenOwnerDestroyed, UAkComponent), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(StopWhenOwnerDestroyed, UAkComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(DrawHigherOrderReflections, UAkComponent);
				UProperty* NewProp_DrawHigherOrderReflections = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DrawHigherOrderReflections"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DrawHigherOrderReflections, UAkComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(DrawHigherOrderReflections, UAkComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(DrawSecondOrderReflections, UAkComponent);
				UProperty* NewProp_DrawSecondOrderReflections = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DrawSecondOrderReflections"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DrawSecondOrderReflections, UAkComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(DrawSecondOrderReflections, UAkComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(DrawFirstOrderReflections, UAkComponent);
				UProperty* NewProp_DrawFirstOrderReflections = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DrawFirstOrderReflections"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DrawFirstOrderReflections, UAkComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(DrawFirstOrderReflections, UAkComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnableSpotReflectors, UAkComponent);
				UProperty* NewProp_EnableSpotReflectors = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnableSpotReflectors"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnableSpotReflectors, UAkComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(EnableSpotReflectors, UAkComponent), sizeof(uint8), false);
				UProperty* NewProp_EarlyReflectionMaxPathLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EarlyReflectionMaxPathLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EarlyReflectionMaxPathLength, UAkComponent), 0x0010040000000005);
				UProperty* NewProp_EarlyReflectionBusSendGain = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EarlyReflectionBusSendGain"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EarlyReflectionBusSendGain, UAkComponent), 0x0010040000000005);
				UProperty* NewProp_EarlyReflectionOrder = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EarlyReflectionOrder"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(EarlyReflectionOrder, UAkComponent), 0x0010040000000005);
				UProperty* NewProp_EarlyReflectionAuxBusName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EarlyReflectionAuxBusName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EarlyReflectionAuxBusName, UAkComponent), 0x0010040000000005);
				UProperty* NewProp_EarlyReflectionAuxBus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EarlyReflectionAuxBus"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EarlyReflectionAuxBus, UAkComponent), 0x0010040000000005, Z_Construct_UClass_UAkAuxBus_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius(), "GetAttenuationRadius"); // 650887783
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_PostAkEvent(), "PostAkEvent"); // 1735402426
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_PostAkEventByName(), "PostAkEventByName"); // 887460483
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent(), "PostAssociatedAkEvent"); // 164433466
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_PostTrigger(), "PostTrigger"); // 1732466351
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor(), "SetAttenuationScalingFactor"); // 2847467645
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetListeners(), "SetListeners"); // 1540194286
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume(), "SetOutputBusVolume"); // 1804623147
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetRTPCValue(), "SetRTPCValue"); // 859237016
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed(), "SetStopWhenOwnerDestroyed"); // 3044418209
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetSwitch(), "SetSwitch"); // 927620291
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_Stop(), "Stop"); // 1845080565
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_UseEarlyReflections(), "UseEarlyReflections"); // 371746410
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_UseReverbVolumes(), "UseReverbVolumes"); // 1709507227
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("AutoExpandCategories"), TEXT("AkComponent"));
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Audiokinetic"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UAkComponent"));
				MetaData->SetValue(NewProp_EventName, TEXT("Category"), TEXT("AkComponent"));
				MetaData->SetValue(NewProp_EventName, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_AkAudioEvent, TEXT("Category"), TEXT("AkComponent"));
				MetaData->SetValue(NewProp_AkAudioEvent, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_AkAudioEvent, TEXT("ToolTip"), TEXT("Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect."));
				MetaData->SetValue(NewProp_OcclusionRefreshInterval, TEXT("Category"), TEXT("AkComponent"));
				MetaData->SetValue(NewProp_OcclusionRefreshInterval, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_OcclusionRefreshInterval, TEXT("ToolTip"), TEXT("Time interval between occlusion/obstruction checks. Set to 0 to disable occlusion on this component."));
				MetaData->SetValue(NewProp_AttenuationScalingFactor, TEXT("Category"), TEXT("AkComponent"));
				MetaData->SetValue(NewProp_AttenuationScalingFactor, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_AttenuationScalingFactor, TEXT("ToolTip"), TEXT("Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect."));
				MetaData->SetValue(NewProp_StopWhenOwnerDestroyed, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_StopWhenOwnerDestroyed, TEXT("ToolTip"), TEXT("Stop sound when owner is destroyed?"));
				MetaData->SetValue(NewProp_DrawHigherOrderReflections, TEXT("Category"), TEXT("AkComponent|Spatial Audio|Debug Draw"));
				MetaData->SetValue(NewProp_DrawHigherOrderReflections, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_DrawSecondOrderReflections, TEXT("Category"), TEXT("AkComponent|Spatial Audio|Debug Draw"));
				MetaData->SetValue(NewProp_DrawSecondOrderReflections, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_DrawFirstOrderReflections, TEXT("Category"), TEXT("AkComponent|Spatial Audio|Debug Draw"));
				MetaData->SetValue(NewProp_DrawFirstOrderReflections, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_EnableSpotReflectors, TEXT("Category"), TEXT("AkComponent|Spatial Audio"));
				MetaData->SetValue(NewProp_EnableSpotReflectors, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_EarlyReflectionMaxPathLength, TEXT("Category"), TEXT("AkComponent|Spatial Audio"));
				MetaData->SetValue(NewProp_EarlyReflectionMaxPathLength, TEXT("ClampMin"), TEXT("0.0"));
				MetaData->SetValue(NewProp_EarlyReflectionMaxPathLength, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_EarlyReflectionBusSendGain, TEXT("Category"), TEXT("AkComponent|Spatial Audio"));
				MetaData->SetValue(NewProp_EarlyReflectionBusSendGain, TEXT("ClampMax"), TEXT("1.0"));
				MetaData->SetValue(NewProp_EarlyReflectionBusSendGain, TEXT("ClampMin"), TEXT("0.0"));
				MetaData->SetValue(NewProp_EarlyReflectionBusSendGain, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_EarlyReflectionOrder, TEXT("Category"), TEXT("AkComponent|Spatial Audio"));
				MetaData->SetValue(NewProp_EarlyReflectionOrder, TEXT("ClampMax"), TEXT("4"));
				MetaData->SetValue(NewProp_EarlyReflectionOrder, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_EarlyReflectionOrder, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_EarlyReflectionAuxBusName, TEXT("Category"), TEXT("AkComponent|Spatial Audio"));
				MetaData->SetValue(NewProp_EarlyReflectionAuxBusName, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_EarlyReflectionAuxBus, TEXT("Category"), TEXT("AkComponent|Spatial Audio"));
				MetaData->SetValue(NewProp_EarlyReflectionAuxBus, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_EarlyReflectionAuxBus, TEXT("ToolTip"), TEXT("Wwise Auxiliary Bus for early reflection processing"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkComponent, 2597636848);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkComponent(Z_Construct_UClass_UAkComponent, &UAkComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
