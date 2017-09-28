// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableItem.generated.h"

UCLASS()
class WIZARDSCHOOLVR_API AInteractableItem : public AActor
{	
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, Category = "Interactable Item")
	void LerpPosition(const FVector& EndLocation);

/*
 * Grab Iteraction Interface
 */
public: 

	UFUNCTION(BlueprintCallable, Category = "Grab Interaction")
	void ShowRing() {}
/*
 * Getters and Setters for Properties
 */
public:
	UFUNCTION(BlueprintCallable, Category = "Grab Interaction")
	bool GetAllowObjectToBeGrabbed() const { return bAllowObjectToBeGrabbed; }

	UFUNCTION(BlueprintCallable, Category = "Grab Interaction")
	void SetAllowObjectToBeGrabbed(bool bNewValue) { bAllowObjectToBeGrabbed = bNewValue; }

	UFUNCTION(BlueprintCallable, Category = "Grab Interaction")
	bool GetAllowObjectToBeLevitated() const { return bAllowObjectToBeLevitated; }

	UFUNCTION(BlueprintCallable, Category = "Grab Interaction")
	void SetAllowObjectToBeLevitated(bool bNewValue) { bAllowObjectToBeLevitated = bNewValue; }

	UFUNCTION(BlueprintCallable, Category = "Grab Interaction")
	bool GetIsBeingInteractedWith() const { return bIsBeingInteractedWith; }

	UFUNCTION(BlueprintCallable, Category = "Grab Interaction")
	void SetIsBeingInteractedWith(bool bNewValue) { bIsBeingInteractedWith = bNewValue; }

/*
 * Properties
 */
protected:

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	bool bAllowObjectToBeGrabbed;
	UPROPERTY(EditDefaultsOnly)
	bool bAllowObjectToBeLevitated;
	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	bool bIsBeingInteractedWith;

};
