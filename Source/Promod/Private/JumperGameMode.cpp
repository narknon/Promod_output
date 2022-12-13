#include "JumperGameMode.h"

class UAkAudioEvent;
class ABattalionPlayerState;

void AJumperGameMode::StopSplitTimer() {
}

void AJumperGameMode::StopCourseTimer() {
}

void AJumperGameMode::SkipCheckpoint() {
}

void AJumperGameMode::ResetSplitTimer() {
}

void AJumperGameMode::ResetCourseTimer() {
}

void AJumperGameMode::RecordSplit(bool IsFirstCheckpoint) {
}

void AJumperGameMode::InitSplitTimer() {
}

void AJumperGameMode::InitCourseTimer() {
}

TArray<float> AJumperGameMode::GetSplitTimes() const {
    return TArray<float>();
}

UAkAudioEvent* AJumperGameMode::GetSoundFromStars(int32 Stars) {
    return NULL;
}

float AJumperGameMode::GetCourseTimeSeconds() {
    return 0.0f;
}

void AJumperGameMode::CourseCompleted(ABattalionPlayerState* Player, int32 Respawns) {
}

AJumperGameMode::AJumperGameMode() {
    this->CurrentCourse = NULL;
}

