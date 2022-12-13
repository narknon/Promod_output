#include "MapEditorGizmo.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

void AMapEditorGizmo::UpdateTransformSpace_Implementation(EMapEditorTransformSpace NewTransformSpace) {
}

void AMapEditorGizmo::UpdateTransformMode_Implementation(EMapEditorTransformMode NewTransformMode) {
}



AMapEditorGizmo::AMapEditorGizmo() {
    this->TransformRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformRootComponent"));
    this->TranslationRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TranslationRootComponent"));
    this->TranslationFreeAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TranslationFreeAxis"));
    this->TranslationHandleXAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TranslationHandleXAxis"));
    this->TranslationHandleYAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TranslationHandleYAxis"));
    this->TranslationHandleZAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TranslationHandleZAxis"));
    this->TranslationHandleXYAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TranslationHandleXYAxis"));
    this->TranslationHandleXZAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TranslationHandleXZAxis"));
    this->TranslationHandleYZAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TranslationHandleYZAxis"));
    this->RotationRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RotationRootComponent"));
    this->RotationHandleTrackBall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RotationHandleTrackBall"));
    this->RotationHandleXAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RotationHandleXAxis"));
    this->RotationHandleYAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RotationHandleYAxis"));
    this->RotationHandleZAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RotationHandleZAxis"));
    this->ScaleRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScaleRootComponent"));
    this->ScaleHandleUniform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScaleHandleUniform"));
    this->ScaleHandleXAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScaleHandleXAxis"));
    this->ScaleHandleYAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScaleHandleYAxis"));
    this->ScaleHandleZAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScaleHandleZAxis"));
    this->ScaleHandleXYAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScaleHandleXYAxis"));
    this->ScaleHandleXZAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScaleHandleXZAxis"));
    this->ScaleHandleYZAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScaleHandleYZAxis"));
    this->TransformMode = EMapEditorTransformMode::Translation;
    this->TransformSpace = EMapEditorTransformSpace::WorldSpace;
    this->AttachedObject = NULL;
    this->bIsPerformingDragAction = false;
    this->CurrentlyHoveredHandle = NULL;
    this->MapEditorControllerRef = NULL;
    this->MapEditorPawnRef = NULL;
}

