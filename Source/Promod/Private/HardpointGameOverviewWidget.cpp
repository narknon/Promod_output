#include "HardpointGameOverviewWidget.h"



UHardpointGameOverviewWidget::UHardpointGameOverviewWidget() {
    this->WaitingToStartTimer = 0.00f;
    this->OvertimeTimeVisibility = ESlateVisibility::Collapsed;
}

