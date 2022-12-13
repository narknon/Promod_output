#pragma once
#include "CoreMinimal.h"
#include "EAzureRegion.generated.h"

UENUM(BlueprintType)
enum class EAzureRegion : uint8 {
    pfenum_AustraliaEast,
    pfenum_AustraliaSoutheast,
    pfenum_BrazilSouth,
    pfenum_CentralUs,
    pfenum_EastAsia,
    pfenum_EastUs,
    pfenum_EastUs2,
    pfenum_JapanEast,
    pfenum_JapanWest,
    pfenum_NorthCentralUs,
    pfenum_NorthEurope,
    pfenum_SouthCentralUs,
    pfenum_SoutheastAsia,
    pfenum_WestEurope,
    pfenum_WestUs,
    pfenum_ChinaEast2,
    pfenum_ChinaNorth2,
    pfenum_SouthAfricaNorth,
    pfenum_MAX UMETA(Hidden),
};

