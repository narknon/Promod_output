#pragma once
#include "CoreMinimal.h"
#include "TDMPlayerState.h"
#include "ENationType.h"
#include "CTFPlayerState.generated.h"

class ACTFMode_FlagZone;

UCLASS(Blueprintable)
class ACTFPlayerState : public ATDMPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ACTFMode_FlagZone* CarryingFlagHomeZone;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    uint8 CarryingFlagTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ENationType CarryingFlagNation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool HasFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 FlagsCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 FlagsReturned;
    
    ACTFPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool GetHasFlag();
    
};

