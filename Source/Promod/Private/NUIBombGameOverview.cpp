#include "NUIBombGameOverview.h"


bool UNUIBombGameOverview::IsBombTimerActive() {
    return false;
}

UNUIBombGameOverview::UNUIBombGameOverview() {
    this->AvatarWidgetClass = NULL;
    this->SpectatorScoreVisibility = ESlateVisibility::Visible;
    this->LeftTeamAvatarsVisibility = ESlateVisibility::Visible;
    this->RightTeamAvatarsVisibility = ESlateVisibility::Visible;
    this->LeftTeamAliveCountVisibility = ESlateVisibility::Visible;
    this->RightTeamAliveCountVisibility = ESlateVisibility::Visible;
    this->SpectatorBombInteractionTimerVisibility = ESlateVisibility::Visible;
    this->BombInteractionProgress = 0.00f;
}

