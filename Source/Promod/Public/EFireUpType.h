#pragma once
#include "CoreMinimal.h"
#include "EFireUpType.generated.h"

UENUM(BlueprintType)
enum class EFireUpType : uint8 {
    None,
    Dash,
    Regen,
    Reveal,
    Snapshot,
    Blink,
    HandCannon,
    TrophySystem,
    DeployableCover,
    Stimshot,
    AmmoBox,
};

