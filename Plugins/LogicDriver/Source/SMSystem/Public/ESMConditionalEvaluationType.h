#pragma once
#include "CoreMinimal.h"
#include "ESMConditionalEvaluationType.generated.h"

UENUM(BlueprintType)
enum class ESMConditionalEvaluationType : uint8 {
    SM_Graph,
    SM_NodeInstance,
    SM_AlwaysFalse,
    SM_AlwaysTrue,
    SM_MAX UMETA(Hidden),
};

