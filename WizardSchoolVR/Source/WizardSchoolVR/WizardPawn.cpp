// Fill out your copyright notice in the Description page of Project Settings.

#include "WizardPawn.h"
#include "HeadMountedDisplayFunctionLibrary.h"

// Sets default values
AWizardPawn::AWizardPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VROrigin = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	VROrigin->SetupAttachment(RootComponent);
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VROrigin);
	// Create VR Controllers
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->Hand = EControllerHand::Left;
	L_MotionController->SetupAttachment(VROrigin);
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->Hand = EControllerHand::Right;
	R_MotionController->SetupAttachment(VROrigin);
	// Create the mesh components for the controllers
	L_HandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("L_HandMesh"));
	L_HandMesh->SetupAttachment(L_MotionController);

	R_HandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("R_HandMesh"));
	R_HandMesh->SetupAttachment(R_MotionController);
}

// Called when the game starts or when spawned
void AWizardPawn::BeginPlay()
{
	Super::BeginPlay();
	UHeadMountedDisplayFunctionLibrary::EnableHMD(true);
	/* NOTICE: this actually isn't working as intended will look at later
	 * UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor); 
	 */
	// Invert scale on hand mesh create left-hand
	L_HandMesh->SetWorldScale3D(FVector(1.0, 1.0, -1.0));
}

// Called every frame
void AWizardPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWizardPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("GrabLeft", IE_Pressed, this, &AWizardPawn::GrabLeftPressed);
	PlayerInputComponent->BindAction("GrabLeft", IE_Released, this, &AWizardPawn::GrabLeftReleased);
	PlayerInputComponent->BindAction("GrabRight", IE_Pressed, this, &AWizardPawn::GrabRightPressed);
	PlayerInputComponent->BindAction("GrabRight", IE_Released, this, &AWizardPawn::GrabRightReleased);
}


void AWizardPawn::GrabLeftPressed()
{

}

void AWizardPawn::GrabLeftReleased()
{

}

void AWizardPawn::GrabRightPressed()
{

}

void AWizardPawn::GrabRightReleased()
{

}