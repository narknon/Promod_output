#include "PlayFabExperimentationAPI.h"

class UPlayFabExperimentationAPI;
class UObject;

UPlayFabExperimentationAPI* UPlayFabExperimentationAPI::UpdateExperiment(FExperimentationUpdateExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessUpdateExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabExperimentationAPI* UPlayFabExperimentationAPI::StopExperiment(FExperimentationStopExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessStopExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabExperimentationAPI* UPlayFabExperimentationAPI::StartExperiment(FExperimentationStartExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessStartExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabExperimentationAPI::HelperUpdateExperiment(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabExperimentationAPI::HelperStopExperiment(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabExperimentationAPI::HelperStartExperiment(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabExperimentationAPI::HelperGetTreatmentAssignment(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabExperimentationAPI::HelperGetLatestScorecard(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabExperimentationAPI::HelperGetExperiments(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabExperimentationAPI::HelperDeleteExperiment(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabExperimentationAPI::HelperCreateExperiment(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

UPlayFabExperimentationAPI* UPlayFabExperimentationAPI::GetTreatmentAssignment(FExperimentationGetTreatmentAssignmentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessGetTreatmentAssignment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabExperimentationAPI* UPlayFabExperimentationAPI::GetLatestScorecard(FExperimentationGetLatestScorecardRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessGetLatestScorecard onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabExperimentationAPI* UPlayFabExperimentationAPI::GetExperiments(FExperimentationGetExperimentsRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessGetExperiments onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabExperimentationAPI* UPlayFabExperimentationAPI::DeleteExperiment(FExperimentationDeleteExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessDeleteExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabExperimentationAPI* UPlayFabExperimentationAPI::CreateExperiment(FExperimentationCreateExperimentRequest Request, UPlayFabExperimentationAPI::FDelegateOnSuccessCreateExperiment onSuccess, UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabExperimentationAPI::UPlayFabExperimentationAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

