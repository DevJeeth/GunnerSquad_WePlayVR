// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//TODO: These headers need to be included
#include <functional>
//#include "JsonUtilities.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpsManager.generated.h"

/**
 * 
 */
UENUM()
enum class eAttractionType : uint8
{
	iArena = 0,
	iMotion = 1
};

UENUM()
enum class eDeviceType : uint8
{
	iHMD = 0,
	iVive_Controller_Left = 1,
	iVive_Controller_Right = 2,
	iOculus_Controller_Left = 3,
	iOculus_Controller_Right = 4,
	iVive_Lighthouse = 5,
	IOculus_Lighthouse = 6
};

UENUM()
enum class eDeviceStatus : uint8
{
	iNotConnected = 0,
	iConnected = 1,
	iDisconnected = 2,
	iStandby = 3,
	iDeviceError = 4
};
UENUM()
enum class eBuildType : uint8
{
	iGame = 0,
	iStreamer = 1,
	iServer = 2
};
UENUM()
enum class eInputNameType : uint8
{
	None = 0,
	PlayerName = 1,
	TeamName = 2,
	All = 3
};

/******************CONFIG struct of DATA received from OPS********************/

USTRUCT(BlueprintType)
struct FstructOPS_Data
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "structOPS_Data")
		bool UseVirtualProps = false;
	UPROPERTY(BlueprintReadWrite, Category = "structOPS_Data")
		bool ShowDisclaimer = false;
	UPROPERTY(BlueprintReadWrite, Category = "structOPS_Data")
		FString Location = "DEFAULT_LOCATION";
	UPROPERTY(BlueprintReadWrite, Category = "structOPS_Data")
		FString ClientName = "DEFAULT_CLIENT";
	UPROPERTY(BlueprintReadWrite, Category = "structOPS_Data")
		TArray<FString> CreditDevices;
	/** Default constructor. */
	FstructOPS_Data()
	{ }

	/** Creates an uninitialized instance. */
	FstructOPS_Data(ENoInit) { }
};



//This is obselete, Alien Takedown and Clock Tower only uses this
USTRUCT(BlueprintType)
struct FstructOPS_StartData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_StartData")
		FString Language;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_StartData")
		TArray<FString> BackPackIP;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_StartData")
		int64 StartTime_Unix;

	/** Default constructor. */
	FstructOPS_StartData()
	{ }

	/** Creates an uninitialized instance. */
	FstructOPS_StartData(ENoInit) { }
};

//This struct will hold the IP address of each client that needs to connect to the server and the user name of each client if any
USTRUCT(BlueprintType)
struct FstructOPS_GameServerClientData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerClientData")
		FString ClientIP;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerClientData")
		FString UserName;
};


//This struct will hold the data required for multiplayer
USTRUCT(BlueprintType)
struct FstructOPS_GameServerData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerData")
		FString GameServerIP;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerData")
		int GameServerPort;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerData")
		TArray<FstructOPS_GameServerClientData> ClientData;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerData")
		FString SessionId;
	UPROPERTY(BlueprintReadWrite, Category = "FOPS_GameServerData")
		FString TeamName;

	/**Default Constructor**/
	FstructOPS_GameServerData() {}

	/** Creates an uninitialized instance. */
	FstructOPS_GameServerData(ENoInit) {}
};
/****************************************************************************************/

typedef std::function<void(int, const char*)> CommandCallback;
typedef std::function<void(int, const char*)> LogCallback;

typedef void(*__RegisterForCommands)(CommandCallback a_delOnCommandReceived);
typedef void(*__RegisterForLogs)(LogCallback a_delOnLogGenerated);

typedef void(*__CreateOPSClient)(const char* a_strInternalName, const char* a_strDisplayName, const char* a_strVersion, bool a_bIsMultiplayer, int a_eBuildType, eAttractionType a_eAttractionType);
typedef void(*__SetOPSIP) (const char* a_strIP);
typedef void(*__CloseAndCleanUpOPSClient)();
typedef void(*__SendProfile)();
typedef void(*__SendInitResponse)();
typedef void(*__SendOPS_ConfigResponse)();
typedef void(*__SendStartResponse)();
typedef void(*__SendEndResponse)();


