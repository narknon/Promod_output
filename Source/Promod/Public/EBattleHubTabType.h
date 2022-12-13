#pragma once
#include "CoreMinimal.h"
#include "EBattleHubTabType.generated.h"

UENUM(BlueprintType)
enum class EBattleHubTabType : uint8 {
    Rewards,
    Armoury,
    Medals,
    Overview,
    Leaderboards,
};

