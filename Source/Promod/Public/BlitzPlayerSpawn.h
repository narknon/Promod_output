#pragma once
#include "CoreMinimal.h"
#include "BattalionPlayerSpawn.h"
#include "BlitzPlayerSpawn.generated.h"

UCLASS(Blueprintable)
class ABlitzPlayerSpawn : public ABattalionPlayerSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageID;
    
    ABlitzPlayerSpawn();
};

