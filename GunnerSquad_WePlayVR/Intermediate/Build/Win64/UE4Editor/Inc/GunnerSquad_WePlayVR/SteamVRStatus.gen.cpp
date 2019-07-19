// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunnerSquad_WePlayVR/SteamVRStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRStatus() {}
// Cross Module References
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_USteamVRStatus_NoRegister();
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_USteamVRStatus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_USteamVRStatus_CheckForStatus();
// End Cross Module References
	void USteamVRStatus::StaticRegisterNativesUSteamVRStatus()
	{
		UClass* Class = USteamVRStatus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckForStatus", &USteamVRStatus::execCheckForStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamVRStatus_CheckForStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRStatus_CheckForStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steam VR Status" },
		{ "ModuleRelativePath", "SteamVRStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRStatus_CheckForStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRStatus, nullptr, "CheckForStatus", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRStatus_CheckForStatus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USteamVRStatus_CheckForStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRStatus_CheckForStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRStatus_CheckForStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamVRStatus_NoRegister()
	{
		return USteamVRStatus::StaticClass();
	}
	struct Z_Construct_UClass_USteamVRStatus_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bLighthouseBConnected_MetaData[];
#endif
		static void NewProp_m_bLighthouseBConnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bLighthouseBConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bLighthouseAConnected_MetaData[];
#endif
		static void NewProp_m_bLighthouseAConnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bLighthouseAConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fLeftControllerBatteryPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fLeftControllerBatteryPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fRightControllerBatteryPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fRightControllerBatteryPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bLeftControllerConnected_MetaData[];
#endif
		static void NewProp_m_bLeftControllerConnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bLeftControllerConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bRightControllerConnected_MetaData[];
#endif
		static void NewProp_m_bRightControllerConnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bRightControllerConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bHMDConnected_MetaData[];
#endif
		static void NewProp_m_bHMDConnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bHMDConnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamVRStatus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamVRStatus_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamVRStatus_CheckForStatus, "CheckForStatus" }, // 623841204
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRStatus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamVRStatus.h" },
		{ "ModuleRelativePath", "SteamVRStatus.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseBConnected_MetaData[] = {
		{ "Category", "Steam VR Status" },
		{ "ModuleRelativePath", "SteamVRStatus.h" },
	};
#endif
	void Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseBConnected_SetBit(void* Obj)
	{
		((USteamVRStatus*)Obj)->m_bLighthouseBConnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseBConnected = { "m_bLighthouseBConnected", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamVRStatus), &Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseBConnected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseBConnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseBConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseAConnected_MetaData[] = {
		{ "Category", "Steam VR Status" },
		{ "ModuleRelativePath", "SteamVRStatus.h" },
	};
#endif
	void Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseAConnected_SetBit(void* Obj)
	{
		((USteamVRStatus*)Obj)->m_bLighthouseAConnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseAConnected = { "m_bLighthouseAConnected", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamVRStatus), &Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseAConnected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseAConnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseAConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_fLeftControllerBatteryPercentage_MetaData[] = {
		{ "Category", "Steam VR Status" },
		{ "ModuleRelativePath", "SteamVRStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_fLeftControllerBatteryPercentage = { "m_fLeftControllerBatteryPercentage", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamVRStatus, m_fLeftControllerBatteryPercentage), METADATA_PARAMS(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_fLeftControllerBatteryPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_fLeftControllerBatteryPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_fRightControllerBatteryPercentage_MetaData[] = {
		{ "Category", "Steam VR Status" },
		{ "ModuleRelativePath", "SteamVRStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_fRightControllerBatteryPercentage = { "m_fRightControllerBatteryPercentage", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamVRStatus, m_fRightControllerBatteryPercentage), METADATA_PARAMS(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_fRightControllerBatteryPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_fRightControllerBatteryPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLeftControllerConnected_MetaData[] = {
		{ "Category", "Steam VR Status" },
		{ "ModuleRelativePath", "SteamVRStatus.h" },
	};
#endif
	void Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLeftControllerConnected_SetBit(void* Obj)
	{
		((USteamVRStatus*)Obj)->m_bLeftControllerConnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLeftControllerConnected = { "m_bLeftControllerConnected", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamVRStatus), &Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLeftControllerConnected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLeftControllerConnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLeftControllerConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bRightControllerConnected_MetaData[] = {
		{ "Category", "Steam VR Status" },
		{ "ModuleRelativePath", "SteamVRStatus.h" },
	};
#endif
	void Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bRightControllerConnected_SetBit(void* Obj)
	{
		((USteamVRStatus*)Obj)->m_bRightControllerConnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bRightControllerConnected = { "m_bRightControllerConnected", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamVRStatus), &Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bRightControllerConnected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bRightControllerConnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bRightControllerConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bHMDConnected_MetaData[] = {
		{ "Category", "Steam VR Status" },
		{ "ModuleRelativePath", "SteamVRStatus.h" },
	};
#endif
	void Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bHMDConnected_SetBit(void* Obj)
	{
		((USteamVRStatus*)Obj)->m_bHMDConnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bHMDConnected = { "m_bHMDConnected", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamVRStatus), &Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bHMDConnected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bHMDConnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bHMDConnected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamVRStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseBConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLighthouseAConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_fLeftControllerBatteryPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_fRightControllerBatteryPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bLeftControllerConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bRightControllerConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRStatus_Statics::NewProp_m_bHMDConnected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamVRStatus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamVRStatus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamVRStatus_Statics::ClassParams = {
		&USteamVRStatus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamVRStatus_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USteamVRStatus_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamVRStatus_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USteamVRStatus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamVRStatus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamVRStatus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamVRStatus, 217230184);
	template<> GUNNERSQUAD_WEPLAYVR_API UClass* StaticClass<USteamVRStatus>()
	{
		return USteamVRStatus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamVRStatus(Z_Construct_UClass_USteamVRStatus, &USteamVRStatus::StaticClass, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("USteamVRStatus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVRStatus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
