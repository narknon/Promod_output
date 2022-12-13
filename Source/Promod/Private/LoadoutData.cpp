#include "LoadoutData.h"

FLoadoutData::FLoadoutData() {
    this->ClassName = EClassName::ASSAULT;
    this->FireUpSlot_Quick = EFireUpType::None;
    this->FireUpSlot = EFireUpType::None;
    this->bIsFavourite = false;
    this->bIsDefault = false;
}

