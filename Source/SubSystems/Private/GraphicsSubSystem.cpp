// Fill out your copyright notice in the Description page of Project Settings.


#include "GraphicsSubSystem.h"

void UGraphicsSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);





	// Llamamos al evento de Blueprint
	ReceiveInitialize();
	// Esto DEBE aparecer en el Output Log al darle a Play
	UE_LOG(LogTemp, Warning, TEXT("Graphical SYSTEM: Inicializado correctamente"));
}

void UGraphicsSubSystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Graphical SYSTEM: Desinicializado"));

	// Llamamos al evento de Blueprint
	ReceiveDeinitialize();

	Super::Deinitialize();
}