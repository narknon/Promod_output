#pragma once
#include "CoreMinimal.h"
#include "OverviewKillStatsData.h"
#include "NUIScreen.h"
#include "SkinEntity.h"
#include "OverviewGeneralStatsData.h"
#include "OverviewGameStatsData.h"
#include "BestWeaponData.h"
#include "BattleHubLeaderboardRowInfo.h"
#include "NUIBattleHub.generated.h"

class UWeaponNameDataAsset;
class UTexture2DDynamic;
class UBreadcrumbDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class UNUIBattleHub : public UNUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TabFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TabAdditionalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Reward_DpadFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Reward_DpadAdditionalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Armory_DpadFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Armory_DpadAdditionalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Medals_DpadFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Medals_DpadAdditionalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stats_DpadFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stats_DpadAdditionalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Leaderboards_DpadFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Leaderboards_DpadAdditionalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftStickVerticalDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftStickHorizontalDeadZone;
    
    UNUIBattleHub();
    UFUNCTION(BlueprintCallable)
    TArray<FSkinEntity> SortSkins(TArray<FSkinEntity> skins, UWeaponNameDataAsset* WeaponNames);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerProScore(int32 ProScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerOverviewKillStats(FOverviewKillStatsData OverviewKillStats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerOverviewGeneralStats(FOverviewGeneralStatsData OverviewGeneralStats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerOverviewGameStats(FOverviewGameStatsData OverviewGameStats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerName(const FString& Title);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerLevel(int32 playerLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerBestWeaponData(FBestWeaponData BestWeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerAvatar(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SendLeaderboardRequest(int32 LeaderboardPos, int32 LeaderboardPageLimit, bool FriendsOnly);
    
    UFUNCTION(BlueprintCallable)
    void SendLeaderboardProfileRequest(const FString& PlatformUserId);
    
    UFUNCTION(BlueprintCallable)
    void SendLeaderboardAroundPlayerRequest(int32 LeaderboardPageLimit, bool FriendsOnly);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshRewardsTab();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshOverviewTab();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshMedalsTab();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshLeaderboardsTab();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshArmouryTab();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedRightTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedRightShoulder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedLeftTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedLeftShoulder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadRightStick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceTop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedAccept();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareArmouryWidgets();
    
    UFUNCTION(BlueprintCallable)
    void OnTabChanged(int32 tabIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSubtabChanged(int32 subtabIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedLeaderboardData(const TArray<FBattleHubLeaderboardRowInfo>& LeaderboardData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConnectionStatusChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSavedTab();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSavedSubTab();
    
protected:
    UFUNCTION(BlueprintCallable)
    static FString GetFloatAsStringWithPrecision(float TheFloat, int32 Precision, bool IncludeLeadingZero);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetDpadFirstDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetDpadAdditionalDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBreadcrumbDataAsset* GetBreadCrumbDataAsset();
    
};