typedef void(*__SetSupportedLanguages)(const char** a_strInternalName, int a_nLength);//const char ** values
//typedef void(*__SetSupportedLanguages)(TArray<FString> a_strLanguageList, int a_nLength);//const char ** values
typedef void(*__SetGameInformation)(int a_nGameDuration, int a_nMinimumNumberPlayer, int a_nMaximumNumberPlayer, eInputNameType a_enumInputNameType);
typedef void(*__ClearPropsData)();
typedef void(*__AddPropToProfile)(const char* a_strPropName, int a_iID);
typedef void(*__ClearConnectedDevicesData)();
typedef void(*__AddConnecedDeviceToProfile)(eDeviceType a_enumType, const char* a_strValue, const char* a_strID, eDeviceStatus a_enumStatus);
typedef void(*__SendLanguageChangeResponse)(); 

//Server ready called when server has started to host
typedef void(*__SendServerReady)(const char* a_strGameServerIP, int a_iPort);
//Time out called when server has waited for all the clients to connect within allotted time but all the clients did not connect
typedef void(*__SendServerTimeout)();

typedef void(*__SendStartRumble)(const char*, int a_nVolume, bool a_bPlayOnce);
typedef void(*__SendStopRumble)();


typedef void(*__SendScreenshot)(const char* a_strScreenshot);
typedef void(*__SendConnectedDevicesUpdate)();
typedef void(*__SendLighthouseStatus)(const char* a_strLighthouseID, eDeviceStatus a_enumStatus);

//This should be called only on the server
typedef void(*__SetSessionID)(const char* a_strSessionID);

//This is called when the game needs to connect to OPS 
typedef void(*__Connect)();

//This is called after the leader board has been cleared if any
typedef void(*__SendClearDataResponse)();


UENUM()
enum class eLogType : uint8
{
	iLOG = 0,
	iWARNING = 1,
	iERROR = 2
};

UENUM()
enum class eCommand10Type :uint8
{
	iStart = 1,
	iEnd = 2,
	iInit = 3,
	iOPS_Config = 4,
	iLanguage_Change = 5,
	iConnectedDevicesUpdate = 6,
	iScreenshot = 7,
	iClearData = 8
};

UCLASS()
class GUNNERSQUAD_WEPLAYVR_API UOpsManager : public UObject
{
	GENERATED_BODY()

private:
	void *v_dllHandle;

	CommandCallback m_delOnCommand;
	LogCallback m_delOnLogsReceived;

	__RegisterForLogs m_funcRegisterForLogs;
	__SetOPSIP m_funcSetOPSIP;
	__CreateOPSClient m_funcCreatOPSClient;
	__SetGameInformation m_funcSetGameInformation;
	__SetSupportedLanguages m_funcSetSupportedLanguage;
	__RegisterForCommands m_funcRegisterForCommands;
	__ClearConnectedDevicesData m_funcClearConnectedDevicesData;
	__AddConnecedDeviceToProfile m_funcAddConnectedDeviceToProfile;
	__SendLighthouseStatus m_funcSendLightHouseStatus;
	
	__AddPropToProfile m_funcAddPropToProfile;
	__ClearPropsData m_funcClearPropsData;

	__SendProfile m_funcSendProfile;

	__Connect m_funcSendConnect;

	__SetSessionID m_funcSetSessionID;
	__SendOPS_ConfigResponse m_funcSendConfigResponse;

	__SendInitResponse m_funcSendInitResponse;


	__SendStartResponse m_funcSendStartResponse;
	__SendEndResponse m_funcSendEndResponse;
	
	__SendLanguageChangeResponse m_funcSendLanguageChangeResponse;
	
	__SendScreenshot m_funcSendScreenShot;

	__SendClearDataResponse m_funcSendCleardataResponse;

	__CloseAndCleanUpOPSClient m_funcCloseAndCleanOPSClient;





	//typedef void(*__SendConnectedDevicesUpdate)();

public:
	/*UFUNCTION()
		 bool ImportDLL(FString a_strFolderName, FString a_strDLLName);*/
	
};
