#include "LoadoutCard.h"

FLoadoutCard::FLoadoutCard() {
    this->CardType = ELoadoutCardType::Blank;
    this->Nation = ENationType::Nation_FRIENDLY;
    this->Cost = 0;
    this->StackCount = 0;
    this->GrenadeCount = 0;
    this->SpecialGrenadeCount = 0;
}

