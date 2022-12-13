#include "NUIScoreboardTeam.h"

class ABattalionGameState;

void UNUIScoreboardTeam::UpdateTeamData(ABattalionGameState* GameState) {
}

void UNUIScoreboardTeam::UpdateMembers(ABattalionGameState* GameState) {
}

void UNUIScoreboardTeam::InitializeMemberWidgetListCustom(const FScoreboardData& ScoreboardData) {
}

void UNUIScoreboardTeam::InitializeMemberWidgetList() {
}

UNUIScoreboardTeam::UNUIScoreboardTeam() {
    this->TeamIndex = 0;
    this->TeamData = NULL;
    this->NationIconVisibility = ESlateVisibility::Visible;
    this->TeamScoreVisibility = ESlateVisibility::Visible;
    this->CTFFlagStateVisibility = ESlateVisibility::Visible;
    this->FFAVisibility = ESlateVisibility::Visible;
    this->WartideVisibility = ESlateVisibility::Visible;
    this->CTFVisibility = ESlateVisibility::Visible;
    this->DOMVisibility = ESlateVisibility::Visible;
    this->INFVisibility = ESlateVisibility::Visible;
    this->MemberWidgetListInitializing = false;
}

