// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SteamVRStatus.generated.h"

/**
 * 
 */
UCLASS()
class GUNNERSQUAD_WEPLAYVR_API USteamVRStatus : public UObject
{
	GENERATED_BODY()

private:
	void CheckHMDStatus();
	void CheckControllerStatus();
	void CheckLighthouseStatus();

	float GetControllerBatteryPercentage(int a_iDeviceID);

public:
	USteamVRStatus(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Steam VR Status")
		bool m_bHMDConnected;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Steam VR Status")
		bool m_bRightControllerConnected;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Steam VR Status")
		bool m_bLeftControllerConnected;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Steam VR Status")
		float m_fRightControllerBatteryPercentage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Steam VR Status")
		float m_fLeftControllerBatteryPercentage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Steam VR Status")
		bool m_bLighthouseAConnected;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Steam VR Status")
		bool m_bLighthouseBConnected;

	UFUNCTION(BlueprintCallable, Category = "Steam VR Status")
		void CheckForStatus();
};
