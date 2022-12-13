#include "MapEditorController.h"

class AMapEditorObject;

void AMapEditorController::ToggleEditMode() {
}

void AMapEditorController::SetTransformSpace(EMapEditorTransformSpace Space) {
}

void AMapEditorController::SetTransformSnappingEnabled(EMapEditorTransformMode Mode, bool bEnabled, float Grid) {
}

void AMapEditorController::SetTransformMode(EMapEditorTransformMode NewTransformMode) {
}

void AMapEditorController::SetObjectToSpawn(const FMapEditorObjectData& ObjectData) {
}

void AMapEditorController::SaveLevel() {
}

void AMapEditorController::RegisterObjectTransformEvent(AMapEditorObject* Object, const FTransform& PrevTransform, const FTransform& NewTransform) {
}

void AMapEditorController::NameToDisplayString(const FString& InDisplayName, const bool bIsBool, FString& OutString) {
}

void AMapEditorController::LoadLevel() {
}

void AMapEditorController::GroundSelectedObject() {
}

EMapEditorTransformSpace AMapEditorController::GetTransformSpace() const {
    return EMapEditorTransformSpace::WorldSpace;
}

EMapEditorTransformMode AMapEditorController::GetTransformMode() const {
    return EMapEditorTransformMode::Translation;
}

void AMapEditorController::ClearObjectToSpawn() {
}

void AMapEditorController::BuildLevel() {
}

FMapEditorTransformSnapSettings AMapEditorController::BP_GetTransformSnapSettings(EMapEditorTransformMode Mode) const {
    return FMapEditorTransformSnapSettings{};
}

AMapEditorController::AMapEditorController() {
    this->MapEditorObjectsDataTable = NULL;
    this->TransformMode = EMapEditorTransformMode::Translation;
    this->TransformSpace = EMapEditorTransformSpace::WorldSpace;
    this->OriginalControllerRef = NULL;
    this->OriginalPlayer = NULL;
    this->MapEditorPawn = NULL;
}

