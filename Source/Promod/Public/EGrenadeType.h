#pragma once
#include "CoreMinimal.h"
#include "EGrenadeType.generated.h"

UENUM(BlueprintType)
enum class EGrenadeType : uint8 {
    Frag,
    Sticky,
    ThrowingKnife,
    Incendiary,
};

