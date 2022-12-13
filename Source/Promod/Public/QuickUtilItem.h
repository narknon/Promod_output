#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EQuickUtilType.h"
#include "QuickUtilItem.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FQuickUtilItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuickUtilType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IconScaling;
    
    PROMOD_API FQuickUtilItem();
};

