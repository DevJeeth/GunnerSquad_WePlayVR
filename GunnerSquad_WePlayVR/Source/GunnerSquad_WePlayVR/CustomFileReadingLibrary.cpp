// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomFileReadingLibrary.h"
#include "Json.h"
#include "SettingsData.h"
#include <cstdlib>



bool UCustomFileReadingLibrary::GetFiles(TArray<FString>& Files, FString RootFolderFullPath, FString Ext)
{
	if (RootFolderFullPath.Len() < 1) return false;

	FPaths::NormalizeDirectoryName(RootFolderFullPath);

	IFileManager& FileManager = IFileManager::Get();

	if (Ext == "")
	{
		Ext = "*.*";
	}
	else
	{
		Ext = (Ext.Left(1) == ".") ? "*" + Ext : "*." + Ext;
	}

	FString FinalPath = RootFolderFullPath + "/" + Ext;
	FileManager.FindFiles(Files, *FinalPath, true, false);
	return true;
}

int UCustomFileReadingLibrary::GetFilesCount(TArray<FString>& Files, FString RootFolderFullPath, FString Ext)
{
	GetFiles(Files, RootFolderFullPath, Ext);

	return Files.Num();
}

bool UCustomFileReadingLibrary::Load_XML_File(FString RootFolderFullPath)
{
	FXmlFile file(L"C://Users/Kishore/Downloads/Vids/vids.xml");//C:\Users\Kishore\Downloads\Vids\vids.xml
	//FXmlFile file(RootFolderFullPath);//C:\Users\Kishore\Downloads\Vids\vids.xml
	const FXmlNode* SceneNode = file.GetRootNode();

	const TArray<FXmlNode*> assetNodes = SceneNode->GetChildrenNodes();
	const TArray<FXmlNode*> assetNodes1 = assetNodes[0]->GetChildrenNodes();
	


	for (int j = 0; j < assetNodes.Num(); j++)
	{
		const TArray<FXmlNode*> meshNodes = assetNodes[j]->GetChildrenNodes();

		for (int i = 0; i < meshNodes.Num(); i++)
		{
			FString tag = meshNodes[i]->GetTag();
			FString content = tag + meshNodes[i]->GetContent();

			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, content);

		}


	}

	
	PrintString("some xml string "  + I(assetNodes1.Max()));
	return (SceneNode == nullptr);
}

void UCustomFileReadingLibrary::GetRandomMediaFile(FString RootFolderFullPath, FString & mediaFilePath, float & duration)
{
	FXmlFile file(L"C://Users/Kishore/Downloads/Vids/vids.xml");//C:\Users\Kishore\Downloads\Vids\vids.xml
																//FXmlFile file(RootFolderFullPath);//C:\Users\Kishore\Downloads\Vids\vids.xml
	const FXmlNode* SceneNode = file.GetRootNode();

	const TArray<FXmlNode*> assetNodes = SceneNode->GetChildrenNodes();
	int randNum = FMath::RandRange(0, assetNodes.Max() - 1);

	const TArray<FXmlNode*> mediaFileNodes = assetNodes[randNum]->GetChildrenNodes();

	FString durationAsString = mediaFileNodes[FilePathDurationIndex]->GetContent();

	mediaFilePath = mediaFileNodes[FilePathIndex]->GetContent();
	duration = FCString::Atof(*durationAsString);
}
FString UCustomFileReadingLibrary::GetAdXMLFileLocation( FString & a_strFilePath,FString &a_strXMLName)
{
	//FXmlFile file(L"C://Users/Kishore/Downloads/Vids/vids.xml");//C:\Users\Kishore\Downloads\Vids\vids.xml
	FString   mediaFilePath ="";

	FString ThePath = FPaths::ConvertRelativePathToFull(FPaths::RootDir());
	FText *OutReason = new FText();
	
	a_strFilePath = ThePath + L"StreamingPC_Data/StreamingAssets/STREAMING_ADS/";
	a_strXMLName = "AdsToPlayInfo.xml";

	ThePath = a_strFilePath + a_strXMLName;

	//Checking only the XML directly
	if (!FPaths::FileExists(ThePath))
	{
		
		mediaFilePath = "";
		GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Red, "ADSLOADING:Could not ADS read file ERROR:", OutReason);

	}
	else
	{
		mediaFilePath = ThePath;
		GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Blue, "ADSLOADING:Sucessfully read ads file:", OutReason);

	}
	//todo:Adde string as output
	PrintString("ADS LOADING:File name is :"+ ThePath);
	return ThePath;
}


void UCustomFileReadingLibrary::GetXMLInfo(FString &basePath,FString &fileName)
{
	/*
	FString FSettingsFilePath = FPaths::Combine(*FPaths::ProjectContentDir(), *FString("Assets/Settings/Settings.json"));

	FString strFileContents;
	FFileHelper::LoadFileToString(strFileContents, *FSettingsFilePath, FFileHelper::EHashOptions::EnableVerify);

	if (!FPaths::FileExists(*FSettingsFilePath))
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "Could not find the settings file in the file location; Default values loaded");
	}

	if (strFileContents.IsEmpty())
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "Could not load the settings file; Default values loaded");
	}


	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(strFileContents);
	if (!FJsonSerializer::Deserialize(JsonReader, JsonParsed))
	{
		GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Red, (TEXT("CPP: Could not parse JSON in Start Command %s"), strFileContents));
	}

	
	basePath = JsonParsed->GetStringField("AdsInformationXmlBaseAddress");
	fileName = JsonParsed->GetStringField("AdsInformationXmlName");
	*/
	GetAdXMLFileLocation(basePath,fileName);

}

