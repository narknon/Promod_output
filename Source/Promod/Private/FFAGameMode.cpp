#include "FFAGameMode.h"

AFFAGameMode::AFFAGameMode() {
    this->EndOnMatchPointWin = false;
    this->WeaponSelectGracePeriod = 0.00f;
    this->RoundTimeLeftUntilStopBackfill = -100.00f;
    this->ScorePctToStopBackfill = 2.00f;
    this->AlreadyStoppedBackfill = false;
    this->MatchEndHUDShown = false;
    this->FFAGameState = NULL;
    this->CurrentlyWinningPC = NULL;
    this->CurrentlySecondPlacePC = NULL;
}

