#include "LeaderboardsGetStatisticDefinitionResponse.h"

FLeaderboardsGetStatisticDefinitionResponse::FLeaderboardsGetStatisticDefinitionResponse() {
    this->AggregationMethod = EStatisticAggregationMethod::pfenum_Last;
    this->LeaderboardDefinition = NULL;
    this->Version = 0;
}

