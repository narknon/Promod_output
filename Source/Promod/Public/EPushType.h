#pragma once
#include "CoreMinimal.h"
#include "EPushType.generated.h"

UENUM(BlueprintType)
enum class EPushType : uint8 {
    PT_OneWay,
    PT_Line,
    PT_Center,
    PT_MAX UMETA(Hidden),
};

