// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "UObject/NoExportTypes.h"
#include "USettingsData.generated.h"

/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class GUNNERSQUAD_WEPLAYVR_API USettingsData : public UObject
{
	GENERATED_BODY()

public:
	USettingsData(const FObjectInitializer& ObjectInitializer); 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		FString SettingsFilePath;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		bool OPS_Enabled;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		bool Streaming_Enabled;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		bool Physical_Props_Enabled;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		bool TP_Cast_Enabled;

	FString		OPS_IP;
	FString		xmlBasePath;
	FString		xmlFileName;
	bool		bIsTesting;
	bool		bDebugDrone;
	bool		bVisualizeGoalSwitchers;
	bool		bDataLoaded;

	bool		bTreatAsSpectator;
	FString		ScreenCapBaseAddress;
	float		ScreenCapResX;
	float		ScreenCapResY;
	float		FrequencyForCapture;

};
