#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECargoCheckpointType.h"
#include "CargoCheckpointData.generated.h"

USTRUCT(BlueprintType)
struct FCargoCheckpointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECargoCheckpointType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraTimeProvided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator OffsetRotation;
    
    PROMOD_API FCargoCheckpointData();
};

