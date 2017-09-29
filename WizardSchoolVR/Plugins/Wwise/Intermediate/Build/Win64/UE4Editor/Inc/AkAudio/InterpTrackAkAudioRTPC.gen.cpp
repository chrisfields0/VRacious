// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/InterpTrackAkAudioRTPC.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAkAudioRTPC() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UInterpTrackAkAudioRTPC::StaticRegisterNativesUInterpTrackAkAudioRTPC()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC_NoRegister()
	{
		return UInterpTrackAkAudioRTPC::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackFloatBase();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UInterpTrackAkAudioRTPC::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20082080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bContinueRTPCOnMatineeEnd, UInterpTrackAkAudioRTPC);
				UProperty* NewProp_bContinueRTPCOnMatineeEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bContinueRTPCOnMatineeEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bContinueRTPCOnMatineeEnd, UInterpTrackAkAudioRTPC), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bContinueRTPCOnMatineeEnd, UInterpTrackAkAudioRTPC), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPlayOnReverse, UInterpTrackAkAudioRTPC);
				UProperty* NewProp_bPlayOnReverse = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bPlayOnReverse"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPlayOnReverse, UInterpTrackAkAudioRTPC), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bPlayOnReverse, UInterpTrackAkAudioRTPC), sizeof(uint8), false);
				UProperty* NewProp_Param = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Param"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Param, UInterpTrackAkAudioRTPC), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<UInterpTrackAkAudioRTPC> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InterpTrackAkAudioRTPC.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioRTPC.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A track that plays ak events on the groups Actor."));
				MetaData->SetValue(NewProp_bContinueRTPCOnMatineeEnd, TEXT("Category"), TEXT("InterpTrackAkAudioRTPC"));
				MetaData->SetValue(NewProp_bContinueRTPCOnMatineeEnd, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioRTPC.h"));
				MetaData->SetValue(NewProp_bContinueRTPCOnMatineeEnd, TEXT("ToolTip"), TEXT("If true, rtpc events on this track will not be forced to finish when the matinee sequence finishes."));
				MetaData->SetValue(NewProp_bPlayOnReverse, TEXT("Category"), TEXT("InterpTrackAkAudioRTPC"));
				MetaData->SetValue(NewProp_bPlayOnReverse, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioRTPC.h"));
				MetaData->SetValue(NewProp_bPlayOnReverse, TEXT("ToolTip"), TEXT("if set, rtpc event plays only when playing the matinee in reverse instead of when the matinee plays forward"));
				MetaData->SetValue(NewProp_Param, TEXT("Category"), TEXT("InterpTrackAkAudioRTPC"));
				MetaData->SetValue(NewProp_Param, TEXT("ModuleRelativePath"), TEXT("Classes/InterpTrackAkAudioRTPC.h"));
				MetaData->SetValue(NewProp_Param, TEXT("ToolTip"), TEXT("Array of rtpc events to play at specific times."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackAkAudioRTPC, 3269894598);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAkAudioRTPC(Z_Construct_UClass_UInterpTrackAkAudioRTPC, &UInterpTrackAkAudioRTPC::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackAkAudioRTPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAkAudioRTPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
