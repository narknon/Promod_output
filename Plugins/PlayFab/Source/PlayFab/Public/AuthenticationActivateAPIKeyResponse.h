#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AuthenticationActivateAPIKeyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAuthenticationActivateAPIKeyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAuthenticationActivateAPIKeyResponse();
};

