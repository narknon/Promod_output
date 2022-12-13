#pragma once
#include "CoreMinimal.h"
#include "EGameModes.generated.h"

UENUM(BlueprintType)
enum class EGameModes : uint8 {
    FFA,
    TDM,
    CTF,
    Bomb,
    HQ,
};

