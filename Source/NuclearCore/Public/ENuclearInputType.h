#pragma once
#include "CoreMinimal.h"
#include "ENuclearInputType.generated.h"

UENUM(BlueprintType)
enum class ENuclearInputType : uint8 {
    None,
    KeyboardAndMouse,
    GenericGamepad,
    Xbox360Controller,
    XboxOneController,
    PS3Controller,
    PS4Controller,
    SteamController,
    SwitchController,
    SwitchProController,
};

