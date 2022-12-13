#include "TugOfWarMonorailPath.h"

void ATugOfWarMonorailPath::NetMulti_OnSuddenDeathStarted_Implementation(const float InSuddenDeathWinPercentage) {
}

ATugOfWarMonorailPath::ATugOfWarMonorailPath() {
    this->bTeam0IsAt0thSplinePoint = true;
    this->AttackersTugOfWarSpeedMultiplier = 1.00f;
    this->DefaultTugOfWarMonorailSpeedMultiplier = 0.10f;
    this->DisableTugOfWarTime = 2.50f;
    this->EnableTugOfWarTime = 1.00f;
    this->bIsInSuddenDeath = false;
    this->SuddenDeathWinPercentage = 0.00f;
}

