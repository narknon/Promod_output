#pragma once
#include "CoreMinimal.h"
#include "ClientUpdateUserTitleDisplayNameResult.h"
#include "ClientWriteEventResponse.h"
#include "ClientLinkCustomIDResult.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClientUnlinkIOSDeviceIDResult.h"
#include "ClientGetTradeStatusResponse.h"
#include "ClientLinkTwitchAccountResult.h"
#include "ClientRegisterForIOSPushNotificationResult.h"
#include "ClientValidateWindowsReceiptResult.h"
#include "ClientRegisterPlayFabUserResult.h"
#include "ClientValidateIOSReceiptResult.h"
#include "ClientRemoveContactEmailResult.h"
#include "ClientAcceptTradeResponse.h"
#include "ClientValidateGooglePlayPurchaseResult.h"
#include "ClientLoginResult.h"
#include "ClientValidateAmazonReceiptResult.h"
#include "ClientUnlinkCustomIDResult.h"
#include "ClientUpdateUserDataResult.h"
#include "ClientUpdateSharedGroupDataResult.h"
#include "ClientReportPlayerClientResult.h"
#include "ClientUpdatePlayerStatisticsResult.h"
#include "ClientGetLeaderboardAroundCharacterResult.h"
#include "ClientUpdateCharacterStatisticsResult.h"
#include "ClientUpdateCharacterDataResult.h"
#include "ClientLinkFacebookAccountResult.h"
#include "ClientUnlockContainerItemResult.h"
#include "ClientLinkGameCenterAccountResult.h"
#include "ClientSetFriendTagsResult.h"
#include "ClientSendAccountRecoveryEmailResult.h"
#include "ClientUnlinkXboxAccountResult.h"
#include "ClientMatchmakeResult.h"
#include "ClientRewardAdActivityResult.h"
#include "ClientUnlinkWindowsHelloAccountResponse.h"
#include "ClientLinkKongregateAccountResult.h"
#include "ClientGetStoreItemsResult.h"
#include "ClientRestoreIOSPurchasesResult.h"
#include "ClientUnlinkTwitchAccountResult.h"
#include "ClientGetPlayerSegmentsResult.h"
#include "ClientUnlinkSteamAccountResult.h"
#include "ClientPurchaseItemResult.h"
#include "ClientUnlinkPSNAccountResult.h"
#include "ClientAttributeInstallResult.h"
#include "ClientUnlinkNintendoSwitchDeviceIdResult.h"
#include "ClientUnlinkKongregateAccountResult.h"
#include "ClientUnlinkGoogleAccountResult.h"
#include "ClientUnlinkGameCenterAccountResult.h"
#include "ClientUnlinkFacebookInstantGamesIdResult.h"
#include "ClientUnlinkFacebookAccountResult.h"
#include "ClientUnlinkAndroidDeviceIDResult.h"
#include "ClientStartPurchaseResult.h"
#include "ClientStartGameResult.h"
#include "ClientSetPlayerSecretResult.h"
#include "ClientReportAdActivityResult.h"
#include "ClientRemoveSharedGroupMembersResult.h"
#include "ClientRemoveGenericIDResult.h"
#include "ClientRemoveFriendResult.h"
#include "ClientRedeemCouponResult.h"
#include "ClientListUsersCharactersResult.h"
#include "ClientPayForPurchaseResult.h"
#include "ClientModifyUserVirtualCurrencyResult.h"
#include "ClientOpenTradeResponse.h"
#include "ClientLinkXboxAccountResult.h"
#include "ClientLinkWindowsHelloAccountResponse.h"
#include "ClientLinkSteamAccountResult.h"
#include "ClientLinkPSNAccountResult.h"
#include "ClientLinkNintendoSwitchDeviceIdResult.h"
#include "ClientLinkIOSDeviceIDResult.h"
#include "ClientLinkGoogleAccountResult.h"
#include "ClientLinkFacebookInstantGamesIdResult.h"
#include "ClientConsumePSNEntitlementsResult.h"
#include "ClientLinkAndroidDeviceIDResult.h"
#include "ClientGrantCharacterToUserResult.h"
#include "ClientGetWindowsHelloChallengeResponse.h"
#include "ClientGetUserInventoryResult.h"
#include "ClientGetCharacterStatisticsResult.h"
#include "ClientGetUserDataResult.h"
#include "ClientGetTitlePublicKeyResult.h"
#include "ClientGetTitleNewsResult.h"
#include "ClientGetTitleDataResult.h"
#include "ClientGetTimeResult.h"
#include "ClientGetSharedGroupDataResult.h"
#include "ClientGetPurchaseResult.h"
#include "ClientGetPublisherDataResult.h"
#include "ClientGetPlayFabIDsFromXboxLiveIDsResult.h"
#include "ClientGetPlayFabIDsFromTwitchIDsResult.h"
#include "ClientGetPlayFabIDsFromSteamIDsResult.h"
#include "ClientGetPlayFabIDsFromPSNAccountIDsResult.h"
#include "ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult.h"
#include "ClientGetPlayFabIDsFromKongregateIDsResult.h"
#include "ClientConsumeItemResult.h"
#include "ClientGetPlayFabIDsFromGoogleIDsResult.h"
#include "ClientGetPlayFabIDsFromGenericIDsResult.h"
#include "ClientGetPlayFabIDsFromGameCenterIDsResult.h"
#include "ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult.h"
#include "ClientGetPlayFabIDsFromFacebookIDsResult.h"
#include "ClientGetPlayerTradesResponse.h"
#include "ClientGetPlayerTagsResult.h"
#include "ClientGetPlayerStatisticVersionsResult.h"
#include "ClientAndroidDevicePushNotificationRegistrationResult.h"
#include "ClientGetPlayerStatisticsResult.h"
#include "ClientGetPlayerProfileResult.h"
#include "ClientGetPlayerCombinedInfoResult.h"
#include "ClientGetPhotonAuthenticationTokenResult.h"
#include "ClientGetPaymentTokenResult.h"
#include "ClientGetLeaderboardResult.h"
#include "ClientGetLeaderboardForUsersCharactersResult.h"
#include "ClientGetLeaderboardAroundPlayerResult.h"
#include "ClientGetFriendsListResult.h"
#include "ClientGetFriendLeaderboardAroundPlayerResult.h"
#include "ClientGetContentDownloadUrlResult.h"
#include "ClientGetCharacterLeaderboardResult.h"
#include "ClientGetCharacterInventoryResult.h"
#include "ClientGetCharacterDataResult.h"
#include "ClientGetCatalogItemsResult.h"
#include "ClientGetAdPlacementsResult.h"
#include "ClientGetAccountInfoResult.h"
#include "ClientGameServerRegionsResult.h"
#include "ClientExecuteCloudScriptResult.h"
#include "ClientEmptyResult.h"
#include "ClientEmptyResponse.h"
#include "ClientCurrentGamesResult.h"
#include "ClientCreateSharedGroupResult.h"
#include "ClientConsumeXboxEntitlementsResult.h"
#include "ClientConfirmPurchaseResult.h"
#include "ClientCancelTradeResponse.h"
#include "ClientAddUsernamePasswordResult.h"
#include "ClientAddSharedGroupMembersResult.h"
#include "ClientAddOrUpdateContactEmailResult.h"
#include "ClientAddGenericIDResult.h"
#include "ClientAddFriendResult.h"
#include "PlayFabClientModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabClientModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabClientModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FClientWriteEventResponse decodeWriteEventResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateWindowsReceiptResult decodeValidateWindowsReceiptResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateIOSReceiptResult decodeValidateIOSReceiptResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateGooglePlayPurchaseResult decodeValidateGooglePlayPurchaseResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateAmazonReceiptResult decodeValidateAmazonReceiptResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateUserTitleDisplayNameResult decodeUpdateUserTitleDisplayNameResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateUserDataResult decodeUpdateUserDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateSharedGroupDataResult decodeUpdateSharedGroupDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdatePlayerStatisticsResult decodeUpdatePlayerStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateCharacterStatisticsResult decodeUpdateCharacterStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateCharacterDataResult decodeUpdateCharacterDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlockContainerItemResult decodeUnlockContainerItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkXboxAccountResult decodeUnlinkXboxAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkWindowsHelloAccountResponse decodeUnlinkWindowsHelloAccountResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkTwitchAccountResult decodeUnlinkTwitchAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkSteamAccountResult decodeUnlinkSteamAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkPSNAccountResult decodeUnlinkPSNAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkNintendoSwitchDeviceIdResult decodeUnlinkNintendoSwitchDeviceIdResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkKongregateAccountResult decodeUnlinkKongregateAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkIOSDeviceIDResult decodeUnlinkIOSDeviceIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkGoogleAccountResult decodeUnlinkGoogleAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkGameCenterAccountResult decodeUnlinkGameCenterAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkFacebookInstantGamesIdResult decodeUnlinkFacebookInstantGamesIdResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkFacebookAccountResult decodeUnlinkFacebookAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkCustomIDResult decodeUnlinkCustomIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkAndroidDeviceIDResult decodeUnlinkAndroidDeviceIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientStartPurchaseResult decodeStartPurchaseResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientStartGameResult decodeStartGameResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientSetPlayerSecretResult decodeSetPlayerSecretResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientSetFriendTagsResult decodeSetFriendTagsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientSendAccountRecoveryEmailResult decodeSendAccountRecoveryEmailResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRewardAdActivityResult decodeRewardAdActivityResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRestoreIOSPurchasesResult decodeRestoreIOSPurchasesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientReportPlayerClientResult decodeReportPlayerClientResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientReportAdActivityResult decodeReportAdActivityResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveSharedGroupMembersResult decodeRemoveSharedGroupMembersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveGenericIDResult decodeRemoveGenericIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveFriendResult decodeRemoveFriendResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveContactEmailResult decodeRemoveContactEmailResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRegisterPlayFabUserResult decodeRegisterPlayFabUserResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRegisterForIOSPushNotificationResult decodeRegisterForIOSPushNotificationResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRedeemCouponResult decodeRedeemCouponResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientPurchaseItemResult decodePurchaseItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientPayForPurchaseResult decodePayForPurchaseResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientOpenTradeResponse decodeOpenTradeResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientMatchmakeResult decodeMatchmakeResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLoginResult decodeLoginResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientListUsersCharactersResult decodeListUsersCharactersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkXboxAccountResult decodeLinkXboxAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkWindowsHelloAccountResponse decodeLinkWindowsHelloAccountResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkTwitchAccountResult decodeLinkTwitchAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkSteamAccountResult decodeLinkSteamAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkPSNAccountResult decodeLinkPSNAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkNintendoSwitchDeviceIdResult decodeLinkNintendoSwitchDeviceIdResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkKongregateAccountResult decodeLinkKongregateAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkIOSDeviceIDResult decodeLinkIOSDeviceIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkGoogleAccountResult decodeLinkGoogleAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkGameCenterAccountResult decodeLinkGameCenterAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkFacebookInstantGamesIdResult decodeLinkFacebookInstantGamesIdResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkFacebookAccountResult decodeLinkFacebookAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkCustomIDResult decodeLinkCustomIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkAndroidDeviceIDResult decodeLinkAndroidDeviceIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGrantCharacterToUserResult decodeGrantCharacterToUserResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetWindowsHelloChallengeResponse decodeGetWindowsHelloChallengeResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetUserInventoryResult decodeGetUserInventoryResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetUserDataResult decodeGetUserDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTradeStatusResponse decodeGetTradeStatusResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTitlePublicKeyResult decodeGetTitlePublicKeyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTitleNewsResult decodeGetTitleNewsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTitleDataResult decodeGetTitleDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTimeResult decodeGetTimeResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetStoreItemsResult decodeGetStoreItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetSharedGroupDataResult decodeGetSharedGroupDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPurchaseResult decodeGetPurchaseResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPublisherDataResult decodeGetPublisherDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromXboxLiveIDsResult decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromTwitchIDsResult decodeGetPlayFabIDsFromTwitchIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromSteamIDsResult decodeGetPlayFabIDsFromSteamIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromPSNAccountIDsResult decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromKongregateIDsResult decodeGetPlayFabIDsFromKongregateIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromGoogleIDsResult decodeGetPlayFabIDsFromGoogleIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromGenericIDsResult decodeGetPlayFabIDsFromGenericIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromGameCenterIDsResult decodeGetPlayFabIDsFromGameCenterIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromFacebookIDsResult decodeGetPlayFabIDsFromFacebookIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerTradesResponse decodeGetPlayerTradesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerTagsResult decodeGetPlayerTagsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerStatisticVersionsResult decodeGetPlayerStatisticVersionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerStatisticsResult decodeGetPlayerStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerSegmentsResult decodeGetPlayerSegmentsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerProfileResult decodeGetPlayerProfileResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerCombinedInfoResult decodeGetPlayerCombinedInfoResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPhotonAuthenticationTokenResult decodeGetPhotonAuthenticationTokenResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPaymentTokenResult decodeGetPaymentTokenResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardResult decodeGetLeaderboardResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardForUsersCharactersResult decodeGetLeaderboardForUsersCharactersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardAroundPlayerResult decodeGetLeaderboardAroundPlayerResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardAroundCharacterResult decodeGetLeaderboardAroundCharacterResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetFriendsListResult decodeGetFriendsListResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetFriendLeaderboardAroundPlayerResult decodeGetFriendLeaderboardAroundPlayerResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetContentDownloadUrlResult decodeGetContentDownloadUrlResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterStatisticsResult decodeGetCharacterStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterLeaderboardResult decodeGetCharacterLeaderboardResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterInventoryResult decodeGetCharacterInventoryResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterDataResult decodeGetCharacterDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCatalogItemsResult decodeGetCatalogItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetAdPlacementsResult decodeGetAdPlacementsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetAccountInfoResult decodeGetAccountInfoResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGameServerRegionsResult decodeGameServerRegionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientExecuteCloudScriptResult decodeExecuteCloudScriptResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientEmptyResult decodeEmptyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientCurrentGamesResult decodeCurrentGamesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientCreateSharedGroupResult decodeCreateSharedGroupResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumeXboxEntitlementsResult decodeConsumeXboxEntitlementsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumePSNEntitlementsResult decodeConsumePSNEntitlementsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumeItemResult decodeConsumeItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConfirmPurchaseResult decodeConfirmPurchaseResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientCancelTradeResponse decodeCancelTradeResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAttributeInstallResult decodeAttributeInstallResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAndroidDevicePushNotificationRegistrationResult decodeAndroidDevicePushNotificationRegistrationResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddUsernamePasswordResult decodeAddUsernamePasswordResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddSharedGroupMembersResult decodeAddSharedGroupMembersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddOrUpdateContactEmailResult decodeAddOrUpdateContactEmailResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddGenericIDResult decodeAddGenericIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddFriendResult decodeAddFriendResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAcceptTradeResponse decodeAcceptTradeResponseResponse(UPlayFabJsonObject* response);
    
};

