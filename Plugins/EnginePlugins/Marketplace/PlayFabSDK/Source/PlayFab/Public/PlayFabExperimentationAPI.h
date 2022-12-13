#pragma once
#include "CoreMinimal.h"
#include "ExperimentationGetExperimentsResult.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "ExperimentationEmptyResponse.h"
#include "ExperimentationGetLatestScorecardResult.h"
#include "PlayFabError.h"
#include "ExperimentationCreateExperimentResult.h"
#include "ExperimentationGetTreatmentAssignmentResult.h"
#include "ExperimentationUpdateExperimentRequest.h"
#include "OnPlayFabExperimentationRequestCompletedDelegate.h"
#include "ExperimentationStopExperimentRequest.h"
#include "ExperimentationStartExperimentRequest.h"
#include "PlayFabBaseModel.h"
#include "ExperimentationGetTreatmentAssignmentRequest.h"
#include "ExperimentationGetLatestScorecardRequest.h"
#include "ExperimentationGetExperimentsRequest.h"
#include "ExperimentationDeleteExperimentRequest.h"
#include "ExperimentationCreateExperimentRequest.h"
#include "PlayFabExperimentationAPI.generated.h"

class UPlayFabExperimentationAPI;
class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabExperimentationAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateExperiment, FExperimentationEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessStopExperiment, FExperimentationEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessStartExperiment, FExperimentationEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTreatmentAssignment, FExperimentationGetTreatmentAssignmentResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLatestScorecard, FExperimentationGetLatestScorecardResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetExperiments, FExperimentationGetExperimentsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteExperiment, FExperimentationEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateExperiment, FExperimentationCreateExperimentResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabExperimentationRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabExperimentationAPI();
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* UpdateExperiment(FExperimentationUpdateExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessUpdateExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* StopExperiment(FExperimentationStopExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessStopExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* StartExperiment(FExperimentationStartExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessStartExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateExperiment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperStopExperiment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperStartExperiment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTreatmentAssignment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLatestScorecard(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetExperiments(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteExperiment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateExperiment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* GetTreatmentAssignment(FExperimentationGetTreatmentAssignmentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessGetTreatmentAssignment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* GetLatestScorecard(FExperimentationGetLatestScorecardRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessGetLatestScorecard onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* GetExperiments(FExperimentationGetExperimentsRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessGetExperiments onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* DeleteExperiment(FExperimentationDeleteExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessDeleteExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabExperimentationAPI* CreateExperiment(FExperimentationCreateExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessCreateExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

