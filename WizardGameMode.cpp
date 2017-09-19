// Fill out your copyright notice in the Description page of Project Settings.

#include "WizardGameMode.h"

#include "WizardCharacterVR.h"


AWizardGameMode::AWizardGameMode()
{
	DefaultPawnClass = AWizardCharacterVR::StaticClass();
}