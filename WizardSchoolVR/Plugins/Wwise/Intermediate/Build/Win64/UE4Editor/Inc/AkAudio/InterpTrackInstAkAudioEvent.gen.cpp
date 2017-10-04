// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/InterpTrackInstAkAudioEvent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAkAudioEvent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UInterpTrackInstAkAudioEvent::StaticRegisterNativesUInterpTrackInstAkAudioEvent()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent_NoRegister()
	{
		return UInterpTrackInstAkAudioEvent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackInst();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UInterpTrackInstAkAudioEvent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20080080u;


				UProperty* NewProp_LastUpdatePosition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LastUpdatePosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LastUpdatePosition, UInterpTrackInstAkAudioEvent), 0x0010000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<UInterpTrackInstAkAudioEvent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InterpTrackInstAkAudioEvent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackInstAkAudioEvent.h"));
				MetaData->SetValue(NewProp_LastUpdatePosition, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackInstAkAudioEvent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstAkAudioEvent, 4149013804);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstAkAudioEvent(Z_Construct_UClass_UInterpTrackInstAkAudioEvent, &UInterpTrackInstAkAudioEvent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackInstAkAudioEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAkAudioEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
