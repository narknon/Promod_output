#pragma once
#include "CoreMinimal.h"
#include "SMTextDisplayWidgetInfo.h"
#include "Styling/SlateTypes.h"
#include "SMTextNodeWidgetInfo.generated.h"

USTRUCT(BlueprintType)
struct SMEXTENDEDRUNTIME_API FSMTextNodeWidgetInfo : public FSMTextDisplayWidgetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInlineEditableTextBlockStyle EditableTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrapTextAt;
    
    FSMTextNodeWidgetInfo();
};

