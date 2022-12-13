#pragma once
#include "CoreMinimal.h"
#include "EScoreAwardType.generated.h"

UENUM(BlueprintType)
enum class EScoreAwardType : uint8 {
    KEY_DEFAULT,
    BATT_Generic_Kill,
    BATT_Generic_Assist,
    BATT_Generic_Death,
    HP_Generic_Kill,
    HP_Generic_Assist,
    HP_Generic_Death,
    HP_Objective_Kill,
    HP_Objective_Assist,
    HP_Zone_Capture,
    HP_Zone_Contesting,
    HP_In_Owned_Zone,
    CGO_Generic_Kill,
    CGO_Generic_Assist,
    CGO_Generic_Death,
    CGO_Objective_Kill,
    CGO_Objective_Enabled,
    CGO_Objective_Disabled,
    CGO_Objective_Contested,
    CGO_Objective_Checkpoint_Reached,
    CGO_Offensive_In_Enabled_Payload_Zone,
    CGO_Defensive_In_Disabled_payload_Zone,
    WRT_Generic_Kill,
    WRT_Generic_Assist,
    WRT_Generic_Death,
    WRT_Bomb_Plant,
    WRT_Bomb_Diffuse,
    WRT_Bomb_Carrier_Kill,
    WRT_Bomb_Planted_By_Team,
    WRT_Bomb_Diffused_By_Team,
    KEY_MAX UMETA(Hidden),
};

