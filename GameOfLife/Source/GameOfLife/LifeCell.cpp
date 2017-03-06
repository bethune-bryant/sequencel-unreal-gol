// Fill out your copyright notice in the Description page of Project Settings.

#include "GameOfLife.h"
#include "LifeCell.h"


// Sets default values
ALifeCell::ALifeCell()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ALifeCell::BeginPlay()
{
	Super::BeginPlay();
	
	GEngine->AddOnScreenDebugMessage(-1, 0.25f, FColor::Red, TEXT("Cell spawned."));
}

// Called every frame
void ALifeCell::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

