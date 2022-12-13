#pragma once
#include "CoreMinimal.h"
#include "TDMPlayerState.h"
#include "UObject/NoExportTypes.h"
#include "InfectionPlayerState.generated.h"

UCLASS(Blueprintable)
class AInfectionPlayerState : public ATDMPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPlayerInfected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRegenHealth;
    
    AInfectionPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TriggerInfectedAttackAudio(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayAttack();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayAttack();
    
};

