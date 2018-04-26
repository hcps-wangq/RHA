// Fill out your copyright notice in the Description page of Project Settings.

#include "Test.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ATest::ATest(const FObjectInitializer& ObjectInitializer)
{
	auto Box = ObjectInitializer.CreateDefaultSubobject<UBoxComponent>(this, FName("Box"));
	Box->bHiddenInGame = false;
	Box->Mobility = EComponentMobility::Movable;
	RootComponent = Box;
	
	Cube = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("CubeMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeM(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	UStaticMesh* CubeMesh = CubeM.Object;
	Cube->SetStaticMesh(CubeMesh);
	Cube->SetupAttachment(Box);
}