// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GInput.generated.h"

UCLASS()
class TESTPROJECT_API AGInput : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGInput();

	// Changes G value
	UFUNCTION(BlueprintCallable, Category = "Whatever")
		void Change();

	// Returns G Value
	UFUNCTION(BlueprintCallable, Category = "Whatever")
		FORCEINLINE bool OverwriteText() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	bool hasChanged{ false };

public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
