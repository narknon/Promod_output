#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalDomination.generated.h"

class ADOMGameMode;

UCLASS(Blueprintable)
class UMedalDomination : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADOMGameMode* DOMGameMode;
    
    UMedalDomination();
};

