#include "TickedIntervalScoreAwardEntity.h"

FTickedIntervalScoreAwardEntity::FTickedIntervalScoreAwardEntity() {
    this->PlayerToAward = NULL;
    this->ScoreAwardType = EScoreAwardType::KEY_DEFAULT;
    this->AwardedCount = 0;
}

