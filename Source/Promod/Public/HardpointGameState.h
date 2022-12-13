#pragma once
#include "CoreMinimal.h"
#include "PromodTDMGameState.h"
#include "EHardpointState.h"
#include "HardpointGameState.generated.h"

UCLASS(Blueprintable)
class AHardpointGameState : public APromodTDMGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentZoneTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EHardpointState CurrentHardpointState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentZoneAllegiance;
    
    AHardpointGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

