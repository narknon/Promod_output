#include "FireUp_HandCannon.h"

void AFireUp_HandCannon::Client_FinishAction_Implementation() {
}

AFireUp_HandCannon::AFireUp_HandCannon() {
    this->HandCannonWeaponClass = NULL;
    this->SpawnedHandCannon = NULL;
    this->PreviousSlotType = ESlotType::Primary;
    this->CachedKills = 0;
}

