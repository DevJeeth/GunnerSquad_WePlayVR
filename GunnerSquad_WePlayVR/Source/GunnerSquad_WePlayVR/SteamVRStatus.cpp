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
			UE_LOG(LogTemp, Warning, TEXT("[SteamVRStatus] MORE THAN TWO CONTROLLERS DETECTED.  FIX THIS."));
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
	TArray<int32> arrTrackedLighthouses;
	GEngine->XRSystem->EnumerateTrackedDevices(arrTrackedLighthouses, EXRTrackedDeviceType::TrackingReference);

	if (arrTrackedLighthouses.Num() == 0)
	{
		m_bLighthouseAConnected = false;
		m_bLighthouseBConnected = false;
		UE_LOG(LogTemp, Log, TEXT("[SteamVRStatus] ZERO LIGHTHOUSE TRACKED"));
		return;
	}

	if (arrTrackedLighthouses.Num() == 1)
	{
		m_bLighthouseAConnected = GEngine->XRSystem->IsTracking(arrTrackedLighthouses[0]);
		m_bLighthouseBConnected = false;
		UE_LOG(LogTemp, Log, TEXT("[SteamVRStatus] ONE LIGHTHOUSE TRACKED"));
		return;
	}
	else
	{
		if (arrTrackedLighthouses.Num() > 2)
		{
			UE_LOG(LogTemp, Warning, TEXT("MORE THAN TWO LIGHT HOUSE TRACK. FIX THIS."));
		}

		m_bLighthouseAConnected = GEngine->XRSystem->IsTracking(arrTrackedLighthouses[0]);
		m_bLighthouseBConnected = GEngine->XRSystem->IsTracking(arrTrackedLighthouses[1]);
		UE_LOG(LogTemp, Log, TEXT("[SteamVRStatus] TWO LIGHTHOUSE TRACKED"));
	}
}

void USteamVRStatus::CheckForStatus()
{

}

float USteamVRStatus::GetControllerBatteryPercentage(int a_iDeviceID)
{
	//TODO: Implement this
	return 1.0;
}