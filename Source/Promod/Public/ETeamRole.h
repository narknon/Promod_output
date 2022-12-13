#pragma once
#include "CoreMinimal.h"
#include "ETeamRole.generated.h"

UENUM(BlueprintType)
enum class ETeamRole : uint8 {
    None,
    PickUp,
    PlantBomb,
    EscortCarrier,
    KillCarrier,
    Defend,
    Defuse,
};

