#include "AwardManager.h"

class UObject;
class APlayerController;
class UAwardManager;

void UAwardManager::ResetAwards() {
}

void UAwardManager::RegisterScalingValue(EOnFireAwardType AwardType, float NewValue) {
}

void UAwardManager::RegisterScalingAwardStart(EOnFireAwardType AwardType) {
}

void UAwardManager::RegisterScalingAwardEnd(EOnFireAwardType AwardType) {
}

void UAwardManager::RegisterInstantAward(EOnFireAwardType AwardType) {
}

void UAwardManager::OnAnyKill() {
}

UAwardManager* UAwardManager::GetAwardManagerFromWorldContext(UObject* WorldContext) {
    return NULL;
}

UAwardManager* UAwardManager::GetAwardManagerFromPlayerController(APlayerController* PlayerController) {
    return NULL;
}

UAwardManager::UAwardManager() {
    this->OnFireAwardsDataAsset = NULL;
}

