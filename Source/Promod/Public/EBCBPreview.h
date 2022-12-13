#pragma once
#include "CoreMinimal.h"
#include "EBCBPreview.generated.h"

UENUM(BlueprintType)
enum class EBCBPreview : uint8 {
    BCBP_Normal,
    BCBP_Hover,
    BCBP_Pressed,
    BCBP_Disabled,
    BCBP_MAX UMETA(Hidden),
};

