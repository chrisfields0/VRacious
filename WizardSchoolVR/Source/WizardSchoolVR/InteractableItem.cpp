// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractableItem.h"


// Sets default values
AInteractableItem::AInteractableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bAllowObjectToBeGrabbed = true;
	bAllowObjectToBeLevitated = true;
	bIsBeingInteractedWith = false;
}

// Called when the game starts or when spawned
void AInteractableItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractableItem::LerpPosition_Implementation(const FVector & EndLocation)
{
}

