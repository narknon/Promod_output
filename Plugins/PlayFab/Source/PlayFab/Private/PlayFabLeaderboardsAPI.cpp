#include "PlayFabLeaderboardsAPI.h"

class UPlayFabLeaderboardsAPI;
class UObject;

UPlayFabLeaderboardsAPI* UPlayFabLeaderboardsAPI::UpdateStatistics(FLeaderboardsUpdateStatisticsRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessUpdateStatistics onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabLeaderboardsAPI* UPlayFabLeaderboardsAPI::IncrementStatisticVersion(FLeaderboardsIncrementStatisticVersionRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessIncrementStatisticVersion onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabLeaderboardsAPI::HelperUpdateStatistics(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabLeaderboardsAPI::HelperIncrementStatisticVersion(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabLeaderboardsAPI::HelperGetStatisticDefinitions(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabLeaderboardsAPI::HelperGetStatisticDefinition(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabLeaderboardsAPI::HelperGetLeaderboardForEntities(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabLeaderboardsAPI::HelperGetLeaderboardAroundEntity(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabLeaderboardsAPI::HelperGetLeaderboard(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabLeaderboardsAPI::HelperDeleteStatistics(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabLeaderboardsAPI::HelperDeleteStatisticDefinition(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabLeaderboardsAPI::HelperCreateStatisticDefinition(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

UPlayFabLeaderboardsAPI* UPlayFabLeaderboardsAPI::GetStatisticDefinitions(FLeaderboardsGetStatisticDefinitionsRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessGetStatisticDefinitions onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabLeaderboardsAPI* UPlayFabLeaderboardsAPI::GetStatisticDefinition(FLeaderboardsGetStatisticDefinitionRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessGetStatisticDefinition onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabLeaderboardsAPI* UPlayFabLeaderboardsAPI::GetLeaderboardForEntities(FLeaderboardsGetLeaderboardForEntitiesRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessGetLeaderboardForEntities onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabLeaderboardsAPI* UPlayFabLeaderboardsAPI::GetLeaderboardAroundEntity(FLeaderboardsGetLeaderboardAroundEntityRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessGetLeaderboardAroundEntity onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabLeaderboardsAPI* UPlayFabLeaderboardsAPI::GetLeaderboard(FLeaderboardsGetEntityLeaderboardRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessGetLeaderboard onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabLeaderboardsAPI* UPlayFabLeaderboardsAPI::DeleteStatistics(FLeaderboardsDeleteStatisticsRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessDeleteStatistics onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabLeaderboardsAPI* UPlayFabLeaderboardsAPI::DeleteStatisticDefinition(FLeaderboardsDeleteStatisticDefinitionRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessDeleteStatisticDefinition onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabLeaderboardsAPI* UPlayFabLeaderboardsAPI::CreateStatisticDefinition(FLeaderboardsCreateStatisticDefinitionRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessCreateStatisticDefinition onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabLeaderboardsAPI::UPlayFabLeaderboardsAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

