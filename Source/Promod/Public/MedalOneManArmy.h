#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "OneManArmyTracker.h"
#include "MedalOneManArmy.generated.h"

class ATDMGameMode;

UCLASS(Blueprintable)
class UMedalOneManArmy : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATDMGameMode* TDMGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOneManArmyTracker> Trackers;
    
    UMedalOneManArmy();
};

