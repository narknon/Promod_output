#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalShutdown.generated.h"

class AWartideGameMode;

UCLASS(Blueprintable)
class UMedalShutdown : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UMedalShutdown();
};

