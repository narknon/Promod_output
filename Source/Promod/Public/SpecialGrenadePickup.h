#pragma once
#include "CoreMinimal.h"
#include "BattalionGrenadePickup.h"
#include "ESpecialGrenadeType.h"
#include "SpecialGrenadePickup.generated.h"

UCLASS(Blueprintable)
class ASpecialGrenadePickup : public ABattalionGrenadePickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialGrenadeType SpecialGrenadeType;
    
    ASpecialGrenadePickup();
};

