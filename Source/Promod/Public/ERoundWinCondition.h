#pragma once
#include "CoreMinimal.h"
#include "ERoundWinCondition.generated.h"

UENUM(BlueprintType)
enum class ERoundWinCondition : uint8 {
    Att_Killed,
    Def_Killed,
    Bomb_Exploded,
    Bomb_Defused,
    Time_Expired,
    None,
};

