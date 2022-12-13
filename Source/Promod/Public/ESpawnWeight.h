#pragma once
#include "CoreMinimal.h"
#include "ESpawnWeight.generated.h"

UENUM(BlueprintType)
enum class ESpawnWeight : uint8 {
    TooNear,
    TooFar,
    UnsafeSpawn,
    ClearSpawn,
    SafeSpawn,
};

