// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveSubSystem.h"

void USaveSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);





	// Llamamos al evento de Blueprint
	ReceiveInitialize();
	// Esto DEBE aparecer en el Output Log al darle a Play
	UE_LOG(LogTemp, Warning, TEXT("SAVE SYSTEM: Inicializado correctamente"));
}

void USaveSubSystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("SAVE SYSTEM: Desinicializado"));

	// Llamamos al evento de Blueprint
	ReceiveDeinitialize();

	Super::Deinitialize();
}