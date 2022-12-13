#pragma once
#include "CoreMinimal.h"
#include "NUIGenericPopup.h"
#include "ModKitPopupWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UModKitPopupWidget : public UNUIGenericPopup {
    GENERATED_BODY()
public:
    UModKitPopupWidget();
    UFUNCTION(BlueprintCallable)
    void ReloadSaveDataModKit();
    
};

