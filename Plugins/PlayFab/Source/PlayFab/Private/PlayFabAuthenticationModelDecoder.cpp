#include "PlayFabAuthenticationModelDecoder.h"

class UPlayFabJsonObject;

FAuthenticationValidateEntityTokenResponse UPlayFabAuthenticationModelDecoder::decodeValidateEntityTokenResponseResponse(UPlayFabJsonObject* response) {
    return FAuthenticationValidateEntityTokenResponse{};
}

FAuthenticationGetEntityTokenResponse UPlayFabAuthenticationModelDecoder::decodeGetEntityTokenResponseResponse(UPlayFabJsonObject* response) {
    return FAuthenticationGetEntityTokenResponse{};
}

FAuthenticationGetAPIKeysResponse UPlayFabAuthenticationModelDecoder::decodeGetAPIKeysResponseResponse(UPlayFabJsonObject* response) {
    return FAuthenticationGetAPIKeysResponse{};
}

FAuthenticationDeleteAPIKeyResponse UPlayFabAuthenticationModelDecoder::decodeDeleteAPIKeyResponseResponse(UPlayFabJsonObject* response) {
    return FAuthenticationDeleteAPIKeyResponse{};
}

FAuthenticationDeactivateAPIKeyResponse UPlayFabAuthenticationModelDecoder::decodeDeactivateAPIKeyResponseResponse(UPlayFabJsonObject* response) {
    return FAuthenticationDeactivateAPIKeyResponse{};
}

FAuthenticationCreateAPIKeyResponse UPlayFabAuthenticationModelDecoder::decodeCreateAPIKeyResponseResponse(UPlayFabJsonObject* response) {
    return FAuthenticationCreateAPIKeyResponse{};
}

FAuthenticationActivateAPIKeyResponse UPlayFabAuthenticationModelDecoder::decodeActivateAPIKeyResponseResponse(UPlayFabJsonObject* response) {
    return FAuthenticationActivateAPIKeyResponse{};
}

UPlayFabAuthenticationModelDecoder::UPlayFabAuthenticationModelDecoder() {
}

