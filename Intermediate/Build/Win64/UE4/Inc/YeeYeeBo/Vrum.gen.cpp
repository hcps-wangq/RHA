// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Vrum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrum() {}
// Cross Module References
	YEEYEEBO_API UEnum* Z_Construct_UEnum_YeeYeeBo_ETankDifferential();
	UPackage* Z_Construct_UPackage__Script_YeeYeeBo();
	YEEYEEBO_API UScriptStruct* Z_Construct_UScriptStruct_FTankTransmissionData();
	YEEYEEBO_API UScriptStruct* Z_Construct_UScriptStruct_FTankGearData();
	YEEYEEBO_API UScriptStruct* Z_Construct_UScriptStruct_FTankEngineData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	YEEYEEBO_API UScriptStruct* Z_Construct_UScriptStruct_FTankDifferentialData();
	YEEYEEBO_API UClass* Z_Construct_UClass_UVrum_NoRegister();
	YEEYEEBO_API UClass* Z_Construct_UClass_UVrum();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent();
// End Cross Module References
	static UEnum* ETankDifferential_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_YeeYeeBo_ETankDifferential, Z_Construct_UPackage__Script_YeeYeeBo(), TEXT("ETankDifferential"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETankDifferential(ETankDifferential_StaticEnum, TEXT("/Script/YeeYeeBo"), TEXT("ETankDifferential"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_YeeYeeBo_ETankDifferential_CRC() { return 3297958750U; }
	UEnum* Z_Construct_UEnum_YeeYeeBo_ETankDifferential()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_YeeYeeBo();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETankDifferential"), 0, Get_Z_Construct_UEnum_YeeYeeBo_ETankDifferential_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETankDifferential::LimitedSlipWheel", (int64)ETankDifferential::LimitedSlipWheel },
				{ "ETankDifferential::OpenWheel", (int64)ETankDifferential::OpenWheel },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Vrum.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_YeeYeeBo,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETankDifferential",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETankDifferential::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTankTransmissionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEEYEEBO_API uint32 Get_Z_Construct_UScriptStruct_FTankTransmissionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTankTransmissionData, Z_Construct_UPackage__Script_YeeYeeBo(), TEXT("TankTransmissionData"), sizeof(FTankTransmissionData), Get_Z_Construct_UScriptStruct_FTankTransmissionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTankTransmissionData(FTankTransmissionData::StaticStruct, TEXT("/Script/YeeYeeBo"), TEXT("TankTransmissionData"), false, nullptr, nullptr);
static struct FScriptStruct_YeeYeeBo_StaticRegisterNativesFTankTransmissionData
{
	FScriptStruct_YeeYeeBo_StaticRegisterNativesFTankTransmissionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TankTransmissionData")),new UScriptStruct::TCppStructOps<FTankTransmissionData>);
	}
} ScriptStruct_YeeYeeBo_StaticRegisterNativesFTankTransmissionData;
	UScriptStruct* Z_Construct_UScriptStruct_FTankTransmissionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTankTransmissionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_YeeYeeBo();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TankTransmissionData"), sizeof(FTankTransmissionData), Get_Z_Construct_UScriptStruct_FTankTransmissionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Vrum.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTankTransmissionData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClutchStrength_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Strength of clutch (Kgm^2/s)" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClutchStrength = { UE4CodeGen_Private::EPropertyClass::Float, "ClutchStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FTankTransmissionData, ClutchStrength), METADATA_PARAMS(NewProp_ClutchStrength_MetaData, ARRAY_COUNT(NewProp_ClutchStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeutralGearUpRatio_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Value of engineRevs/maxEngineRevs that is high enough to increment gear" },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeutralGearUpRatio = { UE4CodeGen_Private::EPropertyClass::Float, "NeutralGearUpRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FTankTransmissionData, NeutralGearUpRatio), METADATA_PARAMS(NewProp_NeutralGearUpRatio_MetaData, ARRAY_COUNT(NewProp_NeutralGearUpRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseGearRatio_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Reverse gear ratio" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverseGearRatio = { UE4CodeGen_Private::EPropertyClass::Float, "ReverseGearRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FTankTransmissionData, ReverseGearRatio), METADATA_PARAMS(NewProp_ReverseGearRatio_MetaData, ARRAY_COUNT(NewProp_ReverseGearRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardGears_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Forward gear ratios (up to 30)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForwardGears = { UE4CodeGen_Private::EPropertyClass::Array, "ForwardGears", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FTankTransmissionData, ForwardGears), METADATA_PARAMS(NewProp_ForwardGears_MetaData, ARRAY_COUNT(NewProp_ForwardGears_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardGears_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ForwardGears", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTankGearData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalRatio_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "The final gear ratio multiplies the transmission gear ratios." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FinalRatio = { UE4CodeGen_Private::EPropertyClass::Float, "FinalRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FTankTransmissionData, FinalRatio), METADATA_PARAMS(NewProp_FinalRatio_MetaData, ARRAY_COUNT(NewProp_FinalRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearAutoBoxLatency_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bUseGearAutoBox" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Minimum time it takes the automatic transmission to initiate a gear change (seconds)" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GearAutoBoxLatency = { UE4CodeGen_Private::EPropertyClass::Float, "GearAutoBoxLatency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTankTransmissionData, GearAutoBoxLatency), METADATA_PARAMS(NewProp_GearAutoBoxLatency_MetaData, ARRAY_COUNT(NewProp_GearAutoBoxLatency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearSwitchTime_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Time it takes to switch gears (seconds)" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GearSwitchTime = { UE4CodeGen_Private::EPropertyClass::Float, "GearSwitchTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTankTransmissionData, GearSwitchTime), METADATA_PARAMS(NewProp_GearSwitchTime_MetaData, ARRAY_COUNT(NewProp_GearSwitchTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGearAutoBox_MetaData[] = {
				{ "Category", "VehicleSetup" },
				{ "DisplayName", "Automatic Transmission" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Whether to use automatic transmission" },
			};
#endif
			auto NewProp_bUseGearAutoBox_SetBit = [](void* Obj){ ((FTankTransmissionData*)Obj)->bUseGearAutoBox = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGearAutoBox = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGearAutoBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTankTransmissionData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseGearAutoBox_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseGearAutoBox_MetaData, ARRAY_COUNT(NewProp_bUseGearAutoBox_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClutchStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NeutralGearUpRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReverseGearRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForwardGears,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForwardGears_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FinalRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearAutoBoxLatency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearSwitchTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseGearAutoBox,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_YeeYeeBo,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TankTransmissionData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTankTransmissionData),
				alignof(FTankTransmissionData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTankTransmissionData_CRC() { return 2794208535U; }
class UScriptStruct* FTankGearData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEEYEEBO_API uint32 Get_Z_Construct_UScriptStruct_FTankGearData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTankGearData, Z_Construct_UPackage__Script_YeeYeeBo(), TEXT("TankGearData"), sizeof(FTankGearData), Get_Z_Construct_UScriptStruct_FTankGearData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTankGearData(FTankGearData::StaticStruct, TEXT("/Script/YeeYeeBo"), TEXT("TankGearData"), false, nullptr, nullptr);
static struct FScriptStruct_YeeYeeBo_StaticRegisterNativesFTankGearData
{
	FScriptStruct_YeeYeeBo_StaticRegisterNativesFTankGearData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TankGearData")),new UScriptStruct::TCppStructOps<FTankGearData>);
	}
} ScriptStruct_YeeYeeBo_StaticRegisterNativesFTankGearData;
	UScriptStruct* Z_Construct_UScriptStruct_FTankGearData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTankGearData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_YeeYeeBo();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TankGearData"), sizeof(FTankGearData), Get_Z_Construct_UScriptStruct_FTankGearData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Vrum.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTankGearData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpRatio_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Value of engineRevs/maxEngineRevs that is high enough to gear up" },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpRatio = { UE4CodeGen_Private::EPropertyClass::Float, "UpRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTankGearData, UpRatio), METADATA_PARAMS(NewProp_UpRatio_MetaData, ARRAY_COUNT(NewProp_UpRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownRatio_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Value of engineRevs/maxEngineRevs that is low enough to gear down" },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownRatio = { UE4CodeGen_Private::EPropertyClass::Float, "DownRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTankGearData, DownRatio), METADATA_PARAMS(NewProp_DownRatio_MetaData, ARRAY_COUNT(NewProp_DownRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Determines the amount of torque multiplication" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio = { UE4CodeGen_Private::EPropertyClass::Float, "Ratio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTankGearData, Ratio), METADATA_PARAMS(NewProp_Ratio_MetaData, ARRAY_COUNT(NewProp_Ratio_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DownRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ratio,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_YeeYeeBo,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TankGearData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTankGearData),
				alignof(FTankGearData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTankGearData_CRC() { return 3604304819U; }
class UScriptStruct* FTankEngineData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEEYEEBO_API uint32 Get_Z_Construct_UScriptStruct_FTankEngineData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTankEngineData, Z_Construct_UPackage__Script_YeeYeeBo(), TEXT("TankEngineData"), sizeof(FTankEngineData), Get_Z_Construct_UScriptStruct_FTankEngineData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTankEngineData(FTankEngineData::StaticStruct, TEXT("/Script/YeeYeeBo"), TEXT("TankEngineData"), false, nullptr, nullptr);
static struct FScriptStruct_YeeYeeBo_StaticRegisterNativesFTankEngineData
{
	FScriptStruct_YeeYeeBo_StaticRegisterNativesFTankEngineData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TankEngineData")),new UScriptStruct::TCppStructOps<FTankEngineData>);
	}
} ScriptStruct_YeeYeeBo_StaticRegisterNativesFTankEngineData;
	UScriptStruct* Z_Construct_UScriptStruct_FTankEngineData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTankEngineData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_YeeYeeBo();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TankEngineData"), sizeof(FTankEngineData), Get_Z_Construct_UScriptStruct_FTankEngineData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Vrum.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTankEngineData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Damping rate of engine in at zero throttle when the clutch is disengaged (in neutral gear) (Kgm^2/s)" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateZeroThrottleClutchDisengaged = { UE4CodeGen_Private::EPropertyClass::Float, "DampingRateZeroThrottleClutchDisengaged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FTankEngineData, DampingRateZeroThrottleClutchDisengaged), METADATA_PARAMS(NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData, ARRAY_COUNT(NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateZeroThrottleClutchEngaged_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Damping rate of engine in at zero throttle when the clutch is engaged (Kgm^2/s)" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateZeroThrottleClutchEngaged = { UE4CodeGen_Private::EPropertyClass::Float, "DampingRateZeroThrottleClutchEngaged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FTankEngineData, DampingRateZeroThrottleClutchEngaged), METADATA_PARAMS(NewProp_DampingRateZeroThrottleClutchEngaged_MetaData, ARRAY_COUNT(NewProp_DampingRateZeroThrottleClutchEngaged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateFullThrottle_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Damping rate of engine when full throttle is applied (Kgm^2/s)" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateFullThrottle = { UE4CodeGen_Private::EPropertyClass::Float, "DampingRateFullThrottle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FTankEngineData, DampingRateFullThrottle), METADATA_PARAMS(NewProp_DampingRateFullThrottle_MetaData, ARRAY_COUNT(NewProp_DampingRateFullThrottle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MOI_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMin", "0.01" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Moment of inertia of the engine around the axis of rotation (Kgm^2)." },
				{ "UIMin", "0.01" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MOI = { UE4CodeGen_Private::EPropertyClass::Float, "MOI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTankEngineData, MOI), METADATA_PARAMS(NewProp_MOI_MetaData, ARRAY_COUNT(NewProp_MOI_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRPM_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMin", "0.01" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Maximum revolutions per minute of the engine" },
				{ "UIMin", "0.01" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRPM = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRPM", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTankEngineData, MaxRPM), METADATA_PARAMS(NewProp_MaxRPM_MetaData, ARRAY_COUNT(NewProp_MaxRPM_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorqueCurve_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Torque (Nm) at a given RPM" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TorqueCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "TorqueCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTankEngineData, TorqueCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_TorqueCurve_MetaData, ARRAY_COUNT(NewProp_TorqueCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DampingRateZeroThrottleClutchDisengaged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DampingRateZeroThrottleClutchEngaged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DampingRateFullThrottle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MOI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRPM,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TorqueCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_YeeYeeBo,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TankEngineData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTankEngineData),
				alignof(FTankEngineData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTankEngineData_CRC() { return 2111020545U; }
class UScriptStruct* FTankDifferentialData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEEYEEBO_API uint32 Get_Z_Construct_UScriptStruct_FTankDifferentialData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTankDifferentialData, Z_Construct_UPackage__Script_YeeYeeBo(), TEXT("TankDifferentialData"), sizeof(FTankDifferentialData), Get_Z_Construct_UScriptStruct_FTankDifferentialData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTankDifferentialData(FTankDifferentialData::StaticStruct, TEXT("/Script/YeeYeeBo"), TEXT("TankDifferentialData"), false, nullptr, nullptr);
static struct FScriptStruct_YeeYeeBo_StaticRegisterNativesFTankDifferentialData
{
	FScriptStruct_YeeYeeBo_StaticRegisterNativesFTankDifferentialData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TankDifferentialData")),new UScriptStruct::TCppStructOps<FTankDifferentialData>);
	}
} ScriptStruct_YeeYeeBo_StaticRegisterNativesFTankDifferentialData;
	UScriptStruct* Z_Construct_UScriptStruct_FTankDifferentialData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTankDifferentialData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_YeeYeeBo();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TankDifferentialData"), sizeof(FTankDifferentialData), Get_Z_Construct_UScriptStruct_FTankDifferentialData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Vrum.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTankDifferentialData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRightSplit_MetaData[] = {
				{ "Category", "Setup" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Ratio of torque split between left and right (>0.5 means more to left, <0.5 means more to right)" },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftRightSplit = { UE4CodeGen_Private::EPropertyClass::Float, "LeftRightSplit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTankDifferentialData, LeftRightSplit), METADATA_PARAMS(NewProp_LeftRightSplit_MetaData, ARRAY_COUNT(NewProp_LeftRightSplit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifferentialType_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Type of differential" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DifferentialType = { UE4CodeGen_Private::EPropertyClass::Byte, "DifferentialType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTankDifferentialData, DifferentialType), Z_Construct_UEnum_YeeYeeBo_ETankDifferential, METADATA_PARAMS(NewProp_DifferentialType_MetaData, ARRAY_COUNT(NewProp_DifferentialType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftRightSplit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DifferentialType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_YeeYeeBo,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TankDifferentialData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTankDifferentialData),
				alignof(FTankDifferentialData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTankDifferentialData_CRC() { return 2239225181U; }
	void UVrum::StaticRegisterNativesUVrum()
	{
	}
	UClass* Z_Construct_UClass_UVrum_NoRegister()
	{
		return UVrum::StaticClass();
	}
	UClass* Z_Construct_UClass_UVrum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWheeledVehicleMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_YeeYeeBo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "PlanarMovement Components|Movement|Planar Activation Components|Activation" },
				{ "IncludePath", "Vrum.h" },
				{ "ModuleRelativePath", "Vrum.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringCurve_MetaData[] = {
				{ "Category", "SteeringSetup" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Maximum steering versus forward speed (km/h)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteeringCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "SteeringCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVrum, SteeringCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_SteeringCurve_MetaData, ARRAY_COUNT(NewProp_SteeringCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmissionSetup_MetaData[] = {
				{ "Category", "MechanicalSetup" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Transmission data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransmissionSetup = { UE4CodeGen_Private::EPropertyClass::Struct, "TransmissionSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVrum, TransmissionSetup), Z_Construct_UScriptStruct_FTankTransmissionData, METADATA_PARAMS(NewProp_TransmissionSetup_MetaData, ARRAY_COUNT(NewProp_TransmissionSetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifferentialSetup_MetaData[] = {
				{ "Category", "MechanicalSetup" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Differential" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DifferentialSetup = { UE4CodeGen_Private::EPropertyClass::Struct, "DifferentialSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVrum, DifferentialSetup), Z_Construct_UScriptStruct_FTankDifferentialData, METADATA_PARAMS(NewProp_DifferentialSetup_MetaData, ARRAY_COUNT(NewProp_DifferentialSetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSetup_MetaData[] = {
				{ "Category", "MechanicalSetup" },
				{ "ModuleRelativePath", "Vrum.h" },
				{ "ToolTip", "Engine" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EngineSetup = { UE4CodeGen_Private::EPropertyClass::Struct, "EngineSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVrum, EngineSetup), Z_Construct_UScriptStruct_FTankEngineData, METADATA_PARAMS(NewProp_EngineSetup_MetaData, ARRAY_COUNT(NewProp_EngineSetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumWheels_MetaData[] = {
				{ "Category", "Vehicle" },
				{ "ModuleRelativePath", "Vrum.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumWheels = { UE4CodeGen_Private::EPropertyClass::Int, "NumWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVrum, NumWheels), METADATA_PARAMS(NewProp_NumWheels_MetaData, ARRAY_COUNT(NewProp_NumWheels_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransmissionSetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DifferentialSetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineSetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumWheels,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVrum>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVrum::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrum, 264725863);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrum(Z_Construct_UClass_UVrum, &UVrum::StaticClass, TEXT("/Script/YeeYeeBo"), TEXT("UVrum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
