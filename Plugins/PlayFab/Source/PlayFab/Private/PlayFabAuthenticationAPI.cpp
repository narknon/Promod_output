#include "PlayFabAuthenticationAPI.h"

class UObject;
class UPlayFabAuthenticationAPI;

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::ValidateEntityToken(FAuthenticationValidateEntityTokenRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessValidateEntityToken onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabAuthenticationAPI::HelperValidateEntityToken(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabAuthenticationAPI::HelperGetKeys(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabAuthenticationAPI::HelperGetEntityToken(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabAuthenticationAPI::HelperDeleteKey(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabAuthenticationAPI::HelperDeactivateKey(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabAuthenticationAPI::HelperCreateKey(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

void UPlayFabAuthenticationAPI::HelperActivateKey(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::GetKeys(FAuthenticationGetAPIKeysRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessGetKeys onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::GetEntityToken(FAuthenticationGetEntityTokenRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessGetEntityToken onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::DeleteKey(FAuthenticationDeleteAPIKeyRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessDeleteKey onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::DeactivateKey(FAuthenticationDeactivateAPIKeyRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessDeactivateKey onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::CreateKey(FAuthenticationCreateAPIKeyRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessCreateKey onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::ActivateKey(FAuthenticationActivateAPIKeyRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessActivateKey onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabAuthenticationAPI::UPlayFabAuthenticationAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

