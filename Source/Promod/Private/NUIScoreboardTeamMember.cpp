#include "NUIScoreboardTeamMember.h"

int32 UNUIScoreboardTeamMember::GetPlayerPingInMS() const {
    return 0;
}

UNUIScoreboardTeamMember::UNUIScoreboardTeamMember() {
    this->PlayerStartingXP = 0;
    this->PlayerStartingProScore = 0;
    this->bPlayerReady = false;
    this->FFAVisibility = ESlateVisibility::Visible;
    this->WartideVisibility = ESlateVisibility::Visible;
    this->CTFVisibility = ESlateVisibility::Visible;
    this->DOMVisibility = ESlateVisibility::Visible;
    this->INFVisibility = ESlateVisibility::Visible;
}

