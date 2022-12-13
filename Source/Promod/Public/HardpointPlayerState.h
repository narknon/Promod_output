#pragma once
#include "CoreMinimal.h"
#include "EHardpointState.h"
#include "PromodTDMPlayerState.h"
#include "HardpointPlayerState.generated.h"

class AHardpointZone;

UCLASS(Blueprintable)
class AHardpointPlayerState : public APromodTDMPlayerState {
    GENERATED_BODY()
public:
    AHardpointPlayerState();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetupNewPlayer(EHardpointState CurrentState, AHardpointZone* ActiveZone, float CurrentZoneTimer, AHardpointZone* NextZone);
    
};

