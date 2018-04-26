// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "UObject/UObjectGlobals.h"
#include "Shell.h"
#include <vector>
#include "Tunk.generated.h"

UCLASS()
class YEEYEEBO_API ATunk : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATunk(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere)
		USceneComponent* Root;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Body;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Turret;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* LTread;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* RTread;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* LWheel;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* RWheel;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Cannon;

	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* MuzzleLoc;

	UPROPERTY(EditAnywhere)
		FVector GunOffset;

	UPROPERTY(EditAnywhere, Category = Projectile)
		TSubclassOf<class AShell> ProjectileClass;

	UPROPERTY(EditAnywhere)
		UStaticMesh* TLink;

	UPROPERTY(EditAnywhere)
		USplineComponent* TSpline;

	UPROPERTY(EditAnywhere)
		class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
		int numPlates;

	UPROPERTY(EditAnywhere)
		float lenPoints;

	UPROPERTY(EditAnywhere)
		float currLen;

	UPROPERTY(EditAnywhere)
		float length;

	//UPROPERTY(EditAnywhere)
	//std::vector<UStaticMeshComponent*> plateInstances;
	//UPROPERTY(EditAnywhere)
	//std::vector<FSplinePoint*> splinePoints;

	//UStaticMeshComponent* plateInstances[3];
	//FSplinePoint* splinePoints[3];

	FVector2D MovementInput;
	FVector2D CameraInput;

	float ZoomFactor;
	bool Zoomed;

	FRotator TTargetRot;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	//void CreateTread(USplineComponent line, UStaticMeshComponent plate, int numPlates);

	UPROPERTY(EditAnywhere)
	USpringArmComponent* SArm;

	void initialize();


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Vroom(float Value);
	void Moorv(float Value);

	void CamX(float AxisValue);
	void CamY(float AxisValue);
	void ZoomIn();
	void ZoomOut();
	void Fire();
};