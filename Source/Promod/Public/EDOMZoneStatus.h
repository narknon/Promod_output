#pragma once
#include "CoreMinimal.h"
#include "EDOMZoneStatus.generated.h"

UENUM(BlueprintType)
enum class EDOMZoneStatus : uint8 {
    DOMZoneStatus_Contested,
    DOMZoneStatus_Neutralising,
    DOMZoneStatus_Capturing,
    DOMZoneStatus_Captured,
    DOMZoneStatus_MAX UMETA(Hidden),
};

