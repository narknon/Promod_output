#pragma once
#include "CoreMinimal.h"
#include "ECargoContentionState.generated.h"

UENUM(BlueprintType)
enum class ECargoContentionState : uint8 {
    Unoccupied,
    AttackersOccupy,
    DefendersOccupy,
    BothOccupy,
};

