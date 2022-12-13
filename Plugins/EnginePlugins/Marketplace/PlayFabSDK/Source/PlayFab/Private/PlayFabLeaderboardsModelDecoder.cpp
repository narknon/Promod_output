#include "PlayFabLeaderboardsModelDecoder.h"

class UPlayFabJsonObject;

FLeaderboardsUpdateStatisticsResponse UPlayFabLeaderboardsModelDecoder::decodeUpdateStatisticsResponseResponse(UPlayFabJsonObject* response) {
    return FLeaderboardsUpdateStatisticsResponse{};
}

FLeaderboardsIncrementStatisticVersionResponse UPlayFabLeaderboardsModelDecoder::decodeIncrementStatisticVersionResponseResponse(UPlayFabJsonObject* response) {
    return FLeaderboardsIncrementStatisticVersionResponse{};
}

FLeaderboardsGetStatisticDefinitionsResponse UPlayFabLeaderboardsModelDecoder::decodeGetStatisticDefinitionsResponseResponse(UPlayFabJsonObject* response) {
    return FLeaderboardsGetStatisticDefinitionsResponse{};
}

FLeaderboardsGetStatisticDefinitionResponse UPlayFabLeaderboardsModelDecoder::decodeGetStatisticDefinitionResponseResponse(UPlayFabJsonObject* response) {
    return FLeaderboardsGetStatisticDefinitionResponse{};
}

FLeaderboardsGetEntityLeaderboardResponse UPlayFabLeaderboardsModelDecoder::decodeGetEntityLeaderboardResponseResponse(UPlayFabJsonObject* response) {
    return FLeaderboardsGetEntityLeaderboardResponse{};
}

FLeaderboardsEmptyResponse UPlayFabLeaderboardsModelDecoder::decodeEmptyResponseResponse(UPlayFabJsonObject* response) {
    return FLeaderboardsEmptyResponse{};
}

FLeaderboardsDeleteStatisticsResponse UPlayFabLeaderboardsModelDecoder::decodeDeleteStatisticsResponseResponse(UPlayFabJsonObject* response) {
    return FLeaderboardsDeleteStatisticsResponse{};
}

UPlayFabLeaderboardsModelDecoder::UPlayFabLeaderboardsModelDecoder() {
}

