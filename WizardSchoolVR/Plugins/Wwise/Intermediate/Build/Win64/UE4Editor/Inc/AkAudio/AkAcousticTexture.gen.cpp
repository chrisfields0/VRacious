// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkAcousticTexture.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticTexture() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UAkAcousticTexture::StaticRegisterNativesUAkAcousticTexture()
	{
	}
	UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister()
	{
		return UAkAcousticTexture::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkAcousticTexture()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkAcousticTexture::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


#if WITH_EDITORONLY_DATA
				UProperty* NewProp_EditColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EditColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EditColor, UAkAcousticTexture), 0x0010000800000001, Z_Construct_UScriptStruct_FLinearColor());
#endif // WITH_EDITORONLY_DATA
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkAcousticTexture> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkAcousticTexture.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkAcousticTexture.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UAkAudioEvent"));
				MetaData->SetValue(NewProp_EditColor, TEXT("Category"), TEXT("AkTexture"));
				MetaData->SetValue(NewProp_EditColor, TEXT("ModuleRelativePath"), TEXT("Classes/AkAcousticTexture.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAcousticTexture, 315243448);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAcousticTexture(Z_Construct_UClass_UAkAcousticTexture, &UAkAcousticTexture::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAcousticTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAcousticTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
