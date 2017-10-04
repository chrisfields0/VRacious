// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MotionControllerComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"

#include "WizardPawn.generated.h"

class AWizardPawn;
class AInteractableItem;

DECLARE_DELEGATE_TwoParams(FOnDropItem, AWizardPawn* const, int);

UCLASS()
class WIZARDSCHOOLVR_API AWizardPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AWizardPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

/*
 * Grab Interaction System 
 */
public:
	UFUNCTION(BlueprintCallable, Category = "Grab Interaction System")
	void UpdateClosestInteractableToHand(USphereComponent* InteractionSphere, bool bForLeftController);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Grab Iteraction System")
	AInteractableItem* GetLeftClosestInteractableItem() const { return L_ClosestInteractableItem.Get(); }
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Grab Iteraction System")
	AInteractableItem* GetRightlosestInteractableItem() const { return R_ClosestInteractableItem.Get(); }
	FOnDropItem& OnDropItemDelegate() { return OnDropItem; }
protected:
	TWeakObjectPtr<AInteractableItem> L_ClosestInteractableItem;
	TWeakObjectPtr<AInteractableItem> R_ClosestInteractableItem;
	FOnDropItem OnDropItem;

/*
 *	HMD Character 
 */
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USceneComponent* VROrigin;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

/*
 *	Motion Controller Components
 */
protected:
	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* L_MotionController;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* L_HandMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USphereComponent* L_InteractionBubble;


	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* R_MotionController;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* R_HandMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USphereComponent* R_InteractionBubble;

/*
 * Player Input
 */
protected:
	void GrabLeftPressed();
	void GrabLeftReleased();
	void GrabRightPressed();
	void GrabRightReleased();
	UFUNCTION(BlueprintImplementableEvent)
	void StartRecordingSpell();
	UFUNCTION(BlueprintImplementableEvent)
	void StopRecordingSpell();
	UFUNCTION(BlueprintImplementableEvent)
	void StartSpellRecognition();
	UFUNCTION(BlueprintImplementableEvent)
	void StopSpellRecognition();
};
