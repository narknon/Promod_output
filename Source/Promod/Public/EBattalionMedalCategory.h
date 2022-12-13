#pragma once
#include "CoreMinimal.h"
#include "EBattalionMedalCategory.generated.h"

UENUM(BlueprintType)
enum class EBattalionMedalCategory : uint8 {
    Uncategorised,
    Generic,
    Killstreak,
    Multikill,
    Wartide,
    TeamDeathmatch,
    CaptureTheFlag,
    Domination,
    Headquarters,
    Infection,
    Special,
    FFA,
};

