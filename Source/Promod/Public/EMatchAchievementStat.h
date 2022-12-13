#pragma once
#include "CoreMinimal.h"
#include "EMatchAchievementStat.generated.h"

UENUM(BlueprintType)
enum class EMatchAchievementStat : uint8 {
    WartideWins,
    PlayWartide,
    TDMWins,
    DomWins,
    TDMMostKills,
    ArcadeWins,
    FFAWins,
};

