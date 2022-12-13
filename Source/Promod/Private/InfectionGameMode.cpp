#include "InfectionGameMode.h"

AInfectionGameMode::AInfectionGameMode() {
    this->SurvivorVsInfectedThreshold = 0;
    this->SurvivorExperienceTime = 10.00f;
    this->InfectedMaxHealth = 1000;
    this->InfectedSpeedModifier = 1.50f;
    this->InfectedKnifeDamage = 65;
    this->InfectionHealthRegenPercentage = 0.50f;
    this->AlliesVictoryXPBonus = 1000;
    this->AlliesTeamCount = 10;
    this->AxisTeamCount = 2;
    this->SurvivorTimer = 0.00f;
    this->GameStartNotification = NULL;
    this->ZombieAttackVocal = NULL;
    this->PlusTenCue = NULL;
}

