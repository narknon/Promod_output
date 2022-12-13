#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "ENationType.h"
#include "BattalionBaseLevel.generated.h"

UCLASS(Blueprintable)
class ABattalionBaseLevel : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ENationType> TeamNations;
    
    ABattalionBaseLevel();
};

