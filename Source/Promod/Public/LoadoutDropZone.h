#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LoadoutDropZone.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutDropZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScreenPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    PROMOD_API FLoadoutDropZone();
};

