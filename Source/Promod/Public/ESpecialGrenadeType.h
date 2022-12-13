#pragma once
#include "CoreMinimal.h"
#include "ESpecialGrenadeType.generated.h"

UENUM(BlueprintType)
enum class ESpecialGrenadeType : uint8 {
    SGT_WhiteSmoke,
    FlashBang,
    Stun,
};

