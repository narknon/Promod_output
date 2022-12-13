#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExperimentationCreateExperimentResult.h"
#include "ExperimentationGetTreatmentAssignmentResult.h"
#include "ExperimentationGetLatestScorecardResult.h"
#include "ExperimentationGetExperimentsResult.h"
#include "ExperimentationEmptyResponse.h"
#include "PlayFabExperimentationModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabExperimentationModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabExperimentationModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetTreatmentAssignmentResult decodeGetTreatmentAssignmentResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetLatestScorecardResult decodeGetLatestScorecardResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetExperimentsResult decodeGetExperimentsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationCreateExperimentResult decodeCreateExperimentResultResponse(UPlayFabJsonObject* response);
    
};

