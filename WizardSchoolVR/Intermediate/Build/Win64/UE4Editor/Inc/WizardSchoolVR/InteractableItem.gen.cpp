// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InteractableItem.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableItem() {}
// Cross Module References
	WIZARDSCHOOLVR_API UFunction* Z_Construct_UFunction_AInteractableItem_GetAllowObjectToBeGrabbed();
	WIZARDSCHOOLVR_API UClass* Z_Construct_UClass_AInteractableItem();
	WIZARDSCHOOLVR_API UFunction* Z_Construct_UFunction_AInteractableItem_GetAllowObjectToBeLevitated();
	WIZARDSCHOOLVR_API UFunction* Z_Construct_UFunction_AInteractableItem_GetIsBeingInteractedWith();
	WIZARDSCHOOLVR_API UFunction* Z_Construct_UFunction_AInteractableItem_LerpPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	WIZARDSCHOOLVR_API UFunction* Z_Construct_UFunction_AInteractableItem_SetAllowObjectToBeGrabbed();
	WIZARDSCHOOLVR_API UFunction* Z_Construct_UFunction_AInteractableItem_SetAllowObjectToBeLevitated();
	WIZARDSCHOOLVR_API UFunction* Z_Construct_UFunction_AInteractableItem_SetIsBeingInteractedWith();
	WIZARDSCHOOLVR_API UFunction* Z_Construct_UFunction_AInteractableItem_ShowRing();
	WIZARDSCHOOLVR_API UClass* Z_Construct_UClass_AInteractableItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WizardSchoolVR();
