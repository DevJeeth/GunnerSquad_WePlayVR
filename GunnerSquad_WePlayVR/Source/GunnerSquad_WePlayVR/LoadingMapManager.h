// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoadingMapManager.generated.h"


UCLASS()
class GUNNERSQUAD_WEPLAYVR_API ALoadingMapManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALoadingMapManager();

	UPROPERTY(BlueprintReadOnly)
		FString m_strLobbyLevel;

	UPROPERTY(BlueprintReadOnly)
		FString m_strGameLevel;

	UPROPERTY(BlueprintReadOnly)
		FString m_strOutroLevel;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "OPSManager/MapManagement")
	FString GetLoadedLevel();

	UFUNCTION(BlueprintCallable, Category = "OPSManager/MapManagement")
	void LoadLevel(FString a_strLevelName);
};
