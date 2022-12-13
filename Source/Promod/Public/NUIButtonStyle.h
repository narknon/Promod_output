#pragma once
#include "CoreMinimal.h"
#include "NUIButtonTextAppearance.h"
#include "NUIButtonAppearance.h"
#include "NUIButtonBackgroundAppearance.h"
#include "NUIButtonStyle.generated.h"

USTRUCT(BlueprintType)
struct FNUIButtonStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNUIButtonAppearance Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNUIButtonTextAppearance Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNUIButtonBackgroundAppearance Background;
    
    PROMOD_API FNUIButtonStyle();
};

