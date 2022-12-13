#pragma once
#include "CoreMinimal.h"
#include "GrenadeInfo.generated.h"

class ABattalionGrenade;

USTRUCT(BlueprintType)
struct FGrenadeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionGrenade* LinkedGrenade;
    
    PROMOD_API FGrenadeInfo();
};

