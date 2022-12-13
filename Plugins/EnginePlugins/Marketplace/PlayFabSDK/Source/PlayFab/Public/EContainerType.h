#pragma once
#include "CoreMinimal.h"
#include "EContainerType.generated.h"

UENUM(BlueprintType)
enum class EContainerType : uint8 {
    pfenum_None,
    pfenum_Bundles,
    pfenum_Stores,
    pfenum_Subscriptions,
    pfenum_Recipes,
    pfenum_MAX UMETA(Hidden),
};

