#pragma once
#include "CoreMinimal.h"
#include "ELogSubsystem.generated.h"

UENUM(BlueprintType)
enum class ELogSubsystem : uint8 {
    ONLINE,
    INVENTORY_COMPONENT,
    CHARACTER,
    WEAPON,
    COMMAND,
    GENERIC,
};

