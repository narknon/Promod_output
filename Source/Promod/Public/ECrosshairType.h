#pragma once
#include "CoreMinimal.h"
#include "ECrosshairType.generated.h"

UENUM(BlueprintType)
enum class ECrosshairType : uint8 {
    ECT_Standard,
    ECT_Grenade,
    ECT_ThrowingKnife,
    ECT_MAX UMETA(Hidden),
};

