#include "MapEditorObjectDetailsWidget.h"

class AMapEditorObject;

void UMapEditorObjectDetailsWidget::SetStringValue(const FName& ValueName, const FString& CurrentValue) {
}

void UMapEditorObjectDetailsWidget::SetObject_Implementation(AMapEditorObject* Object) {
}

void UMapEditorObjectDetailsWidget::SetIntValue(const FName& ValueName, int32 CurrentValue) {
}

void UMapEditorObjectDetailsWidget::SetFloatValue(const FName& ValueName, float CurrentValue) {
}

void UMapEditorObjectDetailsWidget::SetBoolValue(const FName& ValueName, bool CurrentValue) {
}





UMapEditorObjectDetailsWidget::UMapEditorObjectDetailsWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LinkedObject = NULL;
}

