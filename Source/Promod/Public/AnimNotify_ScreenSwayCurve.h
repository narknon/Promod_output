#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_ScreenSwayCurve.generated.h"

class UCurveVector;

UCLASS(Blueprintable, CollapseCategories)
class PROMOD_API UAnimNotify_ScreenSwayCurve : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ScreenSwayCurve;
    
public:
    UAnimNotify_ScreenSwayCurve();
};

