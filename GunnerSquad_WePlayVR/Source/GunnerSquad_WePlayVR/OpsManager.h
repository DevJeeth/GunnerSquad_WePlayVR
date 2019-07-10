// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//TODO: These headers need to be included

#include <functional>
#include "Runtime/Engine/Public/Tickable.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Json.h"
#include "JsonUtilities.h"
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

//This struct contains the OPS Configuration Data
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



//This struct is obselete, Alien Takedown and Clock Tower only uses this
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


//This struct will hold the data required for multiplayer/Singleplayer as single player games are also networked
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

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartCommandReceived);

UCLASS()
class GUNNERSQUAD_WEPLAYVR_API UOpsManager : public UObject , public FTickableGameObject 
{
	GENERATED_BODY()

private:
	static UOpsManager * instance;
	void *v_dllHandle;

	int m_iGameplayTime;
	int m_iMinPlayer;
	int m_iMaxPlayer;

	bool m_bInitReceived = false;
	bool m_bOPSConfigurationReceived = false;
	bool m_bStartReceived = false;
	bool m_bEndReceived = false;
	bool m_bLanguageChangeReceived = false;
	bool m_bDeviceUpdate = false;
	bool m_bScreenshot = false;
	bool m_bClearScoreData = false;

	CommandCallback m_delOnCommand;
	LogCallback m_delOnLogsReceived;

	__RegisterForLogs m_funcRegisterForLogs;
	__SetOPSIP m_funcSetOPSIP;
	__CreateOPSClient m_funcCreateOPSClient;
	__SetGameInformation m_funcSetGameInformation;
	__SetSupportedLanguages m_funcSetSupportedLanguages;
	__RegisterForCommands m_funcRegisterForCommands;
	__ClearConnectedDevicesData m_funcClearConnectedDevicesData;
	__AddConnecedDeviceToProfile m_funcAddConnectedDeviceToProfile; 
	__SendConnectedDevicesUpdate m_funcSendConnectedDevicesUpdate;
	__SendLighthouseStatus m_funcSendLighthouseStatus;
	
	__AddPropToProfile m_funcAddPropToProfile;
	__ClearPropsData m_funcClearPropsData;

	__SendProfile m_funcSendProfile;

	__Connect m_funcConnect;

	__SetSessionID m_funcSetSessionID;
	__SendOPS_ConfigResponse m_funcSendOPSConfigResponse;

	__SendInitResponse m_funcSendInitResponse;


	__SendStartResponse m_funcSendStartResponse;
	__SendEndResponse m_funcSendEndResponse;
	
	__SendLanguageChangeResponse m_funcSendLanguageChangeResponse;
	
	__SendScreenshot m_funcSendScreenshot;

	__SendClearDataResponse m_funcSendClearDataResponse;

	__SendServerReady m_funcSendServerReadyResponse;
	__SendServerTimeout m_funcSendServerTimeout;

	__SendStartRumble m_funcSendStartRumble;
	__SendStopRumble m_funcSendStopRumble;

	__CloseAndCleanUpOPSClient m_funcCloseAndCleanOPSClient;

	const char ** StringToCharArray(TArray<FString> a_strInternalName);
	const char **arrLanguages;


	bool m_bIsProcessingOpsMsg = false;

	bool _GetIsProcessingOpsMsg();

	//This delegate will be called when START COMMAND is received from OPS
	//DECLARE_DELEGATE(OnStartCommandReceived);
	
	//This delegate will be called when START RESPONSE is sent to OPS 
	DECLARE_DELEGATE(OnStartResponse);
	//This delegate will be called when END COMMAND is received from OPS
	DECLARE_DELEGATE(OnEndCommandReceived);
	//This delegate will be called when END RESPONSE is sent to OPS
	DECLARE_DELEGATE(OnEndResponse);

	
	OnStartResponse m_delOnStartResponse;
	OnEndCommandReceived m_delOnEndCommandReceived;
	OnEndResponse m_delEndResponse;

	//FIXME
	//UPROPERTY(Transient)
	//	UOpsManager *m_refOpsManager;
#pragma region Methods_For_Internal_Execution
	void StartCommandReceived();
	void EndCommandReceived();
#pragma endregion

public:

	UOpsManager();
	~UOpsManager();

	static UOpsManager* GetInstance();

	UFUNCTION()
	void WelcomeMessage();
	//FIXME
	//UFUNCTION(BlueprintPure,Category = "OPS",meta = (DisplayName = "Get OpsManager Instance",Keywords = "OPS Manager"))
	//	UOpsManager *GetInstance();
	UPROPERTY()
	FOnStartCommandReceived m_delOnStartCommandReceived;
#pragma region RegisterAndDeregisterStartAndStop
	template <typename T>
	void RegisterToStartCommand(T a_classType, TFunction<void()> a_func);//std::function<void()> a_func
	void DeregisterStartCommand();

	template <typename T>
	void RegisterToEndCommand(T a_classType, std::function<void()> a_func);
	void DeregisterEndCommand();
#pragma endregion

#pragma region RegisterAndDeregisterStartAndStopResponses
	void RegisterToStartResponse(OnStartResponse m_delStartResponse);
	void DeregisterStartResponse();

	void RegisterToEndResponse(OnEndResponse m_delEndResponse);
	void DeregisterEndResponse();
#pragma endregion

	//This is just for testing, remove this
	void SimulateStartFromOPS();

	void Tick(float DeltaTime) override;
	bool IsTickable() const override;
	bool IsTickableInEditor() const override;
	bool IsTickableWhenPaused() const override;
	TStatId GetStatId() const override;

