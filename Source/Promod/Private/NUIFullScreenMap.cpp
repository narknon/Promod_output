#include "NUIFullScreenMap.h"

class ABattalionCharacter;

void UNUIFullScreenMap::SetTints() {
}

void UNUIFullScreenMap::SetSmokeWidgetLinkedSmokes() {
}

void UNUIFullScreenMap::SetSmokeVisibility() {
}

void UNUIFullScreenMap::SetPlayersLinkedCharacters() {
}

void UNUIFullScreenMap::SetMarkerWidgetLinkedMarkers() {
}

void UNUIFullScreenMap::SetMarkerVisibility() {
}

void UNUIFullScreenMap::OnStopWeaponFire(ABattalionCharacter* FiringPawn) {
}

void UNUIFullScreenMap::OnStartWeaponFire(ABattalionCharacter* FiringPawn) {
}

void UNUIFullScreenMap::OnSingleWeaponFire(ABattalionCharacter* FiringPawn) {
}

void UNUIFullScreenMap::GetWorldMarkers() {
}

void UNUIFullScreenMap::GetSmokes() {
}

void UNUIFullScreenMap::GetPlayers() {
}




UNUIFullScreenMap::UNUIFullScreenMap() {
    this->Beacon = NULL;
    this->ThisCanvas = NULL;
    this->CachedMaterial = NULL;
    this->MapScale = 0.00f;
    this->MiniMapZoom = 0.00f;
}

