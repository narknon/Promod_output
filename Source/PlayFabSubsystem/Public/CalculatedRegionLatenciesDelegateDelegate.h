#pragma once
#include "CoreMinimal.h"
#include "RegionLatency.h"
#include "CalculatedRegionLatenciesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCalculatedRegionLatenciesDelegate, const TArray<FRegionLatency>&, RegionLatencies, bool, bSuccess);