void UCustomFileReadingLibrary::GetAds(TArray<FString>& InGameAds, bool& isInGameAdsStreamingRandom, TArray<FString>& SessionAds, bool& isSessionAdsStreamingRandom)
{
	FString basePath;
	FString fileName;

	GetXMLInfo(basePath, fileName);

	FString FXMLFilePath = FPaths::Combine(*basePath, *fileName);

	if (!FPaths::FileExists(*FXMLFilePath))
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "Please check the address for XML file in the settings file; Default values loaded");
		return;
	}


	FXmlFile file(FXMLFilePath);
	//FXmlFile file(L"C://Users/Kishore/Downloads/Vids/AdsInformation.xml");

	const FXmlNode* SceneNode = file.GetRootNode();
	const TArray<FXmlNode*> assetNodes = SceneNode->GetChildrenNodes();

	for (int i = 0; i < assetNodes.Num(); i++)
	{
		const TArray<FXmlNode*> nodes_1 = assetNodes[i]->GetChildrenNodes();

		if (nodes_1.Num() == 0)
		{
		//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, assetNodes[i]->GetContent());
			if (assetNodes[i]->GetTag() == "isInGameAdsStreamingRandom")
				isInGameAdsStreamingRandom = assetNodes[i]->GetContent() == "true";
			if (assetNodes[i]->GetTag() == "isSessionAdsStreamingRandom")
				isSessionAdsStreamingRandom = assetNodes[i]->GetContent() == "true";
		}

		for (int j = 0; j < nodes_1.Num(); j++)
		{
			FString tag = nodes_1[j]->GetTag();
			FString content = nodes_1[j]->GetContent();
			if (assetNodes[i]->GetTag() == "InGameAds")		//SessionAds.Add(content);
				InGameAds.Add(FPaths::Combine(*basePath, *nodes_1[j]->GetContent()));
			else
				SessionAds.Add(FPaths::Combine(*basePath, *nodes_1[j]->GetContent()));
		}
	}

}

void UCustomFileReadingLibrary::PrintInt(FString val, int iVal)
{
	PrintString(val + I(iVal));
}

void UCustomFileReadingLibrary::PrintFloat(FString val, float fVal)
{
	PrintString(val + F(fVal));
}

void UCustomFileReadingLibrary::PrintVector(FString val, FVector fVec)
{
	PrintString( val + 
		"F( " + F(fVec.X) +
		", " +	F(fVec.Y) +
		", " +	F(fVec.Z) +
		")"
	);
}
//REFERENCE:https://wiki.unrealengine.com/File_Management,_Create_Folders,_Delete_Files,_and_More

bool UCustomFileReadingLibrary::SaveToFile(FString a_strFileName,FString a_strContent)
{
	FString ThePath = FPaths::ConvertRelativePathToFull(FPaths::RootDir());
	//FString	a_strFilePath = ThePath + L"FPS_Logs";
	FString	a_strFilePath = ThePath + GetFPSLogFolderName();
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	// Directory Exists?
	//UE_LOG(LogTemp, Log, TEXT("FPS:Directory is:%s"), a_strFilePath);
	if (!PlatformFile.DirectoryExists(*a_strFilePath))
	{
	//	UE_LOG(LogTemp, Log, TEXT("FPS:No directoryFound,creating it:%s"), a_strFilePath);
		PlatformFile.CreateDirectory(*a_strFilePath);
	}

	a_strFilePath = a_strFilePath + L"/"+a_strFileName;

	FFileHelper::SaveStringToFile(a_strContent, *a_strFilePath);

	return true;
}

bool UCustomFileReadingLibrary::SaveStringToFile(FString a_strFileName, FString a_strContent)
{
	FString ThePath = FPaths::ConvertRelativePathToFull(FPaths::RootDir());
	//FString	a_strFilePath = ThePath + L"FPS_Logs";
	FString	a_strFilePath = ThePath + GetFPSLogFolderName();
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	// Directory Exists?
	//UE_LOG(LogTemp, Log, TEXT("FPS:Directory is:%s"), a_strFilePath);
	if (!PlatformFile.DirectoryExists(*a_strFilePath))
	{
		//	UE_LOG(LogTemp, Log, TEXT("FPS:No directoryFound,creating it:%s"), a_strFilePath);
		PlatformFile.CreateDirectory(*a_strFilePath);
	}

	a_strFilePath = a_strFilePath + L"/" + a_strFileName;

	FFileHelper::SaveStringToFile(a_strContent, *a_strFilePath);

	return true;
}


void UCustomFileReadingLibrary::PrintString(FString val)
{
	//return;
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, (*val));

	UE_LOG(LogTemp, Log, TEXT("%s"), *val);
}
FString UCustomFileReadingLibrary::GetFPSLogFolderName()
{
	//const FString c_strLogFolderName = L"FPS_Logs";
	FString strFolderName = L"FPS_Logs";
	return strFolderName;
}

void UCustomFileReadingLibrary::PrintRed(FString val)
{
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, (*val));
}

FString UCustomFileReadingLibrary::I(int val)
{
	return FString::FromInt(val);
}

FString UCustomFileReadingLibrary::F(float val)
{
	return FString::SanitizeFloat(val);
}

void UCustomFileReadingLibrary::set_rotation_at_spline_point(USplineComponent* target, const int32 point_index, const FRotator rotation) //exactly the same as in .h but without 'static' and with Uspline_extensions:: in front of the function name
{
	FInterpCurveQuat& SplineRotInfo = target->GetSplinePointsRotation(); //get the array of rotation data in the spline component

	FInterpCurvePoint<FQuat>& EditedRotPoint = SplineRotInfo.Points[point_index]; //get the point to edit

	FQuat NewRot = rotation.Quaternion(); //convert the given rotation into a quaternion

	EditedRotPoint.OutVal = NewRot; //set the new rotation of the selected point

}