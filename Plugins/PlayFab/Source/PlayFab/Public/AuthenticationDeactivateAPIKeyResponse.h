#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AuthenticationDeactivateAPIKeyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAuthenticationDeactivateAPIKeyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAuthenticationDeactivateAPIKeyResponse();
};

