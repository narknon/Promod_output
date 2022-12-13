#pragma once
#include "CoreMinimal.h"
#include "BattalionPlayerSpawn.h"
#include "PromodShootoutSpawn.generated.h"

UCLASS(Blueprintable)
class APromodShootoutSpawn : public ABattalionPlayerSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTugOfWar;
    
    APromodShootoutSpawn();
};

