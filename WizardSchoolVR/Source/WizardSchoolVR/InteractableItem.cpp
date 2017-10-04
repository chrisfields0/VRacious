// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractableItem.h"
#include "WizardPawn.h"

// Sets default values
AInteractableItem::AInteractableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bStartWithTickEnabled = false;
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
	FVector ActorLocation(int(GetActorLocation().X), int(GetActorLocation().Y), int(GetActorLocation().Z));
	if (FVector::Distance(GetActorLocation(), ObjectToLerpTo->GetComponentLocation()) < 20)
	{
		SetActorTickEnabled(false);
		FAttachmentTransformRules Rules(EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
		GetRootComponent()->AttachToComponent(ObjectToLerpTo, Rules);
	}
	else
	{
		SetActorLocation(FMath::Lerp(GetActorLocation(), ObjectToLerpTo->GetComponentLocation(), DeltaTime * 4));
	}
}

void AInteractableItem::BindToDelegate(AWizardPawn* const Player)
{
	Player->OnDropItemDelegate().BindUObject(this, &AInteractableItem::DropItem);
}

void AInteractableItem::DropItem(AWizardPawn* const Player, int HandThatTriggeredEvent)
{
	if (ObjectToLerpTo && static_cast<int>(ObjectToLerpTo->Hand) == HandThatTriggeredEvent)
	{
		Player->OnDropItemDelegate().Unbind();
		
		FDetachmentTransformRules Rules(EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, false);
		GetRootComponent()->DetachFromComponent(Rules);
		SetIsBeingInteractedWith(false);
		SetActorTickEnabled(false);
	}

}
