#pragma once
#include "CoreMinimal.h"
#include "EPingCategory.generated.h"

UENUM(BlueprintType)
enum class EPingCategory : uint8 {
    None,
    Enemy,
    Info,
};

