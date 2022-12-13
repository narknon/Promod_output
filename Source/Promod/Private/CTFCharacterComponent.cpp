#include "CTFCharacterComponent.h"

void UCTFCharacterComponent::Client_ShowMarkerUI_Implementation(int32 Team) {
}

void UCTFCharacterComponent::Client_RemoveFlag_Implementation() {
}

void UCTFCharacterComponent::Client_HideMarkerUI_Implementation() {
}

void UCTFCharacterComponent::Client_AttachFlag_Local_Implementation(uint8 Team, ENationType FlagNation) {
}

void UCTFCharacterComponent::Client_AttachFlag_Implementation(uint8 Team, ENationType FlagNation) {
}

UCTFCharacterComponent::UCTFCharacterComponent() {
    this->WorldMarkerComponent = NULL;
    this->WorldMarkerComponentIcon = NULL;
    this->AttachedFlag = NULL;
    this->FlagClass = NULL;
}

