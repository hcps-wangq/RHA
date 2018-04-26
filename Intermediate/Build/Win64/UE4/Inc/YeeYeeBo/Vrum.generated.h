// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEEYEEBO_Vrum_generated_h
#error "Vrum.generated.h already included, missing '#pragma once' in Vrum.h"
#endif
#define YEEYEEBO_Vrum_generated_h

#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_93_GENERATED_BODY \
	friend YEEYEEBO_API class UScriptStruct* Z_Construct_UScriptStruct_FTankTransmissionData(); \
	YEEYEEBO_API static class UScriptStruct* StaticStruct();


#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_75_GENERATED_BODY \
	friend YEEYEEBO_API class UScriptStruct* Z_Construct_UScriptStruct_FTankGearData(); \
	YEEYEEBO_API static class UScriptStruct* StaticStruct();


#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_42_GENERATED_BODY \
	friend YEEYEEBO_API class UScriptStruct* Z_Construct_UScriptStruct_FTankEngineData(); \
	YEEYEEBO_API static class UScriptStruct* StaticStruct();


#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_28_GENERATED_BODY \
	friend YEEYEEBO_API class UScriptStruct* Z_Construct_UScriptStruct_FTankDifferentialData(); \
	YEEYEEBO_API static class UScriptStruct* StaticStruct();


#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_RPC_WRAPPERS
#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_RPC_WRAPPERS_NO_PURE_DECLS
#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrum(); \
	friend YEEYEEBO_API class UClass* Z_Construct_UClass_UVrum(); \
public: \
	DECLARE_CLASS(UVrum, UWheeledVehicleMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/YeeYeeBo"), NO_API) \
	DECLARE_SERIALIZER(UVrum) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_INCLASS \
private: \
	static void StaticRegisterNativesUVrum(); \
	friend YEEYEEBO_API class UClass* Z_Construct_UClass_UVrum(); \
public: \
	DECLARE_CLASS(UVrum, UWheeledVehicleMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/YeeYeeBo"), NO_API) \
	DECLARE_SERIALIZER(UVrum) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrum); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrum(UVrum&&); \
	NO_API UVrum(const UVrum&); \
public:


#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrum(UVrum&&); \
	NO_API UVrum(const UVrum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrum)


#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_PRIVATE_PROPERTY_OFFSET
#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_127_PROLOG
#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_PRIVATE_PROPERTY_OFFSET \
	YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_RPC_WRAPPERS \
	YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_INCLASS \
	YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_PRIVATE_PROPERTY_OFFSET \
	YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
	YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_INCLASS_NO_PURE_DECLS \
	YeeYeeBo_Source_YeeYeeBo_Vrum_h_131_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Vrum."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID YeeYeeBo_Source_YeeYeeBo_Vrum_h


#define FOREACH_ENUM_ETANKDIFFERENTIAL(op) \
	op(ETankDifferential::LimitedSlipWheel) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
