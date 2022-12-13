#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "EMapPackGamemode.h"
#include "NUIPauseMenu.generated.h"

class AJumperGameMode;
class AKillRunGameMode;

UCLASS(Blueprintable, EditInlineNew)
class UNUIPauseMenu : public UNUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapPackGamemode GameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJumperGameMode* JumperGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKillRunGameMode* KillRunGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UNLOCKEDLEVELS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> KillrunLevelsStarsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SettingsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReportPlayerVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SavedLocationsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LevelSelectVisible;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentChangeTeamCooldown;
    
public:
    UNUIPauseMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChangeTeamEnabled(const bool bEnabled, const FText& OptionalReason);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeTeamCooldown(const float Cooldown);
    
    UFUNCTION(BlueprintCallable)
    void ResumeGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSettingsMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSavedLocationMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideReportPlayerMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideLevelSelectMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideBuyMenu();
    
    UFUNCTION(BlueprintCallable)
    void ExitGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClosePause();
    
    UFUNCTION(BlueprintCallable)
    void ChooseLoadout();
    
    UFUNCTION(BlueprintCallable)
    bool CanChooseLoadout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetSpectateButtonVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnChangeTeamCooldownStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnChangeTeamCooldownSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AboutToShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AboutToHide();
    
};

