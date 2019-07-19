// Fill out your copyright notice in the Description page of Project Settings.

#include "SteamVRStatus.h"
#include "Engine.h"
#include "IXRTrackingSystem.h"
#include "ISteamVRPlugin.h"
#include <openvr.h>


USteamVRStatus::USteamVRStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)  
{

}

void USteamVRStatus::CheckHMDStatus()
{
	m_bHMDConnected = GEngine->XRSystem->IsTracking(GEngine->XRSystem->HMDDeviceId); 
	FString tempstrResult = "" + m_bHMDConnected;
	UE_LOG(LogTemp, Warning, TEXT("[SteamVRStatus] MOUNTED DISPLAY STATUS:%s"), *tempstrResult);
}

void USteamVRStatus::CheckControllerStatus()
{

	TArray<int32> arrTrackedControllers;  
	GEngine->XRSystem->EnumerateTrackedDevices(arrTrackedControllers, EXRTrackedDeviceType::Controller);


	if (arrTrackedControllers.Num() == 0)
	{
		m_bRightControllerConnected = false;
		m_fRightControllerBatteryPercentage = 0.0f;
		m_bLeftControllerConnected = false;
		m_fLeftControllerBatteryPercentage = 0.0f;
		UE_LOG(LogTemp, Log, TEXT("[SteamVRStatus] ZERO TRACKED CONTROLLERS"));
		return;
	}

	if (arrTrackedControllers.Num() == 1)
	{
		m_bRightControllerConnected = GEngine->XRSystem->IsTracking(arrTrackedControllers[0]);
		m_fRightControllerBatteryPercentage = GetControllerBatteryPercentage(arrTrackedControllers[0]);

		m_bLeftControllerConnected = false;
		m_fLeftControllerBatteryPercentage = 0.0f;
		UE_LOG(LogTemp, Log, TEXT("[SteamVRStatus] ONE TRACKED, RIGHT CONTROLLER"));
		return;
	}
	else 
	{
		if (arrTrackedControllers.Num() > 2)
		{
			UE_LOG(LogTemp, Warning, TEXT("[SteamVRStatus] MORE THAN TWO CONTROLLERS DETECTED."));
		}

		m_bRightControllerConnected = GEngine->XRSystem->IsTracking(arrTrackedControllers[0]);
		m_fRightControllerBatteryPercentage = GetControllerBatteryPercentage(arrTrackedControllers[0]);
		m_bLeftControllerConnected = GEngine->XRSystem->IsTracking(arrTrackedControllers[1]);
		m_fLeftControllerBatteryPercentage = GetControllerBatteryPercentage(arrTrackedControllers[1]);

		UE_LOG(LogTemp, Log, TEXT("[SteamVRStatus] TWO CONTROLLERS DETECTED"));
	}
	
	
}

void USteamVRStatus::CheckLighthouseStatus()
{

}

void USteamVRStatus::CheckForStatus()
{

}

float USteamVRStatus::GetControllerBatteryPercentage(int a_iDeviceID)
{
	//TODO: Implement this
	return 1.0;
}