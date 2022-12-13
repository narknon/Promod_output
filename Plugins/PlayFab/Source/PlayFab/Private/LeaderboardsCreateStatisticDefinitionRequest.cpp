#include "LeaderboardsCreateStatisticDefinitionRequest.h"

FLeaderboardsCreateStatisticDefinitionRequest::FLeaderboardsCreateStatisticDefinitionRequest() {
    this->AggregationMethod = EStatisticAggregationMethod::pfenum_Last;
    this->LeaderboardDefinition = NULL;
}

