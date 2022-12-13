#pragma once
#include "CoreMinimal.h"
#include "BattalionGrenadePickup.h"
#include "EIncendiaryGrenadeType.h"
#include "IncendiaryGrenadePickup.generated.h"

UCLASS(Blueprintable)
class AIncendiaryGrenadePickup : public ABattalionGrenadePickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIncendiaryGrenadeType IncendiaryGrenadeType;
    
    AIncendiaryGrenadePickup();
};

