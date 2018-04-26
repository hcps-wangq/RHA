// Fill out your copyright notice in the Description page of Project Settings.

#include "Tunk.h"
#include "GameFramework/Pawn.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/Vector2D.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/PawnMovementComponent.h"
#include "WheeledVehicleMovementComponent.h"
#include "WheeledVehicle.h"
#include "Shell.h"
#include "Test.h"
#include "Engine.h"

#include <vector>
#include <iostream>


// Sets default values
//ATunk::ATunk()
ATunk::ATunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UWheeledVehicleMovementComponent>(AWheeledVehicle::VehicleMovementComponentName))
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Root = CreateDefaultSubobject<USceneComponent>("Root");

	//UWheeledVehicleMovementComponent* Movement = CastChecked<UWheeledVehicleMovementComponent>(this->GetVehicleMovement());

	//Creates visible object and camera
	Body = CreateDefaultSubobject<UStaticMeshComponent>("Body");
	Turret = CreateDefaultSubobject<UStaticMeshComponent>("Turret");
	LTread = CreateDefaultSubobject<UStaticMeshComponent>("LTread");
	RTread = CreateDefaultSubobject<UStaticMeshComponent>("RTread");
	LWheel = CreateDefaultSubobject<UStaticMeshComponent>("LWheel");
	RWheel = CreateDefaultSubobject<UStaticMeshComponent>("RWheel");
	Cannon = CreateDefaultSubobject<UStaticMeshComponent>("Cannon");
	TSpline = CreateDefaultSubobject<USplineComponent>("TSpline");

	Body->SetupAttachment(Root);
	Body->SetMassOverrideInKg("", 100.0);
	Body->SetCollisionProfileName(TEXT("Pawn"));
	Body->SetSimulatePhysics(true);
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ttest(TEXT("StaticMesh'/Game/models/ttest.FBX'"));
	//UStaticMesh* TLink = ttest.Object;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	SArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");

	SArm->SetupAttachment(Body);
	SArm->bAbsoluteRotation = true;
	SArm->TargetArmLength = 500.f;
	SArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 100.0f), FRotator(-60.0f, 0.0f, 0.0f));
	SArm->bEnableCameraLag = true;
	SArm->CameraLagSpeed = 5.0f;
	Camera->SetupAttachment(SArm);
	Camera->bUsePawnControlRotation = false;

	Turret->AttachToComponent(Body, FAttachmentTransformRules::KeepRelativeTransform, "turret");
	LTread->AttachToComponent(Body, FAttachmentTransformRules::KeepRelativeTransform, "left tread");
	RTread->AttachToComponent(Body, FAttachmentTransformRules::KeepRelativeTransform, "right tread");
	LWheel->AttachToComponent(Body, FAttachmentTransformRules::KeepRelativeTransform, "left wheel");
	RWheel->AttachToComponent(Body, FAttachmentTransformRules::KeepRelativeTransform, "right wheel");
	Cannon->AttachToComponent(Turret, FAttachmentTransformRules::KeepRelativeTransform, "cannon");
	TSpline->SetupAttachment(LWheel);

	MuzzleLoc = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	MuzzleLoc->SetupAttachment(Cannon);
	MuzzleLoc->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	FRotator TTargetRot = FRotator(0.0f, 0.0f, 0.0f);

	/*numPlates = 3;
	currLen = 0.0;
	length = TSpline->GetSplineLength();
	lenPoints = length / (float)numPlates;
	//UStaticMeshComponent* plateInstances[3];
	//plateInstances.resize(numPlates);
	//FSplinePoint* splinePoints[3];
	//splinePoints.resize(numPlates);
	for (int i = 0; i < numPlates; i++)
	{
	_temp = NewObject<UStaticMeshComponent>();
	_temp->SetStaticMesh(TLink);
	_temp->SetMobility(EComponentMobility::Movable);
	//TSpline->AddSplinePoint(TSpline->GetLocationAtDistanceAlongSpline(currLen, ESplineCoordinateSpace::Local), ESplineCoordinateSpace::Local, true);
	_shlemp = new FSplinePoint(0.0f, FVector(0, 0, 0));
	//SetLocationAtSplinePoint
	TSpline->AddPoint(*_shlemp);
	//_temp->SetWorldLocationAndRotation(FVector(0, 0, 0), FRotator());

	currLen += lenPoints;

	plateInstances[i] = std::move(_temp);
	splinePoints[i] = std::move(_shlemp);
	}*/
}

