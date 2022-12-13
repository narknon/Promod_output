#pragma once
#include "CoreMinimal.h"
#include "EGameOverview.generated.h"

UENUM(BlueprintType)
enum class EGameOverview : uint8 {
    EGO_Wartide,
    EGO_FFA,
    EGO_TDM,
    EGO_Dom,
    EGO_Grenade,
    EGO_Jumper,
    EGO_All,
    EGO_MAX UMETA(Hidden),
};

