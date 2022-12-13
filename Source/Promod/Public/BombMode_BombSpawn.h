#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BombMode_BombSpawn.generated.h"

UCLASS(Blueprintable)
class ABombMode_BombSpawn : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageID;
    
    ABombMode_BombSpawn();
};

