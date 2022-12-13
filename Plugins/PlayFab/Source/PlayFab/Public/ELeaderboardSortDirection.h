#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardSortDirection.generated.h"

UENUM(BlueprintType)
enum class ELeaderboardSortDirection : uint8 {
    pfenum_Descending,
    pfenum_Ascending,
    pfenum_MAX UMETA(Hidden),
};

