#pragma once
#include "CoreMinimal.h"
#include "EMapPackGamemode.generated.h"

UENUM(BlueprintType)
enum class EMapPackGamemode : uint8 {
    Jumper,
    KillRun,
    SearchAndDestroy,
};

