#include "NUIScoreboard.h"

class ABattalionPlayerState;

void UNUIScoreboard::UpdateScoreboardCustom(const TArray<FScoreboardData>& Data) {
}

void UNUIScoreboard::UpdateScoreboard() {
}

void UNUIScoreboard::SetUpScoreboard() {
}

void UNUIScoreboard::RemovePlayerFromTeam(ABattalionPlayerState* RemovedPlayer, int32 TeamIndex) {
}

void UNUIScoreboard::RemovePlayerFromSpectators(ABattalionPlayerState* RemovedPlayer) {
}



void UNUIScoreboard::AddPlayerToTeam(ABattalionPlayerState* AddedPlayer, int32 TeamIndex) {
}

void UNUIScoreboard::AddPlayerToSpectators(ABattalionPlayerState* AddedPlayer) {
}

UNUIScoreboard::UNUIScoreboard() {
    this->bHideTeamsPostMatch = false;
    this->bShowTeamHeaders = false;
    this->bShowTeamNationIcons = false;
    this->bShowTeamScores = false;
    this->bShowTeamPlayerCount = false;
    this->bIncludeSpectators = false;
    this->bShowSpectatorPlayerCount = false;
    this->SpectatorsWidget = NULL;
    this->TeamGroupWidgetClass = NULL;
    this->SpectatorGroupWidgetClass = NULL;
    this->TeamsGroupVisibility = ESlateVisibility::Visible;
    this->FFAVisibility = ESlateVisibility::Visible;
    this->WartideVisibility = ESlateVisibility::Visible;
    this->CTFVisibility = ESlateVisibility::Visible;
    this->DOMVisibility = ESlateVisibility::Visible;
}

