#pragma once
#include "CoreMinimal.h"
#include "BulkheadAudioEventWrapper.h"
#include "BulkheadMulticastAudioEventWrapper.generated.h"

class APawn;

UCLASS(Blueprintable)
class UBulkheadMulticastAudioEventWrapper : public UBulkheadAudioEventWrapper {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APawn* OwningPawn;
    
public:
    UBulkheadMulticastAudioEventWrapper();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetOwningPawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_Stop();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Play();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Stop();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Play();
    
};

