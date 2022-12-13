#pragma once
#include "CoreMinimal.h"
#include "ECommandLevel.generated.h"

UENUM(BlueprintType)
enum class ECommandLevel : uint8 {
    Base,
    Admin,
    Cheat,
    Debug,
};

