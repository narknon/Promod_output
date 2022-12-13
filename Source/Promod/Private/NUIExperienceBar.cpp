#include "NUIExperienceBar.h"

void UNUIExperienceBar::ProgressFillingState(EFillStage NewFillStage) {
}

void UNUIExperienceBar::InitializeExperienceValues() {
}

UNUIExperienceBar::UNUIExperienceBar() {
    this->ExperienceStartedAt = 0;
    this->ExperienceFinishedAt = 0;
    this->ExperienceGainedFromScore = 0;
    this->ExperienceGainedFromMedals = 0;
    this->ExperienceGainedFromChallenges = 0;
    this->ExperienceGainedFromMatchResult = 0;
    this->ScorePhaseNormalised = 0.00f;
    this->MedalPhaseNormalised = 0.00f;
    this->ChallengePhaseNormalised = 0.00f;
    this->MatchResultPhaseNormalised = 0.00f;
    this->BonusMultiplier = 1;
    this->XPRange = 0.00f;
    this->CurrentFillStage = EFillStage::Score;
}

