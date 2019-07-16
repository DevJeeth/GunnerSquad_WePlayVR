// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunnerSquad_WePlayVR/USettingsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSettingsData() {}
// Cross Module References
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_USettingsData_NoRegister();
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_USettingsData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TP_Cast_Enabled_MetaData[];
#endif
		static void NewProp_TP_Cast_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TP_Cast_Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Physical_Props_Enabled_MetaData[];
#endif
		static void NewProp_Physical_Props_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Physical_Props_Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Streaming_Enabled_MetaData[];
#endif
		static void NewProp_Streaming_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Streaming_Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OPS_Enabled_MetaData[];
#endif
		static void NewProp_OPS_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OPS_Enabled;
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
		{ "BlueprintType", "true" },
		{ "IncludePath", "USettingsData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "USettingsData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_TP_Cast_Enabled_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "USettingsData.h" },
	};
#endif
	void Z_Construct_UClass_USettingsData_Statics::NewProp_TP_Cast_Enabled_SetBit(void* Obj)
	{
		((USettingsData*)Obj)->TP_Cast_Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_TP_Cast_Enabled = { "TP_Cast_Enabled", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USettingsData), &Z_Construct_UClass_USettingsData_Statics::NewProp_TP_Cast_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_TP_Cast_Enabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_TP_Cast_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_Physical_Props_Enabled_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "USettingsData.h" },
	};
#endif
	void Z_Construct_UClass_USettingsData_Statics::NewProp_Physical_Props_Enabled_SetBit(void* Obj)
	{
		((USettingsData*)Obj)->Physical_Props_Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_Physical_Props_Enabled = { "Physical_Props_Enabled", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USettingsData), &Z_Construct_UClass_USettingsData_Statics::NewProp_Physical_Props_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_Physical_Props_Enabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_Physical_Props_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_Streaming_Enabled_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "USettingsData.h" },
	};
#endif
	void Z_Construct_UClass_USettingsData_Statics::NewProp_Streaming_Enabled_SetBit(void* Obj)
	{
		((USettingsData*)Obj)->Streaming_Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_Streaming_Enabled = { "Streaming_Enabled", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USettingsData), &Z_Construct_UClass_USettingsData_Statics::NewProp_Streaming_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_Streaming_Enabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_Streaming_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_OPS_Enabled_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "USettingsData.h" },
	};
#endif
	void Z_Construct_UClass_USettingsData_Statics::NewProp_OPS_Enabled_SetBit(void* Obj)
	{
		((USettingsData*)Obj)->OPS_Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_OPS_Enabled = { "OPS_Enabled", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USettingsData), &Z_Construct_UClass_USettingsData_Statics::NewProp_OPS_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_OPS_Enabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_OPS_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsData_Statics::NewProp_SettingsFilePath_MetaData[] = {
		{ "Category", "Settings Data Singleton" },
		{ "ModuleRelativePath", "USettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USettingsData_Statics::NewProp_SettingsFilePath = { "SettingsFilePath", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsData, SettingsFilePath), METADATA_PARAMS(Z_Construct_UClass_USettingsData_Statics::NewProp_SettingsFilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_USettingsData_Statics::NewProp_SettingsFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_TP_Cast_Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_Physical_Props_Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_Streaming_Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsData_Statics::NewProp_OPS_Enabled,
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
	IMPLEMENT_CLASS(USettingsData, 919949752);
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
