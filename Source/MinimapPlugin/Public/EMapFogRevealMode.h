#pragma once
#include "CoreMinimal.h"
#include "EMapFogRevealMode.generated.h"

UENUM(BlueprintType)
enum class EMapFogRevealMode : uint8 {
    Off,
    Temporary,
    Permanent,
};

