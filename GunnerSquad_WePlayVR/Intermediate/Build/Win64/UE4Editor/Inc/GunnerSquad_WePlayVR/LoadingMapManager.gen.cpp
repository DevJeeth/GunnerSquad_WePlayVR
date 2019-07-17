// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunnerSquad_WePlayVR/LoadingMapManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingMapManager() {}
// Cross Module References
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_ALoadingMapManager_NoRegister();
	GUNNERSQUAD_WEPLAYVR_API UClass* Z_Construct_UClass_ALoadingMapManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GunnerSquad_WePlayVR();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel();
	GUNNERSQUAD_WEPLAYVR_API UFunction* Z_Construct_UFunction_ALoadingMapManager_LoadLevel();
// End Cross Module References
	void ALoadingMapManager::StaticRegisterNativesALoadingMapManager()
	{
		UClass* Class = ALoadingMapManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLoadedLevel", &ALoadingMapManager::execGetLoadedLevel },
			{ "LoadLevel", &ALoadingMapManager::execLoadLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel_Statics
	{
		struct LoadingMapManager_eventGetLoadedLevel_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingMapManager_eventGetLoadedLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OPSManager/MapManagement" },
		{ "ModuleRelativePath", "LoadingMapManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALoadingMapManager, nullptr, "GetLoadedLevel", sizeof(LoadingMapManager_eventGetLoadedLevel_Parms), Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALoadingMapManager_LoadLevel_Statics
	{
		struct LoadingMapManager_eventLoadLevel_Parms
		{
			FString a_strLevelName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_a_strLevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALoadingMapManager_LoadLevel_Statics::NewProp_a_strLevelName = { "a_strLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingMapManager_eventLoadLevel_Parms, a_strLevelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALoadingMapManager_LoadLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadingMapManager_LoadLevel_Statics::NewProp_a_strLevelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALoadingMapManager_LoadLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OPSManager/MapManagement" },
		{ "ModuleRelativePath", "LoadingMapManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALoadingMapManager_LoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALoadingMapManager, nullptr, "LoadLevel", sizeof(LoadingMapManager_eventLoadLevel_Parms), Z_Construct_UFunction_ALoadingMapManager_LoadLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALoadingMapManager_LoadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALoadingMapManager_LoadLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALoadingMapManager_LoadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALoadingMapManager_LoadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALoadingMapManager_LoadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALoadingMapManager_NoRegister()
	{
		return ALoadingMapManager::StaticClass();
	}
	struct Z_Construct_UClass_ALoadingMapManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strOutroLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strOutroLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strGameLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strGameLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strLobbyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strLobbyLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALoadingMapManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GunnerSquad_WePlayVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALoadingMapManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALoadingMapManager_GetLoadedLevel, "GetLoadedLevel" }, // 50144673
		{ &Z_Construct_UFunction_ALoadingMapManager_LoadLevel, "LoadLevel" }, // 3372545371
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoadingMapManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadingMapManager.h" },
		{ "ModuleRelativePath", "LoadingMapManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strOutroLevel_MetaData[] = {
		{ "Category", "LoadingMapManager" },
		{ "ModuleRelativePath", "LoadingMapManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strOutroLevel = { "m_strOutroLevel", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoadingMapManager, m_strOutroLevel), METADATA_PARAMS(Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strOutroLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strOutroLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strGameLevel_MetaData[] = {
		{ "Category", "LoadingMapManager" },
		{ "ModuleRelativePath", "LoadingMapManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strGameLevel = { "m_strGameLevel", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoadingMapManager, m_strGameLevel), METADATA_PARAMS(Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strGameLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strGameLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strLobbyLevel_MetaData[] = {
		{ "Category", "LoadingMapManager" },
		{ "ModuleRelativePath", "LoadingMapManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strLobbyLevel = { "m_strLobbyLevel", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALoadingMapManager, m_strLobbyLevel), METADATA_PARAMS(Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strLobbyLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strLobbyLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALoadingMapManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strOutroLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strGameLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALoadingMapManager_Statics::NewProp_m_strLobbyLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALoadingMapManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALoadingMapManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALoadingMapManager_Statics::ClassParams = {
		&ALoadingMapManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALoadingMapManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ALoadingMapManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALoadingMapManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALoadingMapManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALoadingMapManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALoadingMapManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALoadingMapManager, 3074062006);
	template<> GUNNERSQUAD_WEPLAYVR_API UClass* StaticClass<ALoadingMapManager>()
	{
		return ALoadingMapManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALoadingMapManager(Z_Construct_UClass_ALoadingMapManager, &ALoadingMapManager::StaticClass, TEXT("/Script/GunnerSquad_WePlayVR"), TEXT("ALoadingMapManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALoadingMapManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
