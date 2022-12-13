#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlaceableTrophySystemDematerializationData.generated.h"

USTRUCT(BlueprintType)
struct FPlaceableTrophySystemDematerializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DematerializeLastHitBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DematerializeLastHitLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDematerializing;
    
    PROMOD_API FPlaceableTrophySystemDematerializationData();
};

