#pragma once
#include "CoreMinimal.h"
#include "WeaponVisualData.h"
#include "WeaponAudioData.h"
#include "WeaponCosmeticData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponCosmeticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponVisualData VisualData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAudioData AudioData;
    
    PROMOD_API FWeaponCosmeticData();
};

