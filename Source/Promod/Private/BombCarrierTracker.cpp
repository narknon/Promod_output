#include "BombCarrierTracker.h"





ABombCarrierTracker::ABombCarrierTracker() {
    this->TrackedActor = NULL;
    this->TeamAllegiance = -1;
    this->bPingRequested = false;
    this->RequestedPingFrequency = -1.00f;
    this->TeamVisibility = ETeamVisibility::VisibleToNone;
}

