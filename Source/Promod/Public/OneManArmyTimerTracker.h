#pragma once
#include "CoreMinimal.h"
#include "OneManArmyTimerTracker.generated.h"

USTRUCT(BlueprintType)
struct FOneManArmyTimerTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Kills;
    
    PROMOD_API FOneManArmyTimerTracker();
};

