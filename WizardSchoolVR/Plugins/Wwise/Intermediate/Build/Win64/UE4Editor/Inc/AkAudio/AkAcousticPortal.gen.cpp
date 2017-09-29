// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkAcousticPortal.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticPortal() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAcousticPortal_ClosePortal();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAcousticPortal_OpenPortal();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
// End Cross Module References
static UEnum* AkAcousticPortalState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkAcousticPortalState, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticPortalState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkAcousticPortalState(AkAcousticPortalState_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkAcousticPortalState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		extern uint32 Get_Z_Construct_UEnum_AkAudio_AkAcousticPortalState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkAcousticPortalState"), 0, Get_Z_Construct_UEnum_AkAudio_AkAcousticPortalState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AkAcousticPortalState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("AkAcousticPortalState::Closed"), 0);
			EnumNames.Emplace(TEXT("AkAcousticPortalState::Open"), 1);
			EnumNames.Emplace(TEXT("AkAcousticPortalState::AkAcousticPortalState_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("AkAcousticPortalState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/AkAcousticPortal.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AkAudio_AkAcousticPortalState_CRC() { return 4009572848U; }
	void AAkAcousticPortal::StaticRegisterNativesAAkAcousticPortal()
	{
		UClass* Class = AAkAcousticPortal::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ClosePortal", (Native)&AAkAcousticPortal::execClosePortal },
			{ "GetCurrentState", (Native)&AAkAcousticPortal::execGetCurrentState },
			{ "OpenPortal", (Native)&AAkAcousticPortal::execOpenPortal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_ClosePortal()
	{
		UObject* Outer = Z_Construct_UClass_AAkAcousticPortal();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClosePortal"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AkAcousticPortal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkAcousticPortal.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState()
	{
		struct AkAcousticPortal_eventGetCurrentState_Parms
		{
			AkAcousticPortalState ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AAkAcousticPortal();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(AkAcousticPortal_eventGetCurrentState_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, AkAcousticPortal_eventGetCurrentState_Parms), 0x0010000000000580, Z_Construct_UEnum_AkAudio_AkAcousticPortalState());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AkAcousticPortal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkAcousticPortal.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_OpenPortal()
	{
		UObject* Outer = Z_Construct_UClass_AAkAcousticPortal();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OpenPortal"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AkAcousticPortal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkAcousticPortal.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAkAcousticPortal_NoRegister()
	{
		return AAkAcousticPortal::StaticClass();
	}
	UClass* Z_Construct_UClass_AAkAcousticPortal()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AVolume();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = AAkAcousticPortal::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AAkAcousticPortal_ClosePortal());
				OuterClass->LinkChild(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState());
				OuterClass->LinkChild(Z_Construct_UFunction_AAkAcousticPortal_OpenPortal());

				UProperty* NewProp_InitialState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InitialState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(InitialState, AAkAcousticPortal), 0x0010000000000015, Z_Construct_UEnum_AkAudio_AkAcousticPortalState());
				UProperty* NewProp_InitialState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_InitialState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Gain = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Gain"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Gain, AAkAcousticPortal), 0x0010000000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAkAcousticPortal_ClosePortal(), "ClosePortal"); // 576076922
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState(), "GetCurrentState"); // 2599822092
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAkAcousticPortal_OpenPortal(), "OpenPortal"); // 3566864247
				static TCppClassTypeInfo<TCppClassTypeTraits<AAkAcousticPortal> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Advanced Attachment Volume Brush Physics Object Display Rendering Physics Input Blueprint"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkAcousticPortal.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkAcousticPortal.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_InitialState, TEXT("Category"), TEXT("AkAcousticPortal"));
				MetaData->SetValue(NewProp_InitialState, TEXT("ModuleRelativePath"), TEXT("Classes/AkAcousticPortal.h"));
				MetaData->SetValue(NewProp_Gain, TEXT("Category"), TEXT("AkAcousticPortal"));
				MetaData->SetValue(NewProp_Gain, TEXT("ModuleRelativePath"), TEXT("Classes/AkAcousticPortal.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkAcousticPortal, 198125161);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkAcousticPortal(Z_Construct_UClass_AAkAcousticPortal, &AAkAcousticPortal::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkAcousticPortal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkAcousticPortal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
