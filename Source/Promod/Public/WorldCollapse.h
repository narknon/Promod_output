#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EWorldCollapseType.h"
#include "WorldCollapse.generated.h"

class APromodPlayerState;
class ABombMode_Bomb;

UCLASS(Blueprintable)
class PROMOD_API AWorldCollapse : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldCollapseType WorldCollapseType;
    
    AWorldCollapse();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_OnMatchStateStarted(const FName& NewState, bool IsJoinInProgress);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_OnBombPlanted(APromodPlayerState* InstigatorPS, ABombMode_Bomb* Bomb);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_OnBombDefused(APromodPlayerState* InstigatorPS, ABombMode_Bomb* Bomb);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StartAtRadius(float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartAtRadius(float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMatchStateStarted(const FName& NewState, bool JoinInProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBombPlanted(APromodPlayerState* InstigatorPS, ABombMode_Bomb* Bomb);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBombDefused(APromodPlayerState* InstigatorPS, ABombMode_Bomb* Bomb);
    
};

