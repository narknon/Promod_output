#include "BattalionMedalEntity.h"

FBattalionMedalEntity::FBattalionMedalEntity() {
    this->XPAward = 0;
    this->MedalImage = NULL;
    this->Rarity = EBattalionMedalRarity::Common;
    this->AudioEvent = NULL;
    this->PostMedalInChat = false;
    this->Category = EBattalionMedalCategory::Uncategorised;
}

