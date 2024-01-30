// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyBestFriend.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//UPROPERTY(meta = (AllowPrivateAccess = "true"), BlueprintReadWrite, Category = " component ", EditDefaultsOnly)
	UPROPERTY()
	class UCapsuleComponent* CapsuleComp;

	UPROPERTY()
	UStaticMeshComponent* BaseMesh;

	UPROPERTY()
	UStaticMeshComponent* TurretMesh;
	
	UPROPERTY()
	USceneComponent* ProjectileSpawnPoint;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};