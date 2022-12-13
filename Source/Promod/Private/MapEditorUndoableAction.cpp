#include "MapEditorUndoableAction.h"

FMapEditorUndoableAction::FMapEditorUndoableAction() {
    this->ObjectActor = NULL;
    this->ObjectId = 0;
    this->bSpawned = false;
    this->bDeleted = false;
}

