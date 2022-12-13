#include "MapEditorPawn.h"

AMapEditorPawn::AMapEditorPawn() {
    this->MaxUndoHistory = 20;
    this->ObjectPreviewClass = NULL;
    this->CursorTraceDistance = 100000.00f;
    this->CursorTraceFailedDistance = 1000.00f;
    this->bSpawningObject = false;
    this->ObjectPreview = NULL;
    this->MapEditorController = NULL;
    this->MapEditorGizmo = NULL;
}

