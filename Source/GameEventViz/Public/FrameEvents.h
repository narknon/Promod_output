#pragma once
#include "CoreMinimal.h"
#include "FrameEvent.h"
#include "FrameEvents.generated.h"

USTRUCT(BlueprintType)
struct FFrameEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameEvent> Events;
    
    GAMEEVENTVIZ_API FFrameEvents();
};

