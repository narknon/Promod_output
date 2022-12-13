#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ProfilesGetGlobalPolicyRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FProfilesGetGlobalPolicyRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FProfilesGetGlobalPolicyRequest();
};

