#pragma once
#include "CoreMinimal.h"
#include "EPromodActionPrompt.generated.h"

UENUM(BlueprintType)
enum class EPromodActionPrompt : uint8 {
    AP_PlantBomb,
    AP_QuickPlantBomb,
    AP_DefuseBomb,
    AP_None,
    AP_MAX UMETA(Hidden),
};

