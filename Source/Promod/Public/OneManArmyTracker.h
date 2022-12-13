#pragma once
#include "CoreMinimal.h"
#include "OneManArmyTimerTracker.h"
#include "OneManArmyTracker.generated.h"

class ABattalionPlayerControllerGMBase;

USTRUCT(BlueprintType)
struct FOneManArmyTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOneManArmyTimerTracker> TimerTrackers;
    
    PROMOD_API FOneManArmyTracker();
};

