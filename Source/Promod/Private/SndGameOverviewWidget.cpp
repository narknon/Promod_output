#include "SndGameOverviewWidget.h"


void USndGameOverviewWidget::UpdateScores() {
}




void USndGameOverviewWidget::SortShootoutTeams() {
}

void USndGameOverviewWidget::ShowAndupdateBombTimer() {
}




void USndGameOverviewWidget::HideBombTimer() {
}






USndGameOverviewWidget::USndGameOverviewWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->AttackTeamName = TEXT("Attack");
    this->DefenceTeamName = TEXT("Defence");
    this->LeftTeamScoreVisibility = ESlateVisibility::Visible;
    this->RightTeamScoreVisibility = ESlateVisibility::Visible;
    this->BombPlantedVisibility = ESlateVisibility::Visible;
    this->ReadyUpVisibility = ESlateVisibility::Visible;
    this->NotReadyPlayersVisibility = ESlateVisibility::Visible;
    this->pGameState = NULL;
    this->pOwningPlayercontroller = NULL;
    this->Team01Ptr = NULL;
    this->Team02Ptr = NULL;
    this->HasHitShootoutOnce = false;
    this->CachedTotalAlivePlayers = 0;
}

