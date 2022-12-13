#pragma once
#include "CoreMinimal.h"
#include "EFireUpCanUseBombMode.generated.h"

UENUM(BlueprintType)
enum class EFireUpCanUseBombMode : uint8 {
    Always,
    Conditional,
    Never,
};

