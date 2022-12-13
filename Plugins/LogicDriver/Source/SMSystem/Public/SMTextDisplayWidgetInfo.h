#pragma once
#include "CoreMinimal.h"
#include "SMNodeWidgetInfo.h"
#include "SMTextDisplayWidgetInfo.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMTextDisplayWidgetInfo : public FSMNodeWidgetInfo {
    GENERATED_BODY()
public:
    FSMTextDisplayWidgetInfo();
};

