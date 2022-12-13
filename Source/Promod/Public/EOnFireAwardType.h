#pragma once
#include "CoreMinimal.h"
#include "EOnFireAwardType.generated.h"

UENUM(BlueprintType)
enum class EOnFireAwardType : uint8 {
    None,
    Kill,
    AirKill,
    CollateralKill,
    Bounce,
    BounceKill,
    NoScopeKill,
    Air360SpinKill,
    StrafeKill,
    KnifeKill,
    WallBangKill,
    DirectImpactKill,
    GrenadeThrow,
    QuickReload,
    QuickFire,
    LastBulletKill,
    FirstBlood,
    TacNade,
    Wallrun,
    StrafeJump,
};

