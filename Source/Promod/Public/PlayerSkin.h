#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.h"
#include "PlayerSkin.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSkin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkinId;
    
    PROMOD_API FPlayerSkin();
};

