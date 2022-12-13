#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AuthenticationGetEntityTokenRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAuthenticationGetEntityTokenRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Entity;
    
    FAuthenticationGetEntityTokenRequest();
};

