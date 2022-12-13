#pragma once
#include "CoreMinimal.h"
#include "AimTrainingResults.generated.h"

USTRUCT(BlueprintType)
struct FAimTrainingResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveTrainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveTrainingTargetsHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveTrainingTotalAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveTrainingCurrentAccuracy;
    
    PROMOD_API FAimTrainingResults();
};

