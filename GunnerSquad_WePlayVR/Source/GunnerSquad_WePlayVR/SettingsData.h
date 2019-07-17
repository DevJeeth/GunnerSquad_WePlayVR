// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SettingsData.generated.h"

/**
 * 
 */
UCLASS()
class GUNNERSQUAD_WEPLAYVR_API USettingsData : public UObject
{
	GENERATED_BODY()
	
public:
	USettingsData(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		FString SettingsFilePath;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		bool m_bOpsEnabled;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		bool m_bStreamerEnabled;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		bool m_bPhysicalPropsEnabled;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		bool m_bTPCastEnabled;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		FString m_strGameName = "WePlayVR_Sample";

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings Data Singleton")
		FString	m_strOpsIP;


};
