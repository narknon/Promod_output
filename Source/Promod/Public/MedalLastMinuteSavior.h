#pragma once
#include "CoreMinimal.h"
#include "LastMinuteSaviorKillTracker.h"
#include "MedalBase.h"
#include "MedalLastMinuteSavior.generated.h"

class ATDMGameMode;

UCLASS(Blueprintable)
class UMedalLastMinuteSavior : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATDMGameMode* TDMGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLastMinuteSaviorKillTracker> KillTrackers;
    
    UMedalLastMinuteSavior();
};