void ATunk::initialize()
{
	/*numPlates = 3;
	currLen = 0.0;
	length = TSpline->GetSplineLength();
	lenPoints = length / (float)numPlates;
	//UStaticMeshComponent* plateInstances[3];
	//plateInstances.resize(numPlates);
	//FSplinePoint* splinePoints[3];
	//splinePoints.resize(numPlates);
	for (int i = 0; i < numPlates; i++)
	{
	_temp = NewObject<UStaticMeshComponent>();
	_temp->SetStaticMesh(TLink);
	_temp->SetMobility(EComponentMobility::Movable);
	//TSpline->AddSplinePoint(TSpline->GetLocationAtDistanceAlongSpline(currLen, ESplineCoordinateSpace::Local), ESplineCoordinateSpace::Local, true);
	_shlemp = new FSplinePoint(0.0f, FVector(0, 0, 0));
	//SetLocationAtSplinePoint
	TSpline->AddPoint(*_shlemp);
	//_temp->SetWorldLocationAndRotation(FVector(0, 0, 0), FRotator());

	//currLen += lenPoints;

	plateInstances[i] = std::move(_temp);
	splinePoints[i] = std::move(_shlemp);
	}*/
}

// Called when the game starts or when spawned
void ATunk::BeginPlay()
{
	Super::BeginPlay();
	initialize();
}

// Called every frame
void ATunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (!MovementInput.IsZero())
	{

	Body->AddForce(Body->GetForwardVector() * MovementInput.X * 2000.0f, NAME_None, true);
		//Body->AddForce(Body->GetForwardVector() * MovementInput.X * 1000.0, NAME_None, true);
	//Body->AddTorqueInRadians(FVector(0.0f, 0.0f, MovementInput.Y * 500000.0f));
	Body->AddRelativeRotation(FRotator(0.0f, MovementInput.Y * 2.0f, 0.0f));
	/*
	FVector NewLocation = GetActorLocation();
	NewLocation += GetActorForwardVector() * MovementInput.X * DeltaTime;
	NewLocation += GetActorRightVector() * MovementInput.Y * DeltaTime;
	SetActorLocation(NewLocation);
	*/
	}

	{
		if (Zoomed)
		{
			ZoomFactor += DeltaTime / 0.5f;
		}
		else
		{
			ZoomFactor -= DeltaTime / 0.5f;
		}
		ZoomFactor = FMath::Clamp<float>(ZoomFactor, 0.0f, 1.0f);
		Camera->FieldOfView = FMath::Lerp<float>(90.0f, 60.0f, ZoomFactor);
		SArm->TargetArmLength = FMath::Lerp<float>(400.0f, 300.0f, ZoomFactor);
	}
	/* Dampened Turret Movement
	{
		FRotator NewRot = SArm->GetComponentRotation();
		float SetCamYaw = NewRot.Yaw + CameraInput.X;
		float TTargetCam = CameraInput.X + Body->RelativeRotation.Yaw + TTargetRot.Yaw;
		TTargetRot.Add(0.0f, CameraInput.X, 0.0f);
		Turret->SetRelativeRotation(UKismetMathLibrary::RInterpTo(FRotator(0.0f, Turret->RelativeRotation.Yaw, 0.0f), FRotator(0.0f, NewRot.Yaw - Body->RelativeRotation.Yaw, 0.0f), DeltaTime, (FMath::Abs(Turret->RelativeRotation.Yaw - NewRot.Yaw + Body->RelativeRotation.Yaw)) * 0.5f));
		NewRot.Yaw = CameraInput.X + TTargetRot.Yaw + Body->RelativeRotation.Yaw;
		NewRot.Pitch = FMath::Clamp(NewRot.Pitch + CameraInput.Y, -30.0f, 15.0f);
		Cannon->SetRelativeRotation(FRotator(0.0f, 0.0f, Cannon->RelativeRotation.Pitch - CameraInput.Y));
		SArm->SetWorldRotation(NewRot);
	}*/
	
	{
		FRotator NewRot = SArm->GetComponentRotation();
		if (CameraInput.X > 10.0f) {
			CameraInput.X = 10;
		}
		else if (CameraInput.X < -10.0f) {
			CameraInput.X = -10.0f;
		}
		float SetCamYaw = NewRot.Yaw + CameraInput.X;
		float TTargetCam = CameraInput.X + Body->RelativeRotation.Yaw + TTargetRot.Yaw;
		TTargetRot.Add(0.0f, CameraInput.X, 0.0f);
		NewRot.Pitch = FMath::Clamp(NewRot.Pitch + CameraInput.Y, -14.0f, 6.0f);
		Cannon->SetRelativeRotation(FRotator(0.0f, 0.0f, FMath::Clamp(Cannon->RelativeRotation.Roll - CameraInput.Y, -14.0f, 6.0f)));
		//Turret->SetRelativeRotation(FRotator(0.0f, Turret->RelativeRotation.Yaw + CameraInput.X, 0.0f));
		Turret->SetRelativeRotation(UKismetMathLibrary::RInterpTo(FRotator(0.0f, Turret->RelativeRotation.Yaw, 0.0f), FRotator(0.0f, NewRot.Yaw - Body->RelativeRotation.Yaw, 0.0f), DeltaTime, (FMath::Abs(Turret->RelativeRotation.Yaw - NewRot.Yaw + Body->RelativeRotation.Yaw)) * 0.5f));
		//NewRot.Yaw = CameraInput.X + Body->RelativeRotation.Yaw + Turret->RelativeRotation.Yaw;
		NewRot.Yaw = CameraInput.X + TTargetRot.Yaw + Body->RelativeRotation.Yaw;
		SArm->SetWorldRotation(NewRot);
	}
}

