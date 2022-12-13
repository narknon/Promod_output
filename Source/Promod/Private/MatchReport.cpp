#include "MatchReport.h"

FMatchReport::FMatchReport() {
    this->GameTime = 0;
    this->OverTimeTime = 0;
    this->ShootoutTime = 0;
    this->TotalTime = 0;
    this->IsTryHardMode = false;
    this->NumRegularRounds = 0;
    this->MinFrameTime = 0.00f;
    this->AverageFrameTime = 0.00f;
    this->MaxFrameTime = 0.00f;
}

