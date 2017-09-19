// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MotionControllerComponent.h"
#include "WizardCharacterVR.generated.h"

UCLASS()
class WIZARDSIMVR_API AWizardCharacterVR : public ACharacter
{
	GENERATED_BODY()

public:
	/** Sets default values for this character's properties */
	AWizardCharacterVR();
	/** Called every frame */
	virtual void Tick(float DeltaTime) override;
	/** Called to bind functionality to input */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

/*
 *	HMD Character Interface
 */
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* VROrigin;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;
private:

/*
 *	Motion Controller Component Interface
 */
protected:	
	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* L_MotionController;
	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* R_MotionController;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* L_HandMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* R_HandMesh;

private:
	void GrabLeftPressed();
	void GrabLeftReleased();
	void GrabRightPressed();
	void GrabRightReleased();
};
