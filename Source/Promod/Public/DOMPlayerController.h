#pragma once
#include "CoreMinimal.h"
#include "TDMPlayerController.h"
#include "DOMPlayerController.generated.h"

class ADOMMode_Zone;
class UAkAudioEvent;
class ADOMPlayerState;

UCLASS(Blueprintable)
class ADOMPlayerController : public ATDMPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ADOMMode_Zone* CurrentZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ADOMMode_Zone* DiedInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartTickingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopTickingEvent;
    
    ADOMPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Client, Reliable)
    void UpdateSpectatorHUDZone(uint8 SpectatingID, ADOMMode_Zone* Zone);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateHUDZone(ADOMMode_Zone* Zone);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Stop_DOM_TickingEvent();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Play_DOM_TickingEvent(float CurrentProgress);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateZoneIcons();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopCap(ADOMMode_Zone* Zone);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartCap(ADOMMode_Zone* Zone);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReportTeamLeftZone(ADOMPlayerState* PS, ADOMMode_Zone* Zone);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReportTeamEnteredZone(ADOMPlayerState* PS, ADOMMode_Zone* Zone);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnLostPoint(const FString& Key);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnHoldingAllFlags();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnCapturedPoint(const FString& Key);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnBeingDominated();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ForceSetUseProgress(float NewUseProgress);
    
};

