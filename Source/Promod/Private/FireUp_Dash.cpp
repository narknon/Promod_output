#include "FireUp_Dash.h"

AFireUp_Dash::AFireUp_Dash() {
    this->AccumulateMode = ERootMotionAccumulateMode::Override;
    this->DashDistance = 750.00f;
    this->Duration = 0.50f;
    this->bRestrictSpeedToExpected = false;
    this->FinishVelocityMode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->FinishClampVelocity = 0.00f;
    this->DashDirection = EDashDirection::MovementDirection;
    this->TimeBeforeMeleeAllowed = 1.00f;
}

