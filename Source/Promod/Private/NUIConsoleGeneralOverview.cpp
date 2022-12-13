#include "NUIConsoleGeneralOverview.h"












bool UNUIConsoleGeneralOverview::IsCurrentOverview(EGameOverview overview) const {
    return false;
}

bool UNUIConsoleGeneralOverview::IsBombTimerActive() {
    return false;
}





UNUIConsoleGeneralOverview::UNUIConsoleGeneralOverview() {
    this->GameOverview = EGameOverview::EGO_Wartide;
    this->AvatarWidgetClass = NULL;
    this->SpectatorScoreVisibility = ESlateVisibility::Visible;
    this->LeftTeamAvatarsVisibility = ESlateVisibility::Visible;
    this->RightTeamAvatarsVisibility = ESlateVisibility::Visible;
    this->LeftTeamAliveCountVisibility = ESlateVisibility::Visible;
    this->RightTeamAliveCountVisibility = ESlateVisibility::Visible;
    this->SpectatorBombInteractionTimerVisibility = ESlateVisibility::Visible;
    this->BombInteractionProgress = 0.00f;
    this->OpponentPlayerState = NULL;
    this->LeftLeaderVisibility = ESlateVisibility::Visible;
    this->RightLeaderVisibility = ESlateVisibility::Visible;
    this->LastZoneEntered = NULL;
}