	///Use this function to toggle is process cmd status
	void SetIsProcessingCmdStatus(bool a_bIsProcessingOpsMsg);

	//Helper Function
	template<typename OutStructType>
	bool ConvertJsonToStruct(FString a_strJsonContent, OutStructType* OutStruct);

	FstructOPS_Data m_dataOPS_Configuration;
	FstructOPS_GameServerClientData m_dataOPS_GameServerClientData;

	//This is Obselete only Clock Tower uses this, instead of this FstructOPS_GameServerClientData instance should be used
	FstructOPS_StartData m_dataOPS_StartData;

#pragma region Import Methods
	//Retreiving the DLL from the path and name of DLL
	UFUNCTION()
		bool ImportDLL(FString a_strFolderName, FString a_strDLLName);

	// Importing the DLL functions and setting to all the functions instance created
	UFUNCTION()
		bool ImportDLLMethods();

	UFUNCTION()
		bool ImportMethodCreateOPSClientMethod();

	UFUNCTION()
		bool ImportMethodRegisterForLogs();

	UFUNCTION()
		bool ImportMethodRegisterForCommands();

	UFUNCTION()
		bool ImportMethodSetOPSIP();

	UFUNCTION()
		bool ImportMethodCloseAndCleanUpOPS();

	UFUNCTION()
		bool ImportMethodSendProfile();

	UFUNCTION()
		bool ImportMethodSendInitResponse();

	UFUNCTION()
		bool ImportMethodSendOPSConfigResponse();

	UFUNCTION()
		bool ImportMethodSendStartResponse();

	UFUNCTION()
		bool ImportMethodSendEndResponse();

	UFUNCTION()
		bool ImportMethodSetSupportedLanguages();//Since there is one in Game instance access it here rather than ufunctions!

	UFUNCTION()
		bool ImportMethodSetGameInformation();

	UFUNCTION()
		bool ImportMethodClearPropsData();//Since somewhere a clash dont use ufunction!

	UFUNCTION()
		bool ImportMethodAddPropToProfile();//Since somewhere a clash dont use ufunction!

	UFUNCTION()
		bool ImportMethodClearConnectedDevicesData();

	UFUNCTION()
		bool ImportMethodAddConnecedDeviceToProfile();

	UFUNCTION()
		bool ImportMethodSendScreenshot();

	UFUNCTION()
		bool ImportMethodSendStartRumble();

	UFUNCTION()
		bool ImportMethodSendStopRumble();

	UFUNCTION()
		bool ImportMethodSetSessionID();

	UFUNCTION()
		bool ImportMethodSendLanguageChangeResponse();

	UFUNCTION()
		bool ImportMethodSendServerReady();

	UFUNCTION()
		bool ImportMethodSendServerTimeout();

	UFUNCTION()
		bool ImportMethodSendLighthouseStatus();

	UFUNCTION()
		bool ImportMethodConnect();

	UFUNCTION()
		bool ImportMethodSendClearDataResponse();

	UFUNCTION()
		bool ImportMethodSendConnectedDevicesUpdate();

#pragma endregion

#pragma region Methods Exposed In Unreal
	UFUNCTION()
		void SendClearDataResponse();

	UFUNCTION()
		void Connect();

	UFUNCTION()
		void CreateOPSClient();

	UFUNCTION()
		void RegisterForCommands();

	UFUNCTION()
		void RegisterForLogs();

	UFUNCTION()
		void CleanUpOPSClient();

	UFUNCTION()
		void SetIPForOPS(FString a_strOPSIP);

	UFUNCTION()
		void SendProfileToOPS();

	UFUNCTION()
		void SendInitResponseToOPS();

	UFUNCTION()
		void SendOPSConfigResponse();

	UFUNCTION()
		void SendStartResponseToOPS();

	UFUNCTION()
		void SendEndResponseToOPS();

	UFUNCTION()
		void SetSupportedLanguages(TArray<FString> a_strInternalName, int a_nLength);//Since there is one in Game instance access it here rather than ufunctions!

	UFUNCTION()
		void SetGameInformation(int a_nGameDuration, int a_nMinimumNumberPlayer, int a_nMaximumNumberPlayer, eInputNameType a_enumInputNameType = eInputNameType::None);

	UFUNCTION()
		void ClearPropsData();//Since somewhere a clash dont use ufunction!

	UFUNCTION()
		void AddPropToProfile(FString a_strPropName, int a_iID);//Since somewhere a clash dont use ufunction!

	UFUNCTION()
		void ClearConnectedDevicesData();

	UFUNCTION()
		void AddConnecedDeviceToProfile(eDeviceType a_enumType, FString a_strValue, FString a_strID, eDeviceStatus a_enumStatus);

	UFUNCTION()
		void SendConnectedDevicesUpdate();

	UFUNCTION()
		void SendScreenshot(TArray<uint8> a_arrImageData);
		FString m_strImageData;

	UFUNCTION()
		void SendStartRumble(FString a_strClipName, int a_nVolume, bool a_bPlayOnce);
	
	UFUNCTION()
		void SendStopRumble();
	
	UFUNCTION()
		void SetSessionID(FString a_strSessionID);

	UFUNCTION()
		void SendLanguageChangeResponse();
	
	UFUNCTION()
		void SendServerReady(FString a_strGameServerIP, int a_iPort);
	
	UFUNCTION()
		void SendServerTimeout();

	UFUNCTION()
		void SendLighthouseStatus(FString a_strLighthouseID, eDeviceStatus a_enumStatus);
#pragma endregion




};
