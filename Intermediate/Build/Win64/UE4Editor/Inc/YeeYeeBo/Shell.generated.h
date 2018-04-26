// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef YEEYEEBO_Shell_generated_h
#error "Shell.generated.h already included, missing '#pragma once' in Shell.h"
#endif
#define YEEYEEBO_Shell_generated_h

#define YeeYeeBo_Source_YeeYeeBo_Shell_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitVelocity) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ShootDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitVelocity(Z_Param_Out_ShootDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define YeeYeeBo_Source_YeeYeeBo_Shell_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitVelocity) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ShootDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitVelocity(Z_Param_Out_ShootDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define YeeYeeBo_Source_YeeYeeBo_Shell_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShell(); \
	friend YEEYEEBO_API class UClass* Z_Construct_UClass_AShell(); \
public: \
	DECLARE_CLASS(AShell, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/YeeYeeBo"), NO_API) \
	DECLARE_SERIALIZER(AShell) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define YeeYeeBo_Source_YeeYeeBo_Shell_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAShell(); \
	friend YEEYEEBO_API class UClass* Z_Construct_UClass_AShell(); \
public: \
	DECLARE_CLASS(AShell, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/YeeYeeBo"), NO_API) \
	DECLARE_SERIALIZER(AShell) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define YeeYeeBo_Source_YeeYeeBo_Shell_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShell(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShell); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShell(AShell&&); \
	NO_API AShell(const AShell&); \
public:


#define YeeYeeBo_Source_YeeYeeBo_Shell_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShell(AShell&&); \
	NO_API AShell(const AShell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShell)


#define YeeYeeBo_Source_YeeYeeBo_Shell_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AShell, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AShell, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__Shell() { return STRUCT_OFFSET(AShell, Shell); }


#define YeeYeeBo_Source_YeeYeeBo_Shell_h_10_PROLOG
#define YeeYeeBo_Source_YeeYeeBo_Shell_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YeeYeeBo_Source_YeeYeeBo_Shell_h_13_PRIVATE_PROPERTY_OFFSET \
	YeeYeeBo_Source_YeeYeeBo_Shell_h_13_RPC_WRAPPERS \
	YeeYeeBo_Source_YeeYeeBo_Shell_h_13_INCLASS \
	YeeYeeBo_Source_YeeYeeBo_Shell_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define YeeYeeBo_Source_YeeYeeBo_Shell_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YeeYeeBo_Source_YeeYeeBo_Shell_h_13_PRIVATE_PROPERTY_OFFSET \
	YeeYeeBo_Source_YeeYeeBo_Shell_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	YeeYeeBo_Source_YeeYeeBo_Shell_h_13_INCLASS_NO_PURE_DECLS \
	YeeYeeBo_Source_YeeYeeBo_Shell_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID YeeYeeBo_Source_YeeYeeBo_Shell_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
