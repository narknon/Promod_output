#pragma once
#include "CoreMinimal.h"
#include "EBattalionState.generated.h"

UENUM(BlueprintType)
enum class EBattalionState : uint8 {
    None,
    Entry,
    MainMenu,
    Playing,
};

