#pragma once
#include "CoreMinimal.h"
#include "EChatChannels.generated.h"

UENUM(BlueprintType)
enum class EChatChannels : uint8 {
    Global,
    GlobalDead,
    Team,
    Group,
    Connection,
    Medal,
    Challenge,
    None,
};

