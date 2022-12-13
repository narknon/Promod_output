#pragma once
#include "CoreMinimal.h"
#include "BattalionPlayerSpawn.h"
#include "CargoPlayerSpawn.generated.h"

UCLASS(Blueprintable)
class PROMOD_API ACargoPlayerSpawn : public ABattalionPlayerSpawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Checkpoint;
    
public:
    ACargoPlayerSpawn();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCheckpoint() const;
    
};

