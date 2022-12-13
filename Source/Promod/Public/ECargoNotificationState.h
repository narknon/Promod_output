#pragma once
#include "CoreMinimal.h"
#include "ECargoNotificationState.generated.h"

UENUM(BlueprintType)
enum class ECargoNotificationState : uint8 {
    Attack,
    Complete,
    Hide,
};

