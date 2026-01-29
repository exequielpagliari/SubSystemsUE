// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SaveSubSystem.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class SUBSYSTEMS_API USaveSubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

    UWorld* GetWorld() const override
    {
        if (IsTemplate() || !GetOuter())
        {
            return nullptr;
        }
        return GetOuter()->GetWorld();
    }
public:
    // Begin USubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    // End USubsystem

    UFUNCTION(BlueprintImplementableEvent, Category = "Events", meta = (DisplayName = "On Initialize"))
    void ReceiveInitialize();

    UFUNCTION(BlueprintImplementableEvent, Category = "Events", meta = (DisplayName = "On Deinitialize"))
    void ReceiveDeinitialize();
};
