#include "BombCharacterComponent.h"

void UBombCharacterComponent::Client_StopQuickPlantingAnimation_Implementation() {
}

void UBombCharacterComponent::Client_StopPlantingAnimation_Implementation() {
}

void UBombCharacterComponent::Client_StopDefusingAnimation_Implementation() {
}

void UBombCharacterComponent::Client_PlayQuickPlantingAnimation_Implementation(float PlantTime) {
}

void UBombCharacterComponent::Client_PlayPlantingAnimation_Implementation(float PlantTime) {
}

void UBombCharacterComponent::Client_PlayDefusingAnimation_Implementation(float DefuseTime) {
}

UBombCharacterComponent::UBombCharacterComponent() {
    this->Bomb1PSkeletalMesh = NULL;
    this->Bomb3PSkeletalMesh = NULL;
    this->Bomb1PSkeletalMeshClass = NULL;
    this->Bomb3PSkeletalMeshClass = NULL;
}

