#pragma once
#include "CoreMinimal.h"
#include "PromodTDMPlayerState.h"
#include "CargoPlayerState.generated.h"

UCLASS(Blueprintable)
class ACargoPlayerState : public APromodTDMPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ObjectiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentContestingTimer;
    
public:
    ACargoPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

