#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal1v3Clutch.generated.h"

class AWartideGameMode;
class ABattalionPlayerControllerGMBase;

UCLASS(Blueprintable)
class UMedal1v3Clutch : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* ClutcherPC;
    
    UMedal1v3Clutch();
};

