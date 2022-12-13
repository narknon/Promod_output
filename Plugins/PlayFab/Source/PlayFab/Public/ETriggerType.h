#pragma once
#include "CoreMinimal.h"
#include "ETriggerType.generated.h"

UENUM(BlueprintType)
enum class ETriggerType : uint8 {
    pfenum_HTTP,
    pfenum_Queue,
    pfenum_MAX UMETA(Hidden),
};

