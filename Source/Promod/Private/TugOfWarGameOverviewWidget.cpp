#include "TugOfWarGameOverviewWidget.h"

void UTugOfWarGameOverviewWidget::UpdateSpawnQueueText() {
}



UTugOfWarGameOverviewWidget::UTugOfWarGameOverviewWidget() {
    this->SpawnQueueTextVisibility = ESlateVisibility::Visible;
    this->OvertimeTimeVisibility = ESlateVisibility::Collapsed;
    this->CenterTimerVisibility = ESlateVisibility::Collapsed;
    this->SideTimerVisibility = ESlateVisibility::Collapsed;
    this->CargoGameState = NULL;
}

