#include "NUIJumperCourseComplete.h"


void UNUIJumperCourseComplete::LoadMainMenu() {
}

void UNUIJumperCourseComplete::GetMapDifficulty() {
}

UNUIJumperCourseComplete::UNUIJumperCourseComplete() : UUserWidget(FObjectInitializer::Get()) {
    this->GameModeType = EMapPackGamemode::Jumper;
    this->JumperGameMode = NULL;
    this->KillRunGameMode = NULL;
    this->PreviousDifficultyRating = 0;
}

