#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalDisruptive.generated.h"

class AWartideGameMode;

UCLASS(Blueprintable)
class UMedalDisruptive : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UMedalDisruptive();
};

