#pragma once
#include "CoreMinimal.h"
#include "NUIBaseUIElement.h"
#include "LoadoutCard.h"
#include "NUIBuyScreen.generated.h"

class AWartidePlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIBuyScreen : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool WeaponBought;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool RequestedFromPauseMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText TimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentAssaultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentSpecOpsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentSniperText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAssaultLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpecOpsLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSniperLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAssault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSpecOps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSnipers;
    
    UNUIBuyScreen();
    UFUNCTION(BlueprintCallable)
    void SetRequestedFromPauseMenu(bool bFromPauseMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshPlayerWeaponInfo(AWartidePlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLeftTeam(AWartidePlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerJoinedTeam(AWartidePlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerBoughtClass(AWartidePlayerState* Player, FLoadoutCard ClassCard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCriticalTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

