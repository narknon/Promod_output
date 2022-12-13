#pragma once
#include "CoreMinimal.h"
#include "WeaponStopper.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FWeaponStopper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Stop3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Stop1P;
    
    PROMOD_API FWeaponStopper();
};

