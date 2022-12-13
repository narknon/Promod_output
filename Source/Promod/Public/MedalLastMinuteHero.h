#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "LastMinuteKillTracker.h"
#include "MedalLastMinuteHero.generated.h"

class ATDMGameMode;

UCLASS(Blueprintable)
class UMedalLastMinuteHero : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATDMGameMode* TDMGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLastMinuteKillTracker> KillTrackers;
    
    UMedalLastMinuteHero();
};

