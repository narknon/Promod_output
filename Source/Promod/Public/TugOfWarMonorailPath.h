#pragma once
#include "CoreMinimal.h"
#include "MonorailPath.h"
#include "TugOfWarMonorailPath.generated.h"

UCLASS(Blueprintable)
class PROMOD_API ATugOfWarMonorailPath : public AMonorailPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeam0IsAt0thSplinePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackersTugOfWarSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTugOfWarMonorailSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableTugOfWarTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableTugOfWarTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInSuddenDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuddenDeathWinPercentage;
    
    ATugOfWarMonorailPath();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_OnSuddenDeathStarted(const float InSuddenDeathWinPercentage);
    
};

