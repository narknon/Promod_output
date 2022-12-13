#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "AuthenticationValidateEntityTokenResponse.h"
#include "AuthenticationGetAPIKeysResponse.h"
#include "AuthenticationCreateAPIKeyResponse.h"
#include "AuthenticationGetEntityTokenResponse.h"
#include "AuthenticationDeleteAPIKeyResponse.h"
#include "AuthenticationDeactivateAPIKeyRequest.h"
#include "AuthenticationDeactivateAPIKeyResponse.h"
#include "AuthenticationActivateAPIKeyResponse.h"
#include "PlayFabError.h"
#include "OnPlayFabAuthenticationRequestCompletedDelegate.h"
#include "AuthenticationValidateEntityTokenRequest.h"
#include "PlayFabBaseModel.h"
#include "AuthenticationGetAPIKeysRequest.h"
#include "AuthenticationGetEntityTokenRequest.h"
#include "AuthenticationDeleteAPIKeyRequest.h"
#include "AuthenticationCreateAPIKeyRequest.h"
#include "AuthenticationActivateAPIKeyRequest.h"
#include "PlayFabAuthenticationAPI.generated.h"

class UObject;
class UPlayFabJsonObject;
class UPlayFabAuthenticationContext;
class UPlayFabAuthenticationAPI;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabAuthenticationAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessValidateEntityToken, FAuthenticationValidateEntityTokenResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetKeys, FAuthenticationGetAPIKeysResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetEntityToken, FAuthenticationGetEntityTokenResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteKey, FAuthenticationDeleteAPIKeyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeactivateKey, FAuthenticationDeactivateAPIKeyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateKey, FAuthenticationCreateAPIKeyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessActivateKey, FAuthenticationActivateAPIKeyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabAuthenticationRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabAuthenticationAPI();
    UFUNCTION(BlueprintCallable)
    static UPlayFabAuthenticationAPI* ValidateEntityToken(FAuthenticationValidateEntityTokenRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessValidateEntityToken onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperValidateEntityToken(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetKeys(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetEntityToken(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteKey(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeactivateKey(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateKey(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperActivateKey(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAuthenticationAPI* GetKeys(FAuthenticationGetAPIKeysRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessGetKeys onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAuthenticationAPI* GetEntityToken(FAuthenticationGetEntityTokenRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessGetEntityToken onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAuthenticationAPI* DeleteKey(FAuthenticationDeleteAPIKeyRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessDeleteKey onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAuthenticationAPI* DeactivateKey(FAuthenticationDeactivateAPIKeyRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessDeactivateKey onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAuthenticationAPI* CreateKey(FAuthenticationCreateAPIKeyRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessCreateKey onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAuthenticationAPI* ActivateKey(FAuthenticationActivateAPIKeyRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessActivateKey onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

