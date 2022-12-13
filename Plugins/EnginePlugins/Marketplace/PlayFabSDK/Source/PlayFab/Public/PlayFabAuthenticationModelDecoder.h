#pragma once
#include "CoreMinimal.h"
#include "AuthenticationCreateAPIKeyResponse.h"
#include "AuthenticationGetEntityTokenResponse.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AuthenticationValidateEntityTokenResponse.h"
#include "AuthenticationGetAPIKeysResponse.h"
#include "AuthenticationDeleteAPIKeyResponse.h"
#include "AuthenticationDeactivateAPIKeyResponse.h"
#include "AuthenticationActivateAPIKeyResponse.h"
#include "PlayFabAuthenticationModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabAuthenticationModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabAuthenticationModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FAuthenticationValidateEntityTokenResponse decodeValidateEntityTokenResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAuthenticationGetEntityTokenResponse decodeGetEntityTokenResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAuthenticationGetAPIKeysResponse decodeGetAPIKeysResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAuthenticationDeleteAPIKeyResponse decodeDeleteAPIKeyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAuthenticationDeactivateAPIKeyResponse decodeDeactivateAPIKeyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAuthenticationCreateAPIKeyResponse decodeCreateAPIKeyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FAuthenticationActivateAPIKeyResponse decodeActivateAPIKeyResponseResponse(UPlayFabJsonObject* response);
    
};

