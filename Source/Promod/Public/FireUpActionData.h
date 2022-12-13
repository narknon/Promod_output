#pragma once
#include "CoreMinimal.h"
#include "EFireUpActionType.h"
#include "FireUpActionData.generated.h"

USTRUCT(BlueprintType)
struct FFireUpActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireUpActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    PROMOD_API FFireUpActionData();
};

