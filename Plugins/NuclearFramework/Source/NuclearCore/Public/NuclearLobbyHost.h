#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "NuclearLobbyHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class NUCLEARCORE_API ANuclearLobbyHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    ANuclearLobbyHost();
};

