// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Tunk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTunk() {}
// Cross Module References
	YEEYEEBO_API UClass* Z_Construct_UClass_ATunk_NoRegister();
	YEEYEEBO_API UClass* Z_Construct_UClass_ATunk();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_YeeYeeBo();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	YEEYEEBO_API UClass* Z_Construct_UClass_AShell_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATunk::StaticRegisterNativesATunk()
	{
	}
	UClass* Z_Construct_UClass_ATunk_NoRegister()
	{
		return ATunk::StaticClass();
	}
	UClass* Z_Construct_UClass_ATunk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_YeeYeeBo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Tunk.h" },
				{ "ModuleRelativePath", "Tunk.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SArm_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
				{ "ToolTip", "void CreateTread(USplineComponent line, UStaticMeshComponent plate, int numPlates);" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SArm = { UE4CodeGen_Private::EPropertyClass::Object, "SArm", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ATunk, SArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SArm_MetaData, ARRAY_COUNT(NewProp_SArm_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_length_MetaData[] = {
				{ "Category", "Tunk" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_length = { UE4CodeGen_Private::EPropertyClass::Float, "length", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATunk, length), METADATA_PARAMS(NewProp_length_MetaData, ARRAY_COUNT(NewProp_length_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currLen_MetaData[] = {
				{ "Category", "Tunk" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currLen = { UE4CodeGen_Private::EPropertyClass::Float, "currLen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATunk, currLen), METADATA_PARAMS(NewProp_currLen_MetaData, ARRAY_COUNT(NewProp_currLen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lenPoints_MetaData[] = {
				{ "Category", "Tunk" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lenPoints = { UE4CodeGen_Private::EPropertyClass::Float, "lenPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATunk, lenPoints), METADATA_PARAMS(NewProp_lenPoints_MetaData, ARRAY_COUNT(NewProp_lenPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numPlates_MetaData[] = {
				{ "Category", "Tunk" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numPlates = { UE4CodeGen_Private::EPropertyClass::Int, "numPlates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATunk, numPlates), METADATA_PARAMS(NewProp_numPlates_MetaData, ARRAY_COUNT(NewProp_numPlates_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATunk, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TSpline_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TSpline = { UE4CodeGen_Private::EPropertyClass::Object, "TSpline", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATunk, TSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(NewProp_TSpline_MetaData, ARRAY_COUNT(NewProp_TSpline_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TLink_MetaData[] = {
				{ "Category", "Tunk" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TLink = { UE4CodeGen_Private::EPropertyClass::Object, "TLink", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATunk, TLink), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_TLink_MetaData, ARRAY_COUNT(NewProp_TLink_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(ATunk, ProjectileClass), Z_Construct_UClass_AShell_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileClass_MetaData, ARRAY_COUNT(NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[] = {
				{ "Category", "Tunk" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "GunOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATunk, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_GunOffset_MetaData, ARRAY_COUNT(NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleLoc_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleLoc = { UE4CodeGen_Private::EPropertyClass::Object, "MuzzleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(ATunk, MuzzleLoc), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_MuzzleLoc_MetaData, ARRAY_COUNT(NewProp_MuzzleLoc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cannon_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cannon = { UE4CodeGen_Private::EPropertyClass::Object, "Cannon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATunk, Cannon), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Cannon_MetaData, ARRAY_COUNT(NewProp_Cannon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RWheel_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RWheel = { UE4CodeGen_Private::EPropertyClass::Object, "RWheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATunk, RWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_RWheel_MetaData, ARRAY_COUNT(NewProp_RWheel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LWheel_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LWheel = { UE4CodeGen_Private::EPropertyClass::Object, "LWheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATunk, LWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_LWheel_MetaData, ARRAY_COUNT(NewProp_LWheel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTread_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTread = { UE4CodeGen_Private::EPropertyClass::Object, "RTread", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATunk, RTread), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_RTread_MetaData, ARRAY_COUNT(NewProp_RTread_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LTread_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LTread = { UE4CodeGen_Private::EPropertyClass::Object, "LTread", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATunk, LTread), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_LTread_MetaData, ARRAY_COUNT(NewProp_LTread_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Turret_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Turret = { UE4CodeGen_Private::EPropertyClass::Object, "Turret", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATunk, Turret), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Turret_MetaData, ARRAY_COUNT(NewProp_Turret_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body = { UE4CodeGen_Private::EPropertyClass::Object, "Body", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATunk, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Body_MetaData, ARRAY_COUNT(NewProp_Body_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
				{ "Category", "Tunk" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Tunk.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root = { UE4CodeGen_Private::EPropertyClass::Object, "Root", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATunk, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Root_MetaData, ARRAY_COUNT(NewProp_Root_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SArm,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_length,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_currLen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_lenPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_numPlates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TSpline,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TLink,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GunOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuzzleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cannon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RWheel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LWheel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RTread,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LTread,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Turret,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Body,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Root,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATunk>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATunk::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATunk, 1920661792);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATunk(Z_Construct_UClass_ATunk, &ATunk::StaticClass, TEXT("/Script/YeeYeeBo"), TEXT("ATunk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATunk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
