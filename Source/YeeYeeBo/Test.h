// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Test.generated.h"

UCLASS()
class YEEYEEBO_API ATest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATest(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(Category = Meshes, VisibleAnywhere)
		UStaticMeshComponent* Cube;
};
