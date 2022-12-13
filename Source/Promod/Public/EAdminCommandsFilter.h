#pragma once
#include "CoreMinimal.h"
#include "EAdminCommandsFilter.generated.h"

UENUM(BlueprintType)
enum class EAdminCommandsFilter : uint8 {
    All,
    Config,
    FireUps,
    Performance,
    Maps,
    Weapons,
    Misc,
    Collision,
    Report,
};

