#pragma once
#include "CoreMinimal.h"
#include "NUIBaseUIElement.h"
#include "NUINationSelect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUINationSelect : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UNUINationSelect();
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfNations();
    
    UFUNCTION(BlueprintCallable)
    FString GetNameOfNation(int32 NationIndex);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    bool CanClose();
    
};

