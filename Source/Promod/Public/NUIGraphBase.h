#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NUIBaseUIElement.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "NUIGraphBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIGraphBase : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UNUIGraphBase();
    UFUNCTION(BlueprintCallable)
    static void GraphDrawLines(UPARAM(Ref) FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, int32 Thickness, bool bAntiAlias);
    
};

