#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMapEditorTransformSpace.h"
#include "EMapEditorTransformMode.h"
#include "MapEditorWidget.generated.h"

class AMapEditorObject;

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UMapEditorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMapEditorWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransformSpaceChanged(EMapEditorTransformSpace NewSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransformModeChanged(EMapEditorTransformMode NewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectSelected(AMapEditorObject* SelectedObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectDeselected(AMapEditorObject* DeselectedObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearSelection();
    
};

