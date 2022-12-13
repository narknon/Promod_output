#pragma once
#include "CoreMinimal.h"
#include "EInGameAchievementStat.generated.h"

UENUM(BlueprintType)
enum class EInGameAchievementStat : uint8 {
    KillDiffusingWithGrenade,
    WartidePlantBomb,
    WartideConsecutiveRoundGrenadeKills,
    KillBombCarriers,
    DomOwnAllObjectives,
    Kills,
    DiffuseBomb,
    ShotgunKills,
    SniperKills,
    KnifeKills,
    WallbangKills,
    GrenadeKills,
    Headshots,
    CollateralKills,
    KillStreak,
    MultipleKillsWithGrenade,
    DomKillNeutralising,
    DomKillObjectiveGrenade,
    Wartide3ShotgunKillsInRound,
    WartideRoundWinWhenPlanted,
    WartideAceRound,
    ClutchAllies,
    ClutchAxis,
};

