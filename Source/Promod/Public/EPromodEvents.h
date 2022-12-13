#pragma once
#include "CoreMinimal.h"
#include "EPromodEvents.generated.h"

UENUM(BlueprintType)
enum class EPromodEvents : uint8 {
    Event_BombPlanted,
    Event_BomdDefused,
    Event_SwappingSides,
    Event_Default,
    Event_MAX UMETA(Hidden),
};

