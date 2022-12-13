#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MenuGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AMenuGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AMenuGameMode();
};

