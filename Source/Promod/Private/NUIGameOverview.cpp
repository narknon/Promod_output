#include "NUIGameOverview.h"

FText UNUIGameOverview::SanitizeTeamName(FText& TeamName) {
    return FText::GetEmpty();
}



UNUIGameOverview::UNUIGameOverview() {
    this->PrevTimerSeconds = 0;
    this->TeamsReversed = false;
    this->RoundTitleVisibility = ESlateVisibility::Visible;
    this->RoundSubtitleVisibility = ESlateVisibility::Visible;
    this->TimerVisibility = ESlateVisibility::Visible;
    this->DeathCountVisibility = ESlateVisibility::Visible;
    this->LeftTeamNumber = 0;
    this->RightTeamNumber = 0;
    this->LeftScoreNation = ENationType::Nation_FRIENDLY;
    this->RightScoreNation = ENationType::Nation_FRIENDLY;
    this->RightScoreCrossPlayGlobeVisiblity = ESlateVisibility::Visible;
    this->LeftScoreProgress = 0.00f;
    this->RightScoreProgress = 0.00f;
    this->LeftScoreVisibility = ESlateVisibility::Visible;
    this->RightScoreVisibility = ESlateVisibility::Visible;
    this->DOMProgressBarVisible = false;
    this->DisplayRoundNumber = false;
    this->MaxTeamNameLength = 11;
}

