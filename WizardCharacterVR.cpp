// Fill out your copyright notice in the Description page of Project Settings.

#include "WizardCharacterVR.h"
#include "HeadMountedDisplayFunctionLibrary.h"

// Sets default values
AWizardCharacterVR::AWizardCharacterVR()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create VR Controllers and unparent them 
	L_MotionController       = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->Hand = EControllerHand::Left;
	L_MotionController->SetupAttachment(RootComponent);
	R_MotionController		 = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->Hand = EControllerHand::Right;
	R_MotionController->SetupAttachment(RootComponent);

	// Create the mesh components for the controllers
	L_HandMesh			 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("L_HandMesh"));
	L_HandMesh->SetupAttachment(L_MotionController);
	R_HandMesh			 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("R_HandMesh"));
	R_HandMesh->SetupAttachment(R_MotionController);
}

// Called when the game starts or when spawned
void AWizardCharacterVR::BeginPlay()
{
	Super::BeginPlay();

	// enable the vr tracking for the headset and set the tracking origin to Floor Level for Oculus and Vive
	UHeadMountedDisplayFunctionLibrary::EnableHMD(true);
	UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);

	// Invert scale on hand mesh create left-hand
	L_HandMesh->SetWorldScale3D(FVector(1.0, 1.0, -1.0));
}

// Called every frame
void AWizardCharacterVR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void AWizardCharacterVR::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("GrabLeft", IE_Pressed, this, &AWizardCharacterVR::GrabLeftPressed);
	PlayerInputComponent->BindAction("GrabLeft", IE_Released, this, &AWizardCharacterVR::GrabLeftReleased);
	PlayerInputComponent->BindAction("GrabRight", IE_Pressed, this, &AWizardCharacterVR::GrabRightPressed);
	PlayerInputComponent->BindAction("GrabRight", IE_Released, this, &AWizardCharacterVR::GrabRightReleased);
}


void AWizardCharacterVR::GrabLeftPressed()
{

}

void AWizardCharacterVR::GrabLeftReleased()
{

}

void AWizardCharacterVR::GrabRightPressed()
{

}

void AWizardCharacterVR::GrabRightReleased()
{

}