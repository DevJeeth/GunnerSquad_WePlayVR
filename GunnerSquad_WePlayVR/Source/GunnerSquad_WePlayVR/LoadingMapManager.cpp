// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadingMapManager.h"

// Sets default values
ALoadingMapManager::ALoadingMapManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALoadingMapManager::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALoadingMapManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FString ALoadingMapManager::GetLoadedLevel()
{
	UWorld* GameWorld = GetWorld();

	if (GameWorld != NULL)
	{
		FString FLevelName = GameWorld->GetMapName();
		return FLevelName;
	}
	return "";
	
}

void ALoadingMapManager::LoadLevel(FString a_strLevelName)
{
	
	//UGameplayStatics::OpenLevel(this, a_strLevelName);
}

