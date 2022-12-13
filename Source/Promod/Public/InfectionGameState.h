#pragma once
#include "CoreMinimal.h"
#include "TDMGameState.h"
#include "InfectionGameState.generated.h"

UCLASS(Blueprintable)
class AInfectionGameState : public ATDMGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 SurvivorTeamSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 InfectedAlive;
    
    AInfectionGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

