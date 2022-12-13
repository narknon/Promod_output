#include "BattalionCharacterComponent.h"

void UBattalionCharacterComponent::Client_StopMusic_Implementation() {
}

void UBattalionCharacterComponent::Client_ResumeMusic_Implementation() {
}

void UBattalionCharacterComponent::Client_PauseMusic_Implementation() {
}

void UBattalionCharacterComponent::Client_BeginMusic_Implementation(const FName& MusicState) {
}

UBattalionCharacterComponent::UBattalionCharacterComponent() {
    this->MusicEvent = NULL;
    this->StopMusicEvent = NULL;
}

