#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalDreamkiller.generated.h"

class AWartideGameMode;

UCLASS(Blueprintable)
class UMedalDreamkiller : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UMedalDreamkiller();
};

