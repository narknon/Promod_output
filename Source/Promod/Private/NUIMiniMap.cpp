#include "NUIMiniMap.h"

class ABattalionCharacter;

void UNUIMiniMap::SetTints() {
}

void UNUIMiniMap::SetSmokeWidgetLinkedSmokes() {
}

void UNUIMiniMap::SetSmokeVisibility() {
}


void UNUIMiniMap::SetMarkerWidgetLinkedMarkers() {
}

void UNUIMiniMap::SetMarkerVisibility() {
}

void UNUIMiniMap::SetFrenemyLinkedCharacters() {
}


void UNUIMiniMap::OnStopWeaponFire(ABattalionCharacter* FiringPawn) {
}

void UNUIMiniMap::OnStartWeaponFire(ABattalionCharacter* FiringPawn) {
}

void UNUIMiniMap::OnSingleWeaponFire(ABattalionCharacter* FiringPawn) {
}

void UNUIMiniMap::GetWorldMarkers() {
}

void UNUIMiniMap::GetSmokes() {
}




UNUIMiniMap::UNUIMiniMap() {
    this->RotationAngle = 0.00f;
    this->Beacon = NULL;
    this->ThisCanvas = NULL;
    this->CachedMaterial = NULL;
    this->Scale = 0.00f;
    this->Zoom = 0.00f;
    this->PlayerIconImage = NULL;
    this->PlayerIconBombOutline = NULL;
    this->MiniMapScale = 0.00f;
    this->MiniMapZoom = 0.00f;
    this->RotateMap = false;
    this->bShouldShowSmokes = false;
    this->OwnerPC = NULL;
}

