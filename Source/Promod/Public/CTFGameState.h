#pragma once
#include "CoreMinimal.h"
#include "TDMGameState.h"
#include "CTFGameState.generated.h"

class ACTFMode_FlagZone;
class ACTFMode_Flag;
class ACTFPlayerState;

UCLASS(Blueprintable)
class ACTFGameState : public ATDMGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACTFMode_FlagZone*> TeamFlagZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACTFMode_Flag*> TeamFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACTFPlayerState*> FlagCarriers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OvertimeCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TimeToCapFlag;
    
    ACTFGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SetTimeToCapFlag(int32 NewTimeToCapFlag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SetOvertimeCounter(int32 NewOvertimeCounter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ForceUpdateOvertimeInfo(int32 ServerOvertimeCounter, int32 ServerTimeToCapFlag);
    
};

