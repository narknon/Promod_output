#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "LoadoutData.h"
#include "EForcedPlatform.h"
#include "UObject/NoExportTypes.h"
#include "MapToModeSchema.h"
#include "EAdminCommandsFilter.h"
#include "SubModeSchema.h"
#include "ESlotType.h"
#include "ENuclearInputType.h"
#include "FireUpData.h"
#include "EClassName.h"
#include "EFireUpType.h"
#include "BattalionGameInstance.generated.h"

class UNUIWelcomeScreen;
class UBattalionOnline;
class USaveDataManager;
class UPromodAllFireUpsDataAsset;
class UMapPackManager;
class ULocalPlayer;
class UBattalionAchievementManager;
class UBattalionSettings;
class UPromodTacticalUtilDataAsset;
class UBattalionGameViewport;
class UMediaPlaylist;
class UPromodPingablesDataAsset;
class UPlayFabSubsystem;
class UCheatCodeManager;
class UNUIClosedPrototypeVersion;
class UNUIWidgetReferences;
class UBattalionChallengeManager;
class UBattalionStatManager;
class UPlayerLoadoutsSaveData;
class UPromodWeaponArchetypeDataAsset;
class UBattalionMedalManager;
class UBattalionExperience;
class USkinDataAsset;
class UPromodWeaponDataAsset;
class UPromodLoadoutsDataAsset;
class UPromodClassManagerDataAsset;
class UPromodFireUpActionDataAsset;
class UPromodOffensiveUtilDataAsset;
class UPromodCosmeticsDataAsset;

UCLASS(Blueprintable, NonTransient)
class UBattalionGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapPackManager* KillRunMapPackManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapPackManager* JumperMapPackManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMapAndModeArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutData DesiredLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayIntroInMainMenu;
    
    UPROPERTY(EditAnywhere)
    uint8 CurrentConnectionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameViewport* Viewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalPlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabSubsystem* PFSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionOnline* Online;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCheatCodeManager* CheatCodeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIWelcomeScreen* WelcomeScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIClosedPrototypeVersion* VersionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNUIWidgetReferences* WidgetReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionStatManager* StatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionMedalManager* MedalManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionChallengeManager* ChallengeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionAchievementManager* AchievementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionExperience* BattalionExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRussianContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinDataAsset* SkinData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodWeaponDataAsset* PromodWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodLoadoutsDataAsset* PromodLoadoutsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodClassManagerDataAsset* ClassManagerDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodFireUpActionDataAsset* FireUpActionDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodAllFireUpsDataAsset* AllFireUpsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodPingablesDataAsset* PingablesDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodOffensiveUtilDataAsset* OffensiveUtilsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodTacticalUtilDataAsset* TacticalUtilsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodCosmeticsDataAsset* HatCosmeticsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* AllInGameMoviesPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* Playlist_VICTORY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* Playlist_Assault_Shootout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* Playlist_DEFEAT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* Playlist_FlawlessVictory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* Playlist_OVERTIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* Playlist_SHOOTOUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* Playlist_ShootoutTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* Playlist_SwitchingSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodWeaponArchetypeDataAsset* RifleArchetypeDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodWeaponArchetypeDataAsset* SMGArchetypeDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodWeaponArchetypeDataAsset* SniperArchetypeDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodWeaponArchetypeDataAsset* PistolArchetypeDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodWeaponArchetypeDataAsset* MeleeArchetypeDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> MatchmadePlayersToTeams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubModeSchema SubModeLoadoutSchema;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ServerId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrivateServerUrl;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveDataManager* SaveDataManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FrontEndMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapToModeSchema> MapsWithSupportedModes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapOrderRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerLoadoutsSaveData* SavedPlayerLoadouts;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstSpawnOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlotType SlotRestartedWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WelcomePopupAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminIDFromCommandLineArgs;
    
    UBattalionGameInstance();
    UFUNCTION(BlueprintCallable)
    void StopAutoMemReporter();
    
    UFUNCTION(BlueprintCallable)
    void StartAutoMemReporter();
    
    UFUNCTION(BlueprintCallable)
    void SingleFireAutoMemReporter();
    
    UFUNCTION(BlueprintCallable)
    void SetSlotRestartedWith(const ESlotType NewSlotType);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFirstSpawnOnMap(const bool bNewIsFirstSpawnOnMap);
    
private:
    UFUNCTION(BlueprintCallable)
    void ResumeUpdateData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSteamOverlayChanged(bool bSteamOverlayVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAutoMemReporterTick();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSNDHUDToBeDisabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsMinimapToBeDisabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsHUDNotFlashbangableDisabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsHUDFlashbangableDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForcingPlatformUIHide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForcingPlatform();
    
    UFUNCTION(BlueprintCallable)
    bool IsFlightingBuild();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoMemReporterRunning();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetTutorialMaps();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStarTimes(float CurrentTime, const FString& MapName, bool IsJumper);
    
    UFUNCTION(BlueprintCallable)
    ESlotType GetSlotRestartedWith() const;
    
    UFUNCTION(BlueprintCallable)
    USaveDataManager* GetSaveDataManagerInstance();
    
    UFUNCTION(BlueprintCallable)
    TArray<FMapToModeSchema> GetMapsWithSupportedModesInRotation();
    
    UFUNCTION(BlueprintCallable)
    TArray<FMapToModeSchema> GetMapsWithSupportedModes();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetKillRunMaps();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetJumperMaps();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOnline() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsMapRotationRandom();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFirstSpawnOnMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENuclearInputType GetInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EForcedPlatform GetForcedPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFireUpData GetFireUpDataFromType(EClassName ClassType, EFireUpType FireUpType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EForcedPlatform GetCurrentPlatform(bool GetForcedIfForcingPlatform);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAdminCommandsWithFilter(EAdminCommandsFilter Filter);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForcePlatformForUIImagesStr(const FString& Platform);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForcePlatformForUIImages(int32 Platform);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceHidePlatformUI(int32 newVisibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDumpSessions();
    
};

