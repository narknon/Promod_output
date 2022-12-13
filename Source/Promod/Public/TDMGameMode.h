#pragma once
#include "CoreMinimal.h"
#include "BattalionGameMode.h"
#include "TDMGameMode.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class ATDMGameMode : public ABattalionGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EndOnMatchPointWin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponSelectGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundTimeLeftUntilStopBackfill;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScorePctToStopBackfill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlreadyStoppedBackfill;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> UsedSpawns;
    
public:
    ATDMGameMode();
};

