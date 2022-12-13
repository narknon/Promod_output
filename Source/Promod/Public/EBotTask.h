#pragma once
#include "CoreMinimal.h"
#include "EBotTask.generated.h"

UENUM(BlueprintType)
enum class EBotTask : uint8 {
    BT_Partol,
    BT_Plant,
    BT_Defuse,
    BT_Hunt,
    BT_Search,
    BT_ZoneCap,
    BT_ZoneDefend,
    BT_FlagCap,
    BT_FlagReturn,
    BT_Turret,
    BT_None,
    BT_MAX UMETA(Hidden),
};

