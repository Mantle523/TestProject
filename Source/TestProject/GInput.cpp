// Fill out your copyright notice in the Description page of Project Settings.


#include "GInput.h"

// Sets default values
AGInput::AGInput()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

bool AGInput::OverwriteText() const
{
	return (true);
}

// Called when the game starts or when spawned
void AGInput::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGInput::Change()
{
	hasChanged = !hasChanged;
}

// Called to bind functionality to input
void AGInput::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

