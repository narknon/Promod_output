#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ExperimentationGetExperimentsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationGetExperimentsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FExperimentationGetExperimentsRequest();
};

