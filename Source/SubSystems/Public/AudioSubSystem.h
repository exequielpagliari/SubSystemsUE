// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AudioSubSystem.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable,BlueprintType)
class SUBSYSTEMS_API UAudioSubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
    
protected:
    virtual UWorld* GetWorld() const override
    {
        if (IsTemplate() || !GetOuter())
        {
            return nullptr;
        }
        return GetOuter()->GetWorld();
    }

public:
    virtual bool ShouldCreateSubsystem(UObject* Outer) const;
    // Begin USubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    // End USubsystem

    UFUNCTION(BlueprintImplementableEvent, Category = "Events", meta = (DisplayName = "On Initialize"))
    void ReceiveInitialize();

    UFUNCTION(BlueprintImplementableEvent, Category = "Events", meta = (DisplayName = "On Deinitialize"))
    void ReceiveDeinitialize();
};
