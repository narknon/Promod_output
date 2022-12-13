#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AuthenticationDeactivateAPIKeyRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAuthenticationDeactivateAPIKeyRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString APIKeyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Entity;
    
    FAuthenticationDeactivateAPIKeyRequest();
};

