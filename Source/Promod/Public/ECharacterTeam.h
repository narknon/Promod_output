#pragma once
#include "CoreMinimal.h"
#include "ECharacterTeam.generated.h"

UENUM(BlueprintType)
enum class ECharacterTeam : uint8 {
    CHR_FRIENDLY,
    CHR_ENEMY,
    CHR_MAX UMETA(Hidden),
};

