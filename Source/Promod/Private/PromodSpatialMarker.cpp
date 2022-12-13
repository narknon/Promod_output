#include "PromodSpatialMarker.h"
#include "Templates/SubclassOf.h"

class APlayerController;
class UCameraModifier;
class ABattalionPlayerState;

void UPromodSpatialMarker::UpdateVisibility(APlayerController* LocalPlayer) {
}


void UPromodSpatialMarker::RemoveCameraModifer(UCameraModifier* Modifier) {
}


bool UPromodSpatialMarker::HasFlag(ESpatialMarkerOptions flag) const {
    return false;
}

bool UPromodSpatialMarker::HasCameraModifier(TSubclassOf<UCameraModifier> ModifierClass) const {
    return false;
}

ABattalionPlayerState* UPromodSpatialMarker::GetLocalSpectatingPlayerState() {
    return NULL;
}

void UPromodSpatialMarker::ForceShowWidget() {
}

void UPromodSpatialMarker::ForceHideWidget() {
}

void UPromodSpatialMarker::ForceFade(const bool bFadeIn) {
}












bool UPromodSpatialMarker::BP_GetLOS() {
    return false;
}

UCameraModifier* UPromodSpatialMarker::AddCameraModifer(TSubclassOf<UCameraModifier> ModifierClass, bool bAllowDuplicates) {
    return NULL;
}

UPromodSpatialMarker::UPromodSpatialMarker() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsForceHidden = false;
    this->bUsingHealthbars = false;
    this->bShowHealthOnlyFromADS = false;
    this->bUsingOutlines = false;
    this->bUsingIcons = false;
    this->bSeeEnemyHealthbars = false;
    this->bShowHealthThroughWall = false;
    this->bShowAlliedMarkers = false;
    this->bShowEnemyMarkers = false;
    this->MinRangeForOutline = 0.00f;
    this->MaxRangeForOutline = 3000.00f;
    this->MinRangeForSilhouette = 0.00f;
    this->MaxRangeForSilhouette = 5000.00f;
    this->MinRangeForIcon = 0.00f;
    this->MaxRangeForIcon = 10000.00f;
    this->MinRangeForHealthbar = 0.00f;
    this->MaxRangeForHealthbar = 3000.00f;
    this->MinRangeForHealthbarADS = 3000.00f;
    this->MaxRangeForHealthbarADS = 3500.00f;
    this->MinRangeForEnemyHealthbar = 0.00f;
    this->MaxRangeForEnemyHealthbar = 3000.00f;
    this->MinRangeForEnemyHealthbarADS = 3000.00f;
    this->MaxRangeForEnemyHealthbarADS = 3500.00f;
    this->MinimumLookAtAngle = 0.00f;
    this->AlwaysShowDistance = 200.00f;
    this->HipMaxDistance = 1000.00f;
    this->AdsMaxDistance = 2000.00f;
    this->HipAngleCurve = NULL;
    this->AdsAngleCurve = NULL;
    this->bDebugChecks = false;
    this->MinScale = 0.20f;
    this->MaxScale = 1.00f;
    this->MinDistanceApart = 500.00f;
    this->MaxDistanceApart = 5000.00f;
    this->Scale = 0.00f;
    this->bScaleReverse = false;
    this->OwningCharacter = NULL;
    this->LinkedCharacter = NULL;
    this->SpatialMarkerFlags = 0;
    this->PrevSpatialMarkerFlags = 0;
}

