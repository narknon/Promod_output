#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Flinch.generated.h"

USTRUCT(BlueprintType)
struct FFlinch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimePassed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    PROMOD_API FFlinch();
};

