#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ExperimentationStartExperimentRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationStartExperimentRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExperimentId;
    
    FExperimentationStartExperimentRequest();
};

