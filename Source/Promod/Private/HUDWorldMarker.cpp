#include "HUDWorldMarker.h"

















bool UHUDWorldMarker::BP_IsMarkerVisible_Implementation() {
    return false;
}



UHUDWorldMarker::UHUDWorldMarker() : UUserWidget(FObjectInitializer::Get()) {
    this->MarkerAdsVisibilityCurve = NULL;
    this->MarkerVisibilityCurve = NULL;
    this->WorldMarkerReference = NULL;
    this->bHideOnFinishLerp = false;
    this->bStuckToScreen = false;
    this->ProgressMaterial = NULL;
    this->MarkerSizeReference = NULL;
    this->FadoutTime = 0.10f;
    this->AffixTime = 0.40f;
    this->MinScale = 0.88f;
    this->MaxScale = 1.00f;
    this->ScaleEdgeDistance = 0.15f;
    this->MinScaleDistance = 500.00f;
    this->MaxScaleDistance = 800.00f;
    this->MarkerScaleMultiplier = 0.50f;
    this->OverviewHeight = 72.00f;
    this->MiniMapRadius = 230.00f;
    this->ProjectionHorizontalBlendCone = 0.30f;
    this->ProjectionVerticalBlendCone = 0.50f;
    this->AzimuthBlendAngle = 45.00f;
    this->AzimuthBlendCone = 0.50f;
    this->MaxAlpha = 1.00f;
    this->MinAlpha = 0.10f;
    this->FadeAlpha = 0.10f;
    this->FadeTime = 0.20f;
    this->AimMaxAlpha = 0.40f;
    this->AimMinAlpha = 0.00f;
    this->AimFovealRadius = 0.07f;
    this->AimParafovealBelt = 0.06f;
    this->HipMaxAlpha = 0.60f;
    this->HipMinAlpha = 0.20f;
    this->HipFovealRadius = 0.07f;
    this->HipParafovealBelt = 0.06f;
    this->ArrowFadeTime = 0.20f;
    this->BattInstance = NULL;
    this->BattSettings = NULL;
}

