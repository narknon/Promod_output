#include "FireupState.h"

FFireupState::FFireupState() {
    this->FireUpPercentage = 0.00f;
    this->Timestamp = 0.00f;
    this->bHasFireup = false;
    this->bFireupActive = false;
    this->bAwardedOnTimer = false;
    this->TimeToRegen = 0.00f;
}

