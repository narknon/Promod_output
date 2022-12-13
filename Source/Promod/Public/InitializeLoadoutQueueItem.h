#pragma once
#include "CoreMinimal.h"
#include "LoadoutInitializer.h"
#include "InitializeLoadoutQueueItem.generated.h"

class APromodPlayerController;

USTRUCT(BlueprintType)
struct FInitializeLoadoutQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutInitializer LoadoutInitializer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TryCount;
    
    PROMOD_API FInitializeLoadoutQueueItem();
};

