#include "GizmoSaveData.h"

FGizmoSaveData::FGizmoSaveData() {
    this->Time = 0.00f;
    this->Stance = EStanceType::ST_Standing;
    this->bIsCheckpoint = false;
}

