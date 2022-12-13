#pragma once
#include "CoreMinimal.h"
#include "ETeamVisibility.generated.h"

UENUM(BlueprintType)
enum class ETeamVisibility : uint8 {
    VisibleToNone,
    VisibleToAll,
    VisibleToAllies,
    VisibleToEnemies,
};

