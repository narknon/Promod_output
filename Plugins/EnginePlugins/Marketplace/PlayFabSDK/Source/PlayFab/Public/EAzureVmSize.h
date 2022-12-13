#pragma once
#include "CoreMinimal.h"
#include "EAzureVmSize.generated.h"

UENUM(BlueprintType)
enum class EAzureVmSize : uint8 {
    pfenum_Standard_D1_v2,
    pfenum_Standard_D2_v2,
    pfenum_Standard_D3_v2,
    pfenum_Standard_D4_v2,
    pfenum_Standard_D5_v2,
    pfenum_Standard_A1_v2,
    pfenum_Standard_A2_v2,
    pfenum_Standard_A4_v2,
    pfenum_Standard_A8_v2,
    pfenum_Standard_F1,
    pfenum_Standard_F2,
    pfenum_Standard_F4,
    pfenum_Standard_F8,
    pfenum_Standard_F16,
    pfenum_Standard_F2s_v2,
    pfenum_Standard_F4s_v2,
    pfenum_Standard_F8s_v2,
    pfenum_Standard_F16s_v2,
    pfenum_Standard_A1,
    pfenum_Standard_A2,
    pfenum_Standard_A3,
    pfenum_Standard_A4,
    pfenum_Standard_MAX UMETA(Hidden),
};

