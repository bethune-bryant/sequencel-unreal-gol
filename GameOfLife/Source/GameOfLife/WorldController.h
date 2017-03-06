// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "LifeCell.h"
#include "SL_Generated.h"
#include "WorldController.generated.h"

UCLASS()
class GAMEOFLIFE_API AWorldController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldController();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	// Projectile class to spawn.
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class ALifeCell> LifeCellClass;

	TArray<ALifeCell*> cells;

	int tick = 0;
	bool hidden = true;

	int width = 101;
	int height = 101;

	float pause = 0.5f;

	Sequence< Sequence< int > > grid;
	Sequence< Sequence< int > > result;

	int threads = 4;

	void RunLife();

	FTimerHandle RunLifeTimerHandle;

};
