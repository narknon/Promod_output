#include "HUDMaster.h"

class UAwardManager;
























































































bool UHUDMaster::IsOnFireSystemEnabled() const {
    return false;
}










bool UHUDMaster::GetIsLeaderboardVisible_Implementation() {
    return false;
}

UAwardManager* UHUDMaster::GetAwardManager() {
    return NULL;
}








void UHUDMaster::ClearUIOnRespawn() {
}

void UHUDMaster::ClearUIOnDeath() {
}










UHUDMaster::UHUDMaster() : UUserWidget(FObjectInitializer::Get()) {
    this->AwardManager = NULL;
}

