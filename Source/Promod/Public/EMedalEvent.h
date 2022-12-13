#pragma once
#include "CoreMinimal.h"
#include "EMedalEvent.generated.h"

UENUM(BlueprintType)
enum class EMedalEvent : uint8 {
    ME_RoundStart,
    ME_RoundEnd,
    ME_BombPlanted,
    ME_BombDefused,
    ME_LastAlive,
    ME_Respawn,
    ME_ZoneCaptured,
    ME_ZoneNeutralised,
    ME_FlagPickedUp,
    ME_FlagReturned,
    ME_FlagCaptured,
    ME_HQCaptured,
    ME_HQDestroyed,
    ME_HQSecured,
    ME_JustKeepShootin,
    ME_WaitForThisToBlowOver,
    ME_Zombieland,
    ME_WorldWarZ,
    ME_IAmLegend,
    ME_MAX UMETA(Hidden),
};