// Called to bind functionality to input
void ATunk::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Vroom", this, &ATunk::Vroom);
	PlayerInputComponent->BindAxis("Moorv", this, &ATunk::Moorv);
	PlayerInputComponent->BindAxis("CamX", this, &ATunk::CamX);
	PlayerInputComponent->BindAxis("CamY", this, &ATunk::CamY);

	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &ATunk::ZoomIn);
	PlayerInputComponent->BindAction("ZoomIn", IE_Released, this, &ATunk::ZoomOut);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ATunk::Fire);
}


void ATunk::Vroom(float Value)
{ 
  //AddMovementInput(GetActorForwardVector(), Value);
  //MovementInput.X = FMath::Clamp<float>(Value, -1.0f, 1.0f) * 100.0f;
  //Body->AddImpulse(FVector(0.0f, 0.0f, 1000.0f));
  MovementInput.X = Value;
}

void ATunk::Moorv(float Value)
{
  //AddMovementInput(GetActorRightVector(), Value);
  //MovementInput.Y = FMath::Clamp<float>(Value, -1.0f, 1.0f) * 100.0f;
  //Body->AddTorque(FVector(1.0f, 0.0f, 0.0f));
  MovementInput.Y = Value;
}

void ATunk::CamX(float AxisValue)
{
	CameraInput.X = AxisValue;
}

void ATunk::CamY(float AxisValue)
{
	CameraInput.Y = AxisValue;
}

void ATunk::ZoomIn() 
{
	Zoomed = true;
}

void ATunk::ZoomOut()
{
	Zoomed = false;
}

void ATunk::Fire()
{
	UWorld* const World = GetWorld();
	if (World != NULL)
	{
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

		const FRotator SpawnRotation = FRotator(-Cannon->RelativeRotation.Roll - Body->RelativeRotation.Roll, Turret->RelativeRotation.Yaw + Body->RelativeRotation.Yaw, 0.0f);
		const FVector SpawnLocation = ((MuzzleLoc != nullptr) ? MuzzleLoc->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

		AShell* Shell = World->SpawnActor<AShell>(SpawnLocation, SpawnRotation, ActorSpawnParams);
		if (Shell)
		{
			FVector FireDirection = SpawnRotation.Vector();
			Shell->InitVelocity(FireDirection);
		}
	}
}