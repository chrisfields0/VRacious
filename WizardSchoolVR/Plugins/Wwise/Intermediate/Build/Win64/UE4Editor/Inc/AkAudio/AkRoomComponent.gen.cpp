// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkRoomComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkRoomComponent() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkRoomComponent_AddSpatialAudioRoom();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkRoomComponent_RemoveSpatialAudioRoom();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkRoomComponent::StaticRegisterNativesUAkRoomComponent()
	{
		UClass* Class = UAkRoomComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddSpatialAudioRoom", (Native)&UAkRoomComponent::execAddSpatialAudioRoom },
			{ "RemoveSpatialAudioRoom", (Native)&UAkRoomComponent::execRemoveSpatialAudioRoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkRoomComponent_AddSpatialAudioRoom()
	{
		UObject* Outer = Z_Construct_UClass_UAkRoomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddSpatialAudioRoom"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Room"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkRoomComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Register a room in AK Spatial Audio. Can be called again to update the room parameters"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkRoomComponent_RemoveSpatialAudioRoom()
	{
		UObject* Outer = Z_Construct_UClass_UAkRoomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RemoveSpatialAudioRoom"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Room"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkRoomComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Remove a room from AK Spatial Audio"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister()
	{
		return UAkRoomComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkRoomComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkRoomComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkRoomComponent_AddSpatialAudioRoom());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkRoomComponent_RemoveSpatialAudioRoom());

				UProperty* NewProp_Priority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Priority"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Priority, UAkRoomComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, UAkRoomComponent);
				UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, UAkRoomComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bEnable, UAkRoomComponent), sizeof(uint8), false);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkRoomComponent_AddSpatialAudioRoom(), "AddSpatialAudioRoom"); // 3279749662
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkRoomComponent_RemoveSpatialAudioRoom(), "RemoveSpatialAudioRoom"); // 4267995632
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkRoomComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Audiokinetic"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkRoomComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkRoomComponent.h"));
				MetaData->SetValue(NewProp_Priority, TEXT("Category"), TEXT("Room"));
				MetaData->SetValue(NewProp_Priority, TEXT("ModuleRelativePath"), TEXT("Classes/AkRoomComponent.h"));
				MetaData->SetValue(NewProp_Priority, TEXT("ToolTip"), TEXT("The precedence in which the Rooms will be applied. In the case of overlapping tooms, only the one\nwith the highest priority is chosen. If two or more overlapping rooms have the same\npriority, the chosen room is unpredictable."));
				MetaData->SetValue(NewProp_bEnable, TEXT("Category"), TEXT("Toggle"));
				MetaData->SetValue(NewProp_bEnable, TEXT("DisplayName"), TEXT("Enable Room"));
				MetaData->SetValue(NewProp_bEnable, TEXT("ModuleRelativePath"), TEXT("Classes/AkRoomComponent.h"));
				MetaData->SetValue(NewProp_bEnable, TEXT("ToolTip"), TEXT("Whether this volume is currently enabled and able to affect sounds"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkRoomComponent, 3505751713);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkRoomComponent(Z_Construct_UClass_UAkRoomComponent, &UAkRoomComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkRoomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkRoomComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
