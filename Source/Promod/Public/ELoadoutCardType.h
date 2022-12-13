#pragma once
#include "CoreMinimal.h"
#include "ELoadoutCardType.generated.h"

UENUM(BlueprintType)
enum class ELoadoutCardType : uint8 {
    Blank,
    Class,
    Accessory,
};

