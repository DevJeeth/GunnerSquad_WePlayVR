// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunnerSquad_WePlayVR/OpsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpsManager() {}
// Cross Module References
	GUNNERSQUAD_WEPLAYVR_API UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eInputNameType();
	UPackage* Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
	GUNNERSQUAD_WEPLAYVR_API UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eBuildType();
	GUNNERSQUAD_WEPLAYVR_API UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eDeviceStatus();
	GUNNERSQUAD_WEPLAYVR_API UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eDeviceType();
	GUNNERSQUAD_WEPLAYVR_API UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eAttractionType();
	GUNNERSQUAD_WEPLAYVR_API UScriptStruct* Z_Construct_UScriptStruct_FOPS_GameServerClientData();
	GUNNERSQUAD_WEPLAYVR_API UScriptStruct* Z_Construct_UScriptStruct_FOPS_GameServerData();
	GUNNERSQUAD_WEPLAYVR_API UScriptStruct* Z_Construct_UScriptStruct_FstructOPS_StartData();
	GUNNERSQUAD_WEPLAYVR_API UScriptStruct* Z_Construct_UScriptStruct_FstructOPS_Data();
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_UOpsManager_NoRegister();
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_UOpsManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* eInputNameType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GunnerSquad_WePlayVR_eInputNameType, Z_Construct_UPackage__Script_GunnerSquad_WePlayVR(), TEXT("eInputNameType"));
		}
		return Singleton;
	}
	template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eInputNameType>()
	{
		return eInputNameType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eInputNameType(eInputNameType_StaticEnum, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("eInputNameType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GunnerSquad_WePlayVR_eInputNameType_Hash() { return 2084705892U; }
	UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eInputNameType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eInputNameType"), 0, Get_Z_Construct_UEnum_GunnerSquad_WePlayVR_eInputNameType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eInputNameType::None", (int64)eInputNameType::None },
				{ "eInputNameType::PlayerName", (int64)eInputNameType::PlayerName },
				{ "eInputNameType::TeamName", (int64)eInputNameType::TeamName },
				{ "eInputNameType::All", (int64)eInputNameType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpsManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
				nullptr,
				"eInputNameType",
				"eInputNameType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* eBuildType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GunnerSquad_WePlayVR_eBuildType, Z_Construct_UPackage__Script_GunnerSquad_WePlayVR(), TEXT("eBuildType"));
		}
		return Singleton;
	}
	template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eBuildType>()
	{
		return eBuildType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eBuildType(eBuildType_StaticEnum, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("eBuildType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GunnerSquad_WePlayVR_eBuildType_Hash() { return 3538440561U; }
	UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eBuildType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eBuildType"), 0, Get_Z_Construct_UEnum_GunnerSquad_WePlayVR_eBuildType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eBuildType::iGame", (int64)eBuildType::iGame },
				{ "eBuildType::iStreamer", (int64)eBuildType::iStreamer },
				{ "eBuildType::iServer", (int64)eBuildType::iServer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpsManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
				nullptr,
				"eBuildType",
				"eBuildType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* eDeviceStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GunnerSquad_WePlayVR_eDeviceStatus, Z_Construct_UPackage__Script_GunnerSquad_WePlayVR(), TEXT("eDeviceStatus"));
		}
		return Singleton;
	}
	template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eDeviceStatus>()
	{
		return eDeviceStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eDeviceStatus(eDeviceStatus_StaticEnum, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("eDeviceStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GunnerSquad_WePlayVR_eDeviceStatus_Hash() { return 3552460474U; }
	UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eDeviceStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eDeviceStatus"), 0, Get_Z_Construct_UEnum_GunnerSquad_WePlayVR_eDeviceStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eDeviceStatus::iNotConnected", (int64)eDeviceStatus::iNotConnected },
				{ "eDeviceStatus::iConnected", (int64)eDeviceStatus::iConnected },
				{ "eDeviceStatus::iDisconnected", (int64)eDeviceStatus::iDisconnected },
				{ "eDeviceStatus::iStandby", (int64)eDeviceStatus::iStandby },
				{ "eDeviceStatus::iDeviceError", (int64)eDeviceStatus::iDeviceError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpsManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
				nullptr,
				"eDeviceStatus",
				"eDeviceStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* eDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GunnerSquad_WePlayVR_eDeviceType, Z_Construct_UPackage__Script_GunnerSquad_WePlayVR(), TEXT("eDeviceType"));
		}
		return Singleton;
	}
	template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eDeviceType>()
	{
		return eDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eDeviceType(eDeviceType_StaticEnum, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("eDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GunnerSquad_WePlayVR_eDeviceType_Hash() { return 2126098744U; }
	UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eDeviceType"), 0, Get_Z_Construct_UEnum_GunnerSquad_WePlayVR_eDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eDeviceType::iHMD", (int64)eDeviceType::iHMD },
				{ "eDeviceType::iVive_Controller_Left", (int64)eDeviceType::iVive_Controller_Left },
				{ "eDeviceType::iVive_Controller_Right", (int64)eDeviceType::iVive_Controller_Right },
				{ "eDeviceType::iOculus_Controller_Left", (int64)eDeviceType::iOculus_Controller_Left },
				{ "eDeviceType::iOculus_Controller_Right", (int64)eDeviceType::iOculus_Controller_Right },
				{ "eDeviceType::iVive_Lighthouse", (int64)eDeviceType::iVive_Lighthouse },
				{ "eDeviceType::IOculus_Lighthouse", (int64)eDeviceType::IOculus_Lighthouse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpsManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
				nullptr,
				"eDeviceType",
				"eDeviceType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* eAttractionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GunnerSquad_WePlayVR_eAttractionType, Z_Construct_UPackage__Script_GunnerSquad_WePlayVR(), TEXT("eAttractionType"));
		}
		return Singleton;
	}
	template<> GUNNERSQUAD_WEPLAYVR_API UEnum* StaticEnum<eAttractionType>()
	{
		return eAttractionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eAttractionType(eAttractionType_StaticEnum, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("eAttractionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GunnerSquad_WePlayVR_eAttractionType_Hash() { return 1950332305U; }
	UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eAttractionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eAttractionType"), 0, Get_Z_Construct_UEnum_GunnerSquad_WePlayVR_eAttractionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eAttractionType::iArena", (int64)eAttractionType::iArena },
				{ "eAttractionType::iMotion", (int64)eAttractionType::iMotion },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpsManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
				nullptr,
				"eAttractionType",
				"eAttractionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FOPS_GameServerClientData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GUNNERSQUAD_WEPLAYVR_API uint32 Get_Z_Construct_UScriptStruct_FOPS_GameServerClientData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOPS_GameServerClientData, Z_Construct_UPackage__Script_GunnerSquad_WePlayVR(), TEXT("OPS_GameServerClientData"), sizeof(FOPS_GameServerClientData), Get_Z_Construct_UScriptStruct_FOPS_GameServerClientData_Hash());
	}
	return Singleton;
}
template<> GUNNERSQUAD_WEPLAYVR_API UScriptStruct* StaticStruct<FOPS_GameServerClientData>()
{
	return FOPS_GameServerClientData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOPS_GameServerClientData(FOPS_GameServerClientData::StaticStruct, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("OPS_GameServerClientData"), false, nullptr, nullptr);
static struct FScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFOPS_GameServerClientData
{
	FScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFOPS_GameServerClientData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OPS_GameServerClientData")),new UScriptStruct::TCppStructOps<FOPS_GameServerClientData>);
	}
} ScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFOPS_GameServerClientData;
	struct Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientIP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOPS_GameServerClientData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "FOPS_GameServerClientData" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOPS_GameServerClientData, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::NewProp_UserName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::NewProp_ClientIP_MetaData[] = {
		{ "Category", "FOPS_GameServerClientData" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::NewProp_ClientIP = { "ClientIP", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOPS_GameServerClientData, ClientIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::NewProp_ClientIP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::NewProp_ClientIP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::NewProp_ClientIP,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
		nullptr,
		&NewStructOps,
		"OPS_GameServerClientData",
		sizeof(FOPS_GameServerClientData),
		alignof(FOPS_GameServerClientData),
		Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOPS_GameServerClientData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOPS_GameServerClientData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OPS_GameServerClientData"), sizeof(FOPS_GameServerClientData), Get_Z_Construct_UScriptStruct_FOPS_GameServerClientData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOPS_GameServerClientData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOPS_GameServerClientData_Hash() { return 2010009592U; }
class UScriptStruct* FOPS_GameServerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GUNNERSQUAD_WEPLAYVR_API uint32 Get_Z_Construct_UScriptStruct_FOPS_GameServerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOPS_GameServerData, Z_Construct_UPackage__Script_GunnerSquad_WePlayVR(), TEXT("OPS_GameServerData"), sizeof(FOPS_GameServerData), Get_Z_Construct_UScriptStruct_FOPS_GameServerData_Hash());
	}
	return Singleton;
}
template<> GUNNERSQUAD_WEPLAYVR_API UScriptStruct* StaticStruct<FOPS_GameServerData>()
{
	return FOPS_GameServerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOPS_GameServerData(FOPS_GameServerData::StaticStruct, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("OPS_GameServerData"), false, nullptr, nullptr);
static struct FScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFOPS_GameServerData
{
	FScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFOPS_GameServerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OPS_GameServerData")),new UScriptStruct::TCppStructOps<FOPS_GameServerData>);
	}
} ScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFOPS_GameServerData;
	struct Z_Construct_UScriptStruct_FOPS_GameServerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackPackIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackPackIP;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BackPackIP_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientIP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOPS_GameServerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_BackPackIP_MetaData[] = {
		{ "Category", "FOPS_GameServerData" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_BackPackIP = { "BackPackIP", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOPS_GameServerData, BackPackIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_BackPackIP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_BackPackIP_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_BackPackIP_Inner = { "BackPackIP", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_GameServerIP_MetaData[] = {
		{ "Category", "FOPS_GameServerData" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOPS_GameServerData, GameServerIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_GameServerIP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_GameServerIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_ClientIP_MetaData[] = {
		{ "Category", "FOPS_GameServerData" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_ClientIP = { "ClientIP", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOPS_GameServerData, ClientIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_ClientIP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_ClientIP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_BackPackIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_BackPackIP_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_GameServerIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::NewProp_ClientIP,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
		nullptr,
		&NewStructOps,
		"OPS_GameServerData",
		sizeof(FOPS_GameServerData),
		alignof(FOPS_GameServerData),
		Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOPS_GameServerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOPS_GameServerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OPS_GameServerData"), sizeof(FOPS_GameServerData), Get_Z_Construct_UScriptStruct_FOPS_GameServerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOPS_GameServerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOPS_GameServerData_Hash() { return 1606022816U; }
class UScriptStruct* FstructOPS_StartData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GUNNERSQUAD_WEPLAYVR_API uint32 Get_Z_Construct_UScriptStruct_FstructOPS_StartData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FstructOPS_StartData, Z_Construct_UPackage__Script_GunnerSquad_WePlayVR(), TEXT("structOPS_StartData"), sizeof(FstructOPS_StartData), Get_Z_Construct_UScriptStruct_FstructOPS_StartData_Hash());
	}
	return Singleton;
}
template<> GUNNERSQUAD_WEPLAYVR_API UScriptStruct* StaticStruct<FstructOPS_StartData>()
{
	return FstructOPS_StartData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FstructOPS_StartData(FstructOPS_StartData::StaticStruct, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("structOPS_StartData"), false, nullptr, nullptr);
static struct FScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFstructOPS_StartData
{
	FScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFstructOPS_StartData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("structOPS_StartData")),new UScriptStruct::TCppStructOps<FstructOPS_StartData>);
	}
} ScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFstructOPS_StartData;
	struct Z_Construct_UScriptStruct_FstructOPS_StartData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_Unix_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_StartTime_Unix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackPackIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackPackIP;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BackPackIP_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FstructOPS_StartData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_StartTime_Unix_MetaData[] = {
		{ "Category", "FOPS_StartData" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_StartTime_Unix = { "StartTime_Unix", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FstructOPS_StartData, StartTime_Unix), METADATA_PARAMS(Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_StartTime_Unix_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_StartTime_Unix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_BackPackIP_MetaData[] = {
		{ "Category", "FOPS_StartData" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_BackPackIP = { "BackPackIP", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FstructOPS_StartData, BackPackIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_BackPackIP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_BackPackIP_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_BackPackIP_Inner = { "BackPackIP", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "FOPS_StartData" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FstructOPS_StartData, Language), METADATA_PARAMS(Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_Language_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_StartTime_Unix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_BackPackIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_BackPackIP_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::NewProp_Language,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
		nullptr,
		&NewStructOps,
		"structOPS_StartData",
		sizeof(FstructOPS_StartData),
		alignof(FstructOPS_StartData),
		Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FstructOPS_StartData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FstructOPS_StartData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("structOPS_StartData"), sizeof(FstructOPS_StartData), Get_Z_Construct_UScriptStruct_FstructOPS_StartData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FstructOPS_StartData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FstructOPS_StartData_Hash() { return 3386951049U; }
class UScriptStruct* FstructOPS_Data::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GUNNERSQUAD_WEPLAYVR_API uint32 Get_Z_Construct_UScriptStruct_FstructOPS_Data_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FstructOPS_Data, Z_Construct_UPackage__Script_GunnerSquad_WePlayVR(), TEXT("structOPS_Data"), sizeof(FstructOPS_Data), Get_Z_Construct_UScriptStruct_FstructOPS_Data_Hash());
	}
	return Singleton;
}
template<> GUNNERSQUAD_WEPLAYVR_API UScriptStruct* StaticStruct<FstructOPS_Data>()
{
	return FstructOPS_Data::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FstructOPS_Data(FstructOPS_Data::StaticStruct, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("structOPS_Data"), false, nullptr, nullptr);
static struct FScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFstructOPS_Data
{
	FScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFstructOPS_Data()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("structOPS_Data")),new UScriptStruct::TCppStructOps<FstructOPS_Data>);
	}
} ScriptStruct_GunnerSquad_WePlayVR_StaticRegisterNativesFstructOPS_Data;
	struct Z_Construct_UScriptStruct_FstructOPS_Data_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreditDevices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CreditDevices;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreditDevices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDisclaimer_MetaData[];
#endif
		static void NewProp_ShowDisclaimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowDisclaimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseVirtualProps_MetaData[];
#endif
		static void NewProp_UseVirtualProps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseVirtualProps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FstructOPS_Data_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OpsManager.h" },
		{ "ToolTip", "***************CONFIG struct of DATA received from OPS*******************" },
	};
#endif
	void* Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FstructOPS_Data>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_CreditDevices_MetaData[] = {
		{ "Category", "structOPS_Data" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_CreditDevices = { "CreditDevices", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FstructOPS_Data, CreditDevices), METADATA_PARAMS(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_CreditDevices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_CreditDevices_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_CreditDevices_Inner = { "CreditDevices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ClientName_MetaData[] = {
		{ "Category", "structOPS_Data" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ClientName = { "ClientName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FstructOPS_Data, ClientName), METADATA_PARAMS(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ClientName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ClientName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "structOPS_Data" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FstructOPS_Data, Location), METADATA_PARAMS(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ShowDisclaimer_MetaData[] = {
		{ "Category", "structOPS_Data" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ShowDisclaimer_SetBit(void* Obj)
	{
		((FstructOPS_Data*)Obj)->ShowDisclaimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ShowDisclaimer = { "ShowDisclaimer", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FstructOPS_Data), &Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ShowDisclaimer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ShowDisclaimer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ShowDisclaimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_UseVirtualProps_MetaData[] = {
		{ "Category", "structOPS_Data" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_UseVirtualProps_SetBit(void* Obj)
	{
		((FstructOPS_Data*)Obj)->UseVirtualProps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_UseVirtualProps = { "UseVirtualProps", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FstructOPS_Data), &Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_UseVirtualProps_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_UseVirtualProps_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_UseVirtualProps_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FstructOPS_Data_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_CreditDevices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_CreditDevices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ClientName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_ShowDisclaimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstructOPS_Data_Statics::NewProp_UseVirtualProps,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FstructOPS_Data_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
		nullptr,
		&NewStructOps,
		"structOPS_Data",
		sizeof(FstructOPS_Data),
		alignof(FstructOPS_Data),
		Z_Construct_UScriptStruct_FstructOPS_Data_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FstructOPS_Data_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FstructOPS_Data()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FstructOPS_Data_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("structOPS_Data"), sizeof(FstructOPS_Data), Get_Z_Construct_UScriptStruct_FstructOPS_Data_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FstructOPS_Data_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FstructOPS_Data_Hash() { return 227707865U; }
	void UOpsManager::StaticRegisterNativesUOpsManager()
	{
	}
	UClass* Z_Construct_UClass_UOpsManager_NoRegister()
	{
		return UOpsManager::StaticClass();
	}
	struct Z_Construct_UClass_UOpsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpsManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpsManager.h" },
		{ "ModuleRelativePath", "OpsManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpsManager_Statics::ClassParams = {
		&UOpsManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpsManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOpsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpsManager, 1207594467);
	template<> GUNNERSQUAD_WEPLAYVR_API UClass* StaticClass<UOpsManager>()
	{
		return UOpsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpsManager(Z_Construct_UClass_UOpsManager, &UOpsManager::StaticClass, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("UOpsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
