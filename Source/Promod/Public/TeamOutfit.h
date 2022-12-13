#pragma once
#include "CoreMinimal.h"
#include "ClassOutfit.h"
#include "TeamOutfit.generated.h"

USTRUCT(BlueprintType)
struct FTeamOutfit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClassOutfit> ClassOutfits;
    
    PROMOD_API FTeamOutfit();
};

