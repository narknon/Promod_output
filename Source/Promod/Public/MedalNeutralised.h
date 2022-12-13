#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalNeutralised.generated.h"

class ADOMGameMode;

UCLASS(Blueprintable)
class UMedalNeutralised : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADOMGameMode* DOMGameMode;
    
    UMedalNeutralised();
};

