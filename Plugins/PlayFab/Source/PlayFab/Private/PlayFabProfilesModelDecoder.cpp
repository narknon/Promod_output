#include "PlayFabProfilesModelDecoder.h"

class UPlayFabJsonObject;

FProfilesSetProfileLanguageResponse UPlayFabProfilesModelDecoder::decodeSetProfileLanguageResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesSetProfileLanguageResponse{};
}

FProfilesSetGlobalPolicyResponse UPlayFabProfilesModelDecoder::decodeSetGlobalPolicyResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesSetGlobalPolicyResponse{};
}

FProfilesSetEntityProfilePolicyResponse UPlayFabProfilesModelDecoder::decodeSetEntityProfilePolicyResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesSetEntityProfilePolicyResponse{};
}

FProfilesSetDisplayNameResponse UPlayFabProfilesModelDecoder::decodeSetDisplayNameResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesSetDisplayNameResponse{};
}

FProfilesSetAvatarUrlResponse UPlayFabProfilesModelDecoder::decodeSetAvatarUrlResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesSetAvatarUrlResponse{};
}

FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse UPlayFabProfilesModelDecoder::decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse{};
}

FProfilesGetGlobalPolicyResponse UPlayFabProfilesModelDecoder::decodeGetGlobalPolicyResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesGetGlobalPolicyResponse{};
}

FProfilesGetEntityProfilesResponse UPlayFabProfilesModelDecoder::decodeGetEntityProfilesResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesGetEntityProfilesResponse{};
}

FProfilesGetEntityProfileResponse UPlayFabProfilesModelDecoder::decodeGetEntityProfileResponseResponse(UPlayFabJsonObject* response) {
    return FProfilesGetEntityProfileResponse{};
}

UPlayFabProfilesModelDecoder::UPlayFabProfilesModelDecoder() {
}

