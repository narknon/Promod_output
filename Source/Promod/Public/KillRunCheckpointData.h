#pragma once
#include "CoreMinimal.h"
#include "KillRunCheckpointData.generated.h"

class AKillRunWeaponPickup;
class APromodBot;

USTRUCT(BlueprintType)
struct FKillRunCheckpointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKillRunWeaponPickup*> Pickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APromodBot*> Bots;
    
    PROMOD_API FKillRunCheckpointData();
};

