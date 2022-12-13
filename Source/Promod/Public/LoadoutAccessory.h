#pragma once
#include "CoreMinimal.h"
#include "ELoadoutSlotType.h"
#include "Styling/SlateBrush.h"
#include "LoadoutAccessory.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutAccessory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadoutSlotType SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    PROMOD_API FLoadoutAccessory();
};

