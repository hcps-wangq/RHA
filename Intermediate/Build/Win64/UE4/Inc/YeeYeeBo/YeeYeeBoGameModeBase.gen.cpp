// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "YeeYeeBoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYeeYeeBoGameModeBase() {}
// Cross Module References
	YEEYEEBO_API UClass* Z_Construct_UClass_AYeeYeeBoGameModeBase_NoRegister();
	YEEYEEBO_API UClass* Z_Construct_UClass_AYeeYeeBoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_YeeYeeBo();
// End Cross Module References
	void AYeeYeeBoGameModeBase::StaticRegisterNativesAYeeYeeBoGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AYeeYeeBoGameModeBase_NoRegister()
	{
		return AYeeYeeBoGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AYeeYeeBoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_YeeYeeBo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "YeeYeeBoGameModeBase.h" },
				{ "ModuleRelativePath", "YeeYeeBoGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AYeeYeeBoGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AYeeYeeBoGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AYeeYeeBoGameModeBase, 2306798155);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AYeeYeeBoGameModeBase(Z_Construct_UClass_AYeeYeeBoGameModeBase, &AYeeYeeBoGameModeBase::StaticClass, TEXT("/Script/YeeYeeBo"), TEXT("AYeeYeeBoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AYeeYeeBoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
