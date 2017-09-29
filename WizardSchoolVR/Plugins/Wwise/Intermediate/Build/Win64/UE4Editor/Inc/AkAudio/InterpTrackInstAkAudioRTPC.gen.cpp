// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/InterpTrackInstAkAudioRTPC.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAkAudioRTPC() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UInterpTrackInstAkAudioRTPC::StaticRegisterNativesUInterpTrackInstAkAudioRTPC()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_NoRegister()
	{
		return UInterpTrackInstAkAudioRTPC::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackInst();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UInterpTrackInstAkAudioRTPC::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;


				UProperty* NewProp_LastUpdatePosition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LastUpdatePosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LastUpdatePosition, UInterpTrackInstAkAudioRTPC), 0x0010000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<UInterpTrackInstAkAudioRTPC> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InterpTrackInstAkAudioRTPC.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackInstAkAudioRTPC.h"));
				MetaData->SetValue(NewProp_LastUpdatePosition, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackInstAkAudioRTPC.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstAkAudioRTPC, 1022834995);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstAkAudioRTPC(Z_Construct_UClass_UInterpTrackInstAkAudioRTPC, &UInterpTrackInstAkAudioRTPC::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackInstAkAudioRTPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAkAudioRTPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
