#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AuthenticationCreateAPIKeyResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAuthenticationCreateAPIKeyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Entity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Key;
    
    FAuthenticationCreateAPIKeyResponse();
};

