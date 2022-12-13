#include "CargoTeam.h"

void UCargoTeam::SetScore(float InScore) {
}

UCargoTeam::UCargoTeam() {
    this->TimeTaken = 0.00f;
    this->TimeRemaining = 0.00f;
    this->GracePeriodRemaining = 0.00f;
    this->LastReachedCheckpoint = 0;
    this->LastReachedCheckpointPip = 0;
}

