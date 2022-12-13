#pragma once
#include "CoreMinimal.h"
#include "ENuclearSessionSettingType.generated.h"

UENUM(BlueprintType)
enum class ENuclearSessionSettingType : uint8 {
    Invalid,
    Empty = 0x0,
    Int32,
    UInt32,
    Int64,
    UInt64,
    Double,
    String,
    Float,
    Blob,
    Bool,
    Json,
    Count,
};

