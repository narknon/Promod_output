#pragma once
#include "CoreMinimal.h"
#include "HUDMaster.h"
#include "ETeamRole.h"
#include "BlitzHUDMaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UBlitzHUDMaster : public UHUDMaster {
    GENERATED_BODY()
public:
    UBlitzHUDMaster();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGameOverviewscore(int32 TeamIndex, int32 NewScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleCanRespawn(bool bNewCanRespawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRound(int32 RoundNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifySwappingSides(ETeamRole Role, FName BombCarrierName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyBombExploded();
    
};

