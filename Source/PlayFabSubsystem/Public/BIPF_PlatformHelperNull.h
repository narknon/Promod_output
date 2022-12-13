#pragma once
#include "CoreMinimal.h"
#include "BIPF_PlatformHelper.h"
#include "BIPF_PlatformHelperNull.generated.h"

UCLASS(Blueprintable)
class PLAYFABSUBSYSTEM_API UBIPF_PlatformHelperNull : public UBIPF_PlatformHelper {
    GENERATED_BODY()
public:
    UBIPF_PlatformHelperNull();
};

