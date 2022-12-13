#pragma once
#include "CoreMinimal.h"
#include "EMovementJumpMode.generated.h"

UENUM(BlueprintType)
enum EMovementJumpMode {
    JUMP_None,
    JUMP_Queued,
    JUMP_AutoBunny,
    JUMP_MAX UMETA(Hidden),
};

