#pragma once
#include "CoreMinimal.h"
#include "EFireUpActionType.generated.h"

UENUM(BlueprintType)
enum class EFireUpActionType : uint8 {
    None,
    Kill,
    Death,
    Plant,
    Defuse,
};

