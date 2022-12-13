#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ExperimentationGetLatestScorecardRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationGetLatestScorecardRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExperimentId;
    
    FExperimentationGetLatestScorecardRequest();
};

