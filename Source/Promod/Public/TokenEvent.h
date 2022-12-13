#pragma once
#include "CoreMinimal.h"
#include "TokenEvent.generated.h"

USTRUCT(BlueprintType)
struct FTokenEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText Description;
    
    PROMOD_API FTokenEvent();
};

