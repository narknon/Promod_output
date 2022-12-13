#pragma once
#include "CoreMinimal.h"
#include "EBotDifficulty.generated.h"

UENUM(BlueprintType)
enum class EBotDifficulty : uint8 {
    BD_Elite,
    BD_Expert,
    BD_Hard,
    BD_Medium,
    BD_Easy,
    BD_VeryEasy,
    BD_MAX UMETA(Hidden),
};

