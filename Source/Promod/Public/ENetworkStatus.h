#pragma once
#include "CoreMinimal.h"
#include "ENetworkStatus.generated.h"

UENUM(BlueprintType)
enum class ENetworkStatus : uint8 {
    Good,
    Poor,
    VeryPoor,
};

