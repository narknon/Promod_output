#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SteamEventDispatcherSystem.generated.h"

UCLASS(Blueprintable)
class PROMOD_API USteamEventDispatcherSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USteamEventDispatcherSystem();
};

