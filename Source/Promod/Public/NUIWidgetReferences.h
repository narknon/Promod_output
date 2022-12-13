#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NUIWidgetReferences.generated.h"

UCLASS(Blueprintable)
class UNUIWidgetReferences : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> Templates;
    
    UNUIWidgetReferences();
};

