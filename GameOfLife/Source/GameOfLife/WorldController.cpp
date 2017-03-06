// Fill out your copyright notice in the Description page of Project Settings.

#include "GameOfLife.h"
#include "SL_Generated.h"
#include "WorldController.h"


// Sets default values
AWorldController::AWorldController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldController::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(RunLifeTimerHandle, this, &AWorldController::RunLife, pause, true);

	sl_init(threads);
	sl_stressTestInput(width, threads, grid);

	UWorld* World = GetWorld();
	FRotator SpawnRotation(0, 0, 0);
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = Instigator;


	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			FVector SpawnLocation(8000, (x * 150) - ((width * 150) / 2), (y * 150) - ((width * 150) / 2));
			ALifeCell* Cell = World->SpawnActor<ALifeCell>(LifeCellClass, SpawnLocation, SpawnRotation, SpawnParams);
			Cell->SetActorHiddenInGame(grid[y + 1][x + 1] == 0);
			cells.Add(Cell);
		}
	}

}

void AWorldController::RunLife()
{

	GEngine->AddOnScreenDebugMessage(-1, 0.25f, FColor::Red, TEXT("Calling Life."));

	sl_life(grid, threads, result);
	grid.hard_copy(result, 0);

	cells[0]->SetActorHiddenInGame(grid[1][1] == 0);




	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			cells[y * width + x]->SetActorHiddenInGame(grid[y + 1][x + 1] == 0);
		}
	}

}

// Called every frame
void AWorldController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*
	cells[tick]->SetActorHiddenInGame(hidden);

	tick = tick >= 99 ? 0 : tick + 1;
	hidden = tick == 0 ? !hidden : hidden;
	*/
}

