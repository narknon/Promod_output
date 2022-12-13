#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENationType.h"
#include "UObject/NoExportTypes.h"
#include "BattalionNation.generated.h"

UCLASS(Blueprintable)
class UBattalionNation : public UObject {
    GENERATED_BODY()
public:
    UBattalionNation();
    UFUNCTION(BlueprintPure)
    static uint8 GetNationStencil(ENationType Nation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetNationName(ENationType Nation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetNationColor(ENationType Nation);
    
};

