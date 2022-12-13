#include "PromodGizmo.h"
#include "Components/SkeletalMeshComponent.h"

void APromodGizmo::ResetCurrentSavedPositions() {
}

bool APromodGizmo::CanUseGizmoLoadPosition() {
    return false;
}

APromodGizmo::APromodGizmo() {
    this->GizmoMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->GizmoMesh = NULL;
    this->GizmoMeshClass = NULL;
    this->UseGizmoAnim = NULL;
    this->SavedLocationSound = NULL;
    this->LoadLocationSound = NULL;
    this->MaxPreviousSavedLocations = 0;
}

