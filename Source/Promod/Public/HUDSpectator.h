#pragma once
#include "CoreMinimal.h"
#include "NUIBaseUIElement.h"
#include "ESpectatorCameraMode.h"
#include "HUDSpectator.generated.h"

class ABattalionSpectatorPawn;
class UHUDPlayerName;
class APlayerController;
class ABattalionPlayerState;
class UBattalionDamageType;

UCLASS(Blueprintable, EditInlineNew)
class UHUDSpectator : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamAScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamBScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpectatorCameraMode SpecCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOutlineEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AreGrenadeLinesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PCOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionSpectatorPawn* OwnerSpectatorPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* CurrentlySpectating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHUDPlayerName*> PlayerNames;
    
    UHUDSpectator();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWeapon(uint8 ID, const UBattalionDamageType* Weapon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePlayerState(uint8 ID, ABattalionPlayerState* PS);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHealth(uint8 ID, float Health);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateGrenadeCount(uint8 ID, bool IsSmoke, uint8 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCurrentlySpectating(ABattalionPlayerState* PS);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SpectatingIDChanged(ABattalionPlayerState* PS, uint8 ID, uint8 OldID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveBlackFade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshStatBars();
    
    UFUNCTION(BlueprintImplementableEvent)
    void KillPlayer(uint8 ID);
    
protected:
    UFUNCTION(BlueprintCallable)
    ABattalionSpectatorPawn* GetSpectatingPawn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeToBlack(float Time);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearPlayerStatBar(uint8 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearCurrentlySpectating();
    
};

