#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "InvincibleTracker.h"
#include "MedalInvincible.generated.h"

class ATDMGameMode;

UCLASS(Blueprintable)
class UMedalInvincible : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATDMGameMode* TDMGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInvincibleTracker> InvincibleTrackers;
    
    UMedalInvincible();
};

