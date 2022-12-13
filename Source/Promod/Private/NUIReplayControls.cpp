#include "NUIReplayControls.h"


void UNUIReplayControls::SetCurrentReplayTimeToSeconds_Float(float Seconds) {
}

void UNUIReplayControls::SetCurrentReplayTimeToSeconds(float Seconds) {
}

void UNUIReplayControls::SetCurrentReplayPlayRate(float PlayRate) {
}

bool UNUIReplayControls::SetCurrentReplayPausedState(bool bDoPause) {
    return false;
}

bool UNUIReplayControls::IsDollyCamEnabled() {
    return false;
}

FString UNUIReplayControls::GetTimeString(float TimeSeconds) {
    return TEXT("");
}

FString UNUIReplayControls::GetKeyNameForHide() {
    return TEXT("");
}

int32 UNUIReplayControls::GetCurrentReplayTotalTimeInSeconds() const {
    return 0;
}

float UNUIReplayControls::GetCurrentReplayCurrentTimeInSeconds() const {
    return 0.0f;
}

UNUIReplayControls::UNUIReplayControls() {
    this->CurrentPlayRate = 1.00f;
    this->TimeWhenPaused = 0.00f;
}

