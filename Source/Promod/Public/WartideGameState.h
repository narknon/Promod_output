#pragma once
#include "CoreMinimal.h"
#include "BombGameState.h"
#include "TeamLedger.h"
#include "WartideGameState.generated.h"

UCLASS(Blueprintable)
class AWartideGameState : public ABombGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTeamLedger> TeamLedgers;
    
    AWartideGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