// End Cross Module References
	static FName NAME_AInteractableItem_LerpPosition = FName(TEXT("LerpPosition"));
	void AInteractableItem::LerpPosition(FVector const& EndLocation)
	{
		InteractableItem_eventLerpPosition_Parms Parms;
		Parms.EndLocation=EndLocation;
		ProcessEvent(FindFunctionChecked(NAME_AInteractableItem_LerpPosition),&Parms);
	}
	void AInteractableItem::StaticRegisterNativesAInteractableItem()
	{
		UClass* Class = AInteractableItem::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetAllowObjectToBeGrabbed", (Native)&AInteractableItem::execGetAllowObjectToBeGrabbed },
			{ "GetAllowObjectToBeLevitated", (Native)&AInteractableItem::execGetAllowObjectToBeLevitated },
			{ "GetIsBeingInteractedWith", (Native)&AInteractableItem::execGetIsBeingInteractedWith },
			{ "LerpPosition", (Native)&AInteractableItem::execLerpPosition },
			{ "SetAllowObjectToBeGrabbed", (Native)&AInteractableItem::execSetAllowObjectToBeGrabbed },
			{ "SetAllowObjectToBeLevitated", (Native)&AInteractableItem::execSetAllowObjectToBeLevitated },
			{ "SetIsBeingInteractedWith", (Native)&AInteractableItem::execSetIsBeingInteractedWith },
			{ "ShowRing", (Native)&AInteractableItem::execShowRing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AInteractableItem_GetAllowObjectToBeGrabbed()
	{
		struct InteractableItem_eventGetAllowObjectToBeGrabbed_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AInteractableItem();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAllowObjectToBeGrabbed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(InteractableItem_eventGetAllowObjectToBeGrabbed_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, InteractableItem_eventGetAllowObjectToBeGrabbed_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, InteractableItem_eventGetAllowObjectToBeGrabbed_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, InteractableItem_eventGetAllowObjectToBeGrabbed_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Grab Interaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AInteractableItem_GetAllowObjectToBeLevitated()
	{
		struct InteractableItem_eventGetAllowObjectToBeLevitated_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AInteractableItem();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAllowObjectToBeLevitated"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(InteractableItem_eventGetAllowObjectToBeLevitated_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, InteractableItem_eventGetAllowObjectToBeLevitated_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, InteractableItem_eventGetAllowObjectToBeLevitated_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, InteractableItem_eventGetAllowObjectToBeLevitated_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Grab Interaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AInteractableItem_GetIsBeingInteractedWith()
	{
		struct InteractableItem_eventGetIsBeingInteractedWith_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AInteractableItem();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetIsBeingInteractedWith"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(InteractableItem_eventGetIsBeingInteractedWith_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, InteractableItem_eventGetIsBeingInteractedWith_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, InteractableItem_eventGetIsBeingInteractedWith_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, InteractableItem_eventGetIsBeingInteractedWith_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Grab Interaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AInteractableItem_LerpPosition()
	{
		UObject* Outer = Z_Construct_UClass_AInteractableItem();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LerpPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08C20C00, 65535, sizeof(InteractableItem_eventLerpPosition_Parms));
			UProperty* NewProp_EndLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EndLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EndLocation, InteractableItem_eventLerpPosition_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Interactable Item"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
			MetaData->SetValue(NewProp_EndLocation, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AInteractableItem_SetAllowObjectToBeGrabbed()
	{
		struct InteractableItem_eventSetAllowObjectToBeGrabbed_Parms
		{
			bool bNewValue;
		};
		UObject* Outer = Z_Construct_UClass_AInteractableItem();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetAllowObjectToBeGrabbed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(InteractableItem_eventSetAllowObjectToBeGrabbed_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNewValue, InteractableItem_eventSetAllowObjectToBeGrabbed_Parms);
			UProperty* NewProp_bNewValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bNewValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNewValue, InteractableItem_eventSetAllowObjectToBeGrabbed_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bNewValue, InteractableItem_eventSetAllowObjectToBeGrabbed_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Grab Interaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AInteractableItem_SetAllowObjectToBeLevitated()
	{
		struct InteractableItem_eventSetAllowObjectToBeLevitated_Parms
		{
			bool bNewValue;
		};
		UObject* Outer = Z_Construct_UClass_AInteractableItem();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetAllowObjectToBeLevitated"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(InteractableItem_eventSetAllowObjectToBeLevitated_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNewValue, InteractableItem_eventSetAllowObjectToBeLevitated_Parms);
			UProperty* NewProp_bNewValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bNewValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNewValue, InteractableItem_eventSetAllowObjectToBeLevitated_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bNewValue, InteractableItem_eventSetAllowObjectToBeLevitated_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Grab Interaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AInteractableItem_SetIsBeingInteractedWith()
	{
		struct InteractableItem_eventSetIsBeingInteractedWith_Parms
		{
			bool bNewValue;
		};
		UObject* Outer = Z_Construct_UClass_AInteractableItem();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetIsBeingInteractedWith"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(InteractableItem_eventSetIsBeingInteractedWith_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNewValue, InteractableItem_eventSetIsBeingInteractedWith_Parms);
			UProperty* NewProp_bNewValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bNewValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNewValue, InteractableItem_eventSetIsBeingInteractedWith_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bNewValue, InteractableItem_eventSetIsBeingInteractedWith_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Grab Interaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AInteractableItem_ShowRing()
	{
		UObject* Outer = Z_Construct_UClass_AInteractableItem();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ShowRing"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Grab Interaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractableItem_NoRegister()
	{
		return AInteractableItem::StaticClass();
	}
	UClass* Z_Construct_UClass_AInteractableItem()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_WizardSchoolVR();
			OuterClass = AInteractableItem::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AInteractableItem_GetAllowObjectToBeGrabbed());
				OuterClass->LinkChild(Z_Construct_UFunction_AInteractableItem_GetAllowObjectToBeLevitated());
				OuterClass->LinkChild(Z_Construct_UFunction_AInteractableItem_GetIsBeingInteractedWith());
				OuterClass->LinkChild(Z_Construct_UFunction_AInteractableItem_LerpPosition());
				OuterClass->LinkChild(Z_Construct_UFunction_AInteractableItem_SetAllowObjectToBeGrabbed());
				OuterClass->LinkChild(Z_Construct_UFunction_AInteractableItem_SetAllowObjectToBeLevitated());
				OuterClass->LinkChild(Z_Construct_UFunction_AInteractableItem_SetIsBeingInteractedWith());
				OuterClass->LinkChild(Z_Construct_UFunction_AInteractableItem_ShowRing());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsBeingInteractedWith, AInteractableItem);
				UProperty* NewProp_bIsBeingInteractedWith = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsBeingInteractedWith"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsBeingInteractedWith, AInteractableItem), 0x0020080000002005, CPP_BOOL_PROPERTY_BITMASK(bIsBeingInteractedWith, AInteractableItem), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowObjectToBeLevitated, AInteractableItem);
				UProperty* NewProp_bAllowObjectToBeLevitated = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAllowObjectToBeLevitated"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowObjectToBeLevitated, AInteractableItem), 0x0020080000010001, CPP_BOOL_PROPERTY_BITMASK(bAllowObjectToBeLevitated, AInteractableItem), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowObjectToBeGrabbed, AInteractableItem);
				UProperty* NewProp_bAllowObjectToBeGrabbed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAllowObjectToBeGrabbed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowObjectToBeGrabbed, AInteractableItem), 0x0020080000002005, CPP_BOOL_PROPERTY_BITMASK(bAllowObjectToBeGrabbed, AInteractableItem), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractableItem_GetAllowObjectToBeGrabbed(), "GetAllowObjectToBeGrabbed"); // 3677168422
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractableItem_GetAllowObjectToBeLevitated(), "GetAllowObjectToBeLevitated"); // 1998492408
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractableItem_GetIsBeingInteractedWith(), "GetIsBeingInteractedWith"); // 187862049
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractableItem_LerpPosition(), "LerpPosition"); // 1300483691
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractableItem_SetAllowObjectToBeGrabbed(), "SetAllowObjectToBeGrabbed"); // 3700843980
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractableItem_SetAllowObjectToBeLevitated(), "SetAllowObjectToBeLevitated"); // 2175669010
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractableItem_SetIsBeingInteractedWith(), "SetIsBeingInteractedWith"); // 1508639337
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractableItem_ShowRing(), "ShowRing"); // 500272681
				static TCppClassTypeInfo<TCppClassTypeTraits<AInteractableItem> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InteractableItem.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
				MetaData->SetValue(NewProp_bIsBeingInteractedWith, TEXT("Category"), TEXT("InteractableItem"));
				MetaData->SetValue(NewProp_bIsBeingInteractedWith, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
				MetaData->SetValue(NewProp_bAllowObjectToBeLevitated, TEXT("Category"), TEXT("InteractableItem"));
				MetaData->SetValue(NewProp_bAllowObjectToBeLevitated, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
				MetaData->SetValue(NewProp_bAllowObjectToBeGrabbed, TEXT("Category"), TEXT("InteractableItem"));
				MetaData->SetValue(NewProp_bAllowObjectToBeGrabbed, TEXT("ModuleRelativePath"), TEXT("InteractableItem.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableItem, 4267691829);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableItem(Z_Construct_UClass_AInteractableItem, &AInteractableItem::StaticClass, TEXT("/Script/WizardSchoolVR"), TEXT("AInteractableItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
