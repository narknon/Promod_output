#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.h"
#include "ProfilesSetProfileLanguageResponse.h"
#include "ProfilesSetGlobalPolicyResponse.h"
#include "ProfilesSetEntityProfilePolicyResponse.h"
#include "ProfilesSetDisplayNameResponse.h"
#include "ProfilesSetAvatarUrlResponse.h"
#include "ProfilesGetGlobalPolicyResponse.h"
#include "ProfilesGetEntityProfilesResponse.h"
#include "ProfilesGetEntityProfileResponse.h"
#include "PlayFabProfilesModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabProfilesModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabProfilesModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FProfilesSetProfileLanguageResponse decodeSetProfileLanguageResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesSetGlobalPolicyResponse decodeSetGlobalPolicyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesSetEntityProfilePolicyResponse decodeSetEntityProfilePolicyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesSetDisplayNameResponse decodeSetDisplayNameResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesSetAvatarUrlResponse decodeSetAvatarUrlResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesGetGlobalPolicyResponse decodeGetGlobalPolicyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesGetEntityProfilesResponse decodeGetEntityProfilesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesGetEntityProfileResponse decodeGetEntityProfileResponseResponse(UPlayFabJsonObject* response);
    
};

