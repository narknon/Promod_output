#pragma once
#include "CoreMinimal.h"
#include "SMGraphProperty_Base.h"
#include "SMTextSerializer.h"
#include "SMTextNodeWidgetInfo.h"
#include "SMTextGraphProperty.generated.h"

USTRUCT(BlueprintType)
struct SMEXTENDEDRUNTIME_API FSMTextGraphProperty : public FSMGraphProperty_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSMTextSerializer TextSerializer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSMTextNodeWidgetInfo WidgetInfo;
    
    FSMTextGraphProperty();
};

