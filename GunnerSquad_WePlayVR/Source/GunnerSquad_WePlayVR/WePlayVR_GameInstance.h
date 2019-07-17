// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "OpsManager.h"
#include "SettingsData.h"
#include "CoreMinimal.h"
#include "Engine/GameInstance.h" 
#include "WePlayVR_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class GUNNERSQUAD_WEPLAYVR_API UWePlayVR_GameInstance : public UGameInstance
{
	GENERATED_BODY()

private:

	void InitializeOPS();
	void CleanUp();

	UPROPERTY()
		UOpsManager* m_refOpsManager;
	//TODO: Analytics reference
	//TODO: Log reference
	
protected:
	virtual void OnStart() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "CommandEvents")
		void OnStartCommandReceived();

	UFUNCTION(BlueprintImplementableEvent, Category = "CommandEvents")
		void OnEndCommandReceived();

	UFUNCTION(BlueprintImplementableEvent, Category = "CommandEvents")
		void OnScreenShotCommandReceived();

	UFUNCTION(BlueprintImplementableEvent, Category = "CommandEvents")
		void OnLanguageChangeCommandReceived(const FString& a_strLanguage);

	UFUNCTION(BlueprintImplementableEvent, Category = "CommandEvents")
		TArray<FString> OnLanguageDetailsGetCommand();

public:
	UWePlayVR_GameInstance(const FObjectInitializer& ObjectInitializer);


	virtual void Init() override;
	virtual void Shutdown() override;
	virtual void BeginDestroy() override;
	virtual void StartGameInstance() override;

	//COMMENT: Not sure if this is needed
	/*UFUNCTION(BlueprintCallable, Category = "Commands")
		void OnCommandReceived(FString a_strCommandData);*/

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void SendStartCommandResponse();

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void SendEndCommandResponse();

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void SendStartRumbleCommand(FString a_strClipName, int a_nVolume, bool a_bPlayOnce);

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void SendStopRumbleCommand();



	UFUNCTION(BlueprintCallable, Category = "Commands")
		void SetSupportedLanguages(TArray<FString> a_arrLanguageNames);//PLEASE NOTE SAME FUNC PRESENT IN OPS HENCE UNREAL RELATED HEADACHES...

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void SendLanguageChangeResponse();

	UPROPERTY()
		USettingsData* m_refSettingsData; 

#pragma region VRDevices_Update_Functionality
	//TODO: Device Updates need to be looked into and implemented
	//These not to be exposed in the blueprint, DEVICE UPDATE SHOULD BE HANDLED BY OPS SYSTEM
	//UFUNCTION()
	//	void SendControllerStatus(int a_iIndex);

	//UFUNCTION()
	//	void SendHMDStatus();

	//UFUNCTION()
	//	void SendLightHouseStatus(FString a_strID);

	////Master command to check and send the status of the VR devices
	//UFUNCTION(BlueprintCallable, Category = "Commands")
	//	void CheckAndSendVRDeviceStatus();

	//UFUNCTION(BlueprintCallable, Category = "VRGameInstance")
	//	void CheckAndUpdateLightHouseStatus(bool a_bForceUpdate = false);

	//UFUNCTION(BlueprintCallable, Category = "VRGameInstance")
	//	bool IsLightHouseStatusChangedFor(FString a_strLightHouseName);

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "LightHouse A Status")
	//	bool m_bIsLightHouseAConnected = false;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "LightHouse B Status")
	//	bool m_bIsLightHouseBConnected = false;

#pragma endregion

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void SendScreenshotResponse(TArray<uint8> a_arrImageData);

	UFUNCTION(BlueprintCallable, Category = "VRGameInstance")
		FString GetProjectVersion();

	UFUNCTION(BlueprintCallable, Category = "VRGameInstance")
		FString GetProjectName();

	//OPS IP and command line data
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "OPS Command Data")
		FString m_strOPSIP
		                                ;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "OPS Command Data")
		TArray<FString> m_arystrCommandline;

	//These are not blueprint callable, when this is called the blueprint callable events may be called if it needs to be exposed to Game Developer
	void StartCommandReceived();
	void EndCommandReceived();
	void LanguageDetailsCommand();
	void LanguageChangeCommandReceived(FString s_strNewLanguage);
	void ScreenshotCommandReceived();
	void SendVRDeviceStatusUpdate();
};
