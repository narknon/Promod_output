#include "BattalionReplaySpectatorPlayerController.h"

void ABattalionReplaySpectatorPlayerController::ToggleReplayUI() {
}

ABattalionReplaySpectatorPlayerController::ABattalionReplaySpectatorPlayerController() {
    this->CurrentPlayerIndex = 0;
    this->SpecPawn = NULL;
    this->IsPlayingReplay = false;
    this->CurrentSpecPlayer = NULL;
    this->ReplayDataActor = NULL;
    this->IsUIHidden = false;
}

