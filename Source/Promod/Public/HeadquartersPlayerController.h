#pragma once
#include "CoreMinimal.h"
#include "TDMPlayerController.h"
#include "HeadquartersPlayerController.generated.h"

class UAkAudioEvent;
class AHeadquarters_Zone;

UCLASS(Blueprintable)
class AHeadquartersPlayerController : public ATDMPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartTickingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopTickingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AHeadquarters_Zone* CurrentObjective;
    
    AHeadquartersPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Stop_HQ_TickingEvent();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Play_HQ_TickingEvent(float CurrentProgress);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopCap(AHeadquarters_Zone* Zone);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartCap(AHeadquarters_Zone* Zone);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetEndgameState(bool NewEndgameState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DebugPrintScore();
    
};

