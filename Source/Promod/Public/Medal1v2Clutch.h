#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal1v2Clutch.generated.h"

class ABattalionPlayerControllerGMBase;
class AWartideGameMode;

UCLASS(Blueprintable)
class UMedal1v2Clutch : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* ClutcherPC;
    
    UMedal1v2Clutch();
};

