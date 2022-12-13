#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalBombTechnician.generated.h"

class AWartideGameMode;

UCLASS(Blueprintable)
class UMedalBombTechnician : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UMedalBombTechnician();
};

