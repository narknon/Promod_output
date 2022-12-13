#include "OnFireAwardData.h"

FOnFireAwardData::FOnFireAwardData() {
    this->AwardType = EOnFireAwardType::None;
    this->Score = 0.00f;
    this->TimingType = EOnFireAwardTiming::Instant;
    this->ScalingSpeed = 0.00f;
    this->bCurrentlyActive = false;
    this->LinkedEntryWidget = NULL;
}

