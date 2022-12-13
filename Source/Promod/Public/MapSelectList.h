#pragma once
#include "CoreMinimal.h"
#include "MapSelectList.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FMapSelectList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Hovered;
    
    PROMOD_API FMapSelectList();
};

