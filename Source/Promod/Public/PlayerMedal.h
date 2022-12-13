#pragma once
#include "CoreMinimal.h"
#include "PlayerMedal.generated.h"

USTRUCT(BlueprintType)
struct FPlayerMedal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    PROMOD_API FPlayerMedal();
};

