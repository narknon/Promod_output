#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalAggressor.generated.h"

class ADOMGameMode;

UCLASS(Blueprintable)
class UMedalAggressor : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADOMGameMode* DOMGameMode;
    
    UMedalAggressor();
};

