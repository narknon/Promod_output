#pragma once
#include "CoreMinimal.h"
#include "LiveFireTrainingDetails.generated.h"

USTRUCT(BlueprintType)
struct FLiveFireTrainingDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BotHealth;
    
    PROMOD_API FLiveFireTrainingDetails();
};

