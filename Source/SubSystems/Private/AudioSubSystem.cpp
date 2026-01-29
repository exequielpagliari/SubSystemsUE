// Fill out your copyright notice in the Description page of Project Settings.


#include "AudioSubSystem.h"

void UAudioSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);




	// Llamamos al evento de Blueprint
	ReceiveInitialize();
	// Esto DEBE aparecer en el Output Log al darle a Play
	UE_LOG(LogTemp, Warning, TEXT("AUDIO SYSTEM: Inicializado correctamente"));
}

bool UAudioSubSystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (this->GetClass()->IsInBlueprint() && Super::ShouldCreateSubsystem(Outer))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void UAudioSubSystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("AUDIO SYSTEM: Desinicializado"));

	// Llamamos al evento de Blueprint
	ReceiveDeinitialize();

	Super::Deinitialize();
}