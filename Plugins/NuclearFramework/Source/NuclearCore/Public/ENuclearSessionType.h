#pragma once
#include "CoreMinimal.h"
#include "ENuclearSessionType.generated.h"

UENUM(BlueprintType)
enum class ENuclearSessionType : uint8 {
    Lobby,
    ListenServer,
    DedicatedServer,
};

