#include "HUDSpectator.h"

class ABattalionSpectatorPawn;










ABattalionSpectatorPawn* UHUDSpectator::GetSpectatingPawn() {
    return NULL;
}




UHUDSpectator::UHUDSpectator() {
    this->TeamAScore = 0;
    this->TeamBScore = 0;
    this->SpecCameraMode = ESpectatorCameraMode::FirstPerson;
    this->IsOutlineEnabled = false;
    this->AreGrenadeLinesEnabled = false;
    this->PCOwner = NULL;
    this->OwnerSpectatorPawn = NULL;
    this->CurrentlySpectating = NULL;
}

