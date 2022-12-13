#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalWeaponsSpecialist.generated.h"

class AFFAGameMode;

UCLASS(Blueprintable)
class UMedalWeaponsSpecialist : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFFAGameMode* FFAGameMode;
    
    UMedalWeaponsSpecialist();
};

