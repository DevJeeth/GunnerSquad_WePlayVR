// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunnerSquad_WePlayVR/SettingsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsData() {}
// Cross Module References
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_USettingsData_NoRegister();
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_USettingsData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
	GUNNERSQUAD_WEPLAYVR_API UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eInputNameType();
	GUNNERSQUAD_WEPLAYVR_API UEnum* Z_Construct_UEnum_GunnerSquad_WePlayVR_eAttractionType();
// End Cross Module References
	void USettingsData::StaticRegisterNativesUSettingsData()
	{
	}
	UClass* Z_Construct_UClass_USettingsData_NoRegister()
	{
		return USettingsData::StaticClass();
	}
	struct Z_Construct_UClass_USettingsData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputNameType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputNameType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputNameType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttractionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttractionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_iGamePlayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iGamePlayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_iMaxPlayerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iMaxPlayerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_iMinPlayerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iMinPlayerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strOpsIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strOpsIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strGameName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bTPCastEnabled_MetaData[];
#endif
		static void NewProp_m_bTPCastEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bTPCastEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bPhysicalPropsEnabled_MetaData[];
#endif
		static void NewProp_m_bPhysicalPropsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bPhysicalPropsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bStreamerEnabled_MetaData[];
#endif
		static void NewProp_m_bStreamerEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bStreamerEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bOpsEnabled_MetaData[];
#endif
		static void NewProp_m_bOpsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bOpsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingsFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SettingsData.h" },
		{ "ModuleRelativePath", "SettingsData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_InputNameType_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_InputNameType = { "InputNameType", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsData, InputNameType), Z_Construct_UEnum_GunnerSquad_WePlayVR_eInputNameType, METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_InputNameType_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_InputNameType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_InputNameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_AttractionType_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_AttractionType = { "AttractionType", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsData, AttractionType), Z_Construct_UEnum_GunnerSquad_WePlayVR_eAttractionType, METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_AttractionType_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_AttractionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_AttractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_m_iGamePlayTime_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_m_iGamePlayTime = { "m_iGamePlayTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsData, m_iGamePlayTime), METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_m_iGamePlayTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_m_iGamePlayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_m_iMaxPlayerCount_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_m_iMaxPlayerCount = { "m_iMaxPlayerCount", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsData, m_iMaxPlayerCount), METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_m_iMaxPlayerCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_m_iMaxPlayerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_m_iMinPlayerCount_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_m_iMinPlayerCount = { "m_iMinPlayerCount", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsData, m_iMinPlayerCount), METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_m_iMinPlayerCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_m_iMinPlayerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_m_strOpsIP_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_m_strOpsIP = { "m_strOpsIP", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsData, m_strOpsIP), METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_m_strOpsIP_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_m_strOpsIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_m_strGameName_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_m_strGameName = { "m_strGameName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsData, m_strGameName), METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_m_strGameName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_m_strGameName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_m_bTPCastEnabled_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	void Z_Construct_UClass_USettingsData_Statics::NewProp_m_bTPCastEnabled_SetBit(void* Obj)
	{
		((USettingsData*)Obj)->m_bTPCastEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_m_bTPCastEnabled = { "m_bTPCastEnabled", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USettingsData), &Z_Construct_UClass_USettingsData_Statics::NewProp_m_bTPCastEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_m_bTPCastEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_m_bTPCastEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_m_bPhysicalPropsEnabled_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	void Z_Construct_UClass_USettingsData_Statics::NewProp_m_bPhysicalPropsEnabled_SetBit(void* Obj)
	{
		((USettingsData*)Obj)->m_bPhysicalPropsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_m_bPhysicalPropsEnabled = { "m_bPhysicalPropsEnabled", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USettingsData), &Z_Construct_UClass_USettingsData_Statics::NewProp_m_bPhysicalPropsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_m_bPhysicalPropsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_m_bPhysicalPropsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_m_bStreamerEnabled_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	void Z_Construct_UClass_USettingsData_Statics::NewProp_m_bStreamerEnabled_SetBit(void* Obj)
	{
		((USettingsData*)Obj)->m_bStreamerEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_m_bStreamerEnabled = { "m_bStreamerEnabled", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USettingsData), &Z_Construct_UClass_USettingsData_Statics::NewProp_m_bStreamerEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_m_bStreamerEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_m_bStreamerEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_m_bOpsEnabled_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	void Z_Construct_UClass_USettingsData_Statics::NewProp_m_bOpsEnabled_SetBit(void* Obj)
	{
		((USettingsData*)Obj)->m_bOpsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_m_bOpsEnabled = { "m_bOpsEnabled", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USettingsData), &Z_Construct_UClass_USettingsData_Statics::NewProp_m_bOpsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_m_bOpsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_m_bOpsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_SettingsFilePath_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_SettingsFilePath = { "SettingsFilePath", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsData, SettingsFilePath), METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_SettingsFilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_SettingsFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_InputNameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_InputNameType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_AttractionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_AttractionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_m_iGamePlayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_m_iMaxPlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_m_iMinPlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_m_strOpsIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_m_strGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_m_bTPCastEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_m_bPhysicalPropsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_m_bStreamerEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_m_bOpsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_SettingsFilePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USettingsData_Statics::ClassParams = {
		&USettingsData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USettingsData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingsData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USettingsData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USettingsData, 1996869593);
	template<> GUNNERSQUAD_WEPLAYVR_API UClass* StaticClass<USettingsData>()
	{
		return USettingsData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USettingsData(Z_Construct_UClass_USettingsData, &USettingsData::StaticClass, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("USettingsData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
