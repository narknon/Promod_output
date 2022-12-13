#pragma once
#include "CoreMinimal.h"
#include "EBattalionLoadoutClaimType.generated.h"

UENUM(BlueprintType)
enum class EBattalionLoadoutClaimType : uint8 {
    Null,
    Equip,
    Hold,
    Pickup,
};

