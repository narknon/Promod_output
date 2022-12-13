#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AuthenticationActivateAPIKeyRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAuthenticationActivateAPIKeyRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString APIKeyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Entity;
    
    FAuthenticationActivateAPIKeyRequest();
};

