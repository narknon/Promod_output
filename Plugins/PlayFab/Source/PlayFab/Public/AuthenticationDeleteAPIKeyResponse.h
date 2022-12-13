#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AuthenticationDeleteAPIKeyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAuthenticationDeleteAPIKeyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAuthenticationDeleteAPIKeyResponse();
};

