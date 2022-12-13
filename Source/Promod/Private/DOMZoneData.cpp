#include "DOMZoneData.h"

FDOMZoneData::FDOMZoneData() {
    this->State = EDOMZoneState::DOMZoneState_Neutral;
    this->Icon = NULL;
    this->AllegianceTeamIndex = 0;
    this->CaptureTeamIndex = 0;
    this->CaptureProgress = 0.00f;
}

