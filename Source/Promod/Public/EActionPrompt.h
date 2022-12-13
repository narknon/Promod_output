#pragma once
#include "CoreMinimal.h"
#include "EActionPrompt.generated.h"

UENUM(BlueprintType)
enum class EActionPrompt : uint8 {
    AP_PlantBomb,
    AP_DefuseBomb,
    AP_TakeBomb,
    AP_TakeFlag,
    AP_PossessBot,
    AP_None,
    AP_MAX UMETA(Hidden),
};

