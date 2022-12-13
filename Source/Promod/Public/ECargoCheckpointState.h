#pragma once
#include "CoreMinimal.h"
#include "ECargoCheckpointState.generated.h"

UENUM(BlueprintType)
enum class ECargoCheckpointState : uint8 {
    Unoccupied,
    AttackersOccupy,
    DefendersOccupy,
    BothOccupy,
};

