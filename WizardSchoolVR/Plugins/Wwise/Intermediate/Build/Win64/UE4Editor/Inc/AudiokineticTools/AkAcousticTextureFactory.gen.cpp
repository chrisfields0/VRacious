// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/AudiokineticToolsPrivatePCH.h"
#include "Classes/AkAcousticTextureFactory.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticTextureFactory() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAcousticTextureFactory_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAcousticTextureFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UAkAcousticTextureFactory::StaticRegisterNativesUAkAcousticTextureFactory()
	{
	}
	UClass* Z_Construct_UClass_UAkAcousticTextureFactory_NoRegister()
	{
		return UAkAcousticTextureFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkAcousticTextureFactory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UFactory();
			Z_Construct_UPackage__Script_AudiokineticTools();
			OuterClass = UAkAcousticTextureFactory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UAkAcousticTextureFactory> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkAcousticTextureFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkAcousticTextureFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UAkAcousticTextureFactory"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAcousticTextureFactory, 38630088);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAcousticTextureFactory(Z_Construct_UClass_UAkAcousticTextureFactory, &UAkAcousticTextureFactory::StaticClass, TEXT("/Script/AudiokineticTools"), TEXT("UAkAcousticTextureFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAcousticTextureFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
