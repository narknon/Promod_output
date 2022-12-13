#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "DefaultKillTracker.h"
#include "MedalMoneySaver.generated.h"

class AWartideGameMode;

UCLASS(Blueprintable)
class UMedalMoneySaver : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefaultKillTracker> DefaultKillTrackers;
    
    UMedalMoneySaver();
};

