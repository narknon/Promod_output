#include "KillRunGameMode.h"

class UAkAudioEvent;

void AKillRunGameMode::StopCourseTimer() {
}

void AKillRunGameMode::ResetCourseTimer() {
}

void AKillRunGameMode::InitCourseTimer() {
}

TArray<float> AKillRunGameMode::GetSplitTimes() const {
    return TArray<float>();
}

UAkAudioEvent* AKillRunGameMode::GetSoundFromStars(int32 Stars) {
    return NULL;
}

float AKillRunGameMode::GetCourseTimeSeconds() {
    return 0.0f;
}

AKillRunGameMode::AKillRunGameMode() {
    this->CurrentCourse = NULL;
}

