// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MotionControllerComponent.h"
#include "Camera/CameraComponent.h"
#include "WizardPawn.generated.h"

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
 *	HMD Character Interface
 */
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* VROrigin;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;
private:

/*
 *	Motion Controller Component Interface
 */
protected:


	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* L_MotionController;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* L_HandMesh;

	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* R_MotionController;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* R_HandMesh;

private:
	void GrabLeftPressed();
	void GrabLeftReleased();
	void GrabRightPressed();
	void GrabRightReleased();
	
};
