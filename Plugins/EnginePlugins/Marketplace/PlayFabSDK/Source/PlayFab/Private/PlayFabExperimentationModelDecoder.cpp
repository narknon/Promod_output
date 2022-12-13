#include "PlayFabExperimentationModelDecoder.h"

class UPlayFabJsonObject;

FExperimentationGetTreatmentAssignmentResult UPlayFabExperimentationModelDecoder::decodeGetTreatmentAssignmentResultResponse(UPlayFabJsonObject* response) {
    return FExperimentationGetTreatmentAssignmentResult{};
}

FExperimentationGetLatestScorecardResult UPlayFabExperimentationModelDecoder::decodeGetLatestScorecardResultResponse(UPlayFabJsonObject* response) {
    return FExperimentationGetLatestScorecardResult{};
}

FExperimentationGetExperimentsResult UPlayFabExperimentationModelDecoder::decodeGetExperimentsResultResponse(UPlayFabJsonObject* response) {
    return FExperimentationGetExperimentsResult{};
}

FExperimentationEmptyResponse UPlayFabExperimentationModelDecoder::decodeEmptyResponseResponse(UPlayFabJsonObject* response) {
    return FExperimentationEmptyResponse{};
}

FExperimentationCreateExperimentResult UPlayFabExperimentationModelDecoder::decodeCreateExperimentResultResponse(UPlayFabJsonObject* response) {
    return FExperimentationCreateExperimentResult{};
}

UPlayFabExperimentationModelDecoder::UPlayFabExperimentationModelDecoder() {
}

