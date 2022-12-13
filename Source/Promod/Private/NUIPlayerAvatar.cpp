#include "NUIPlayerAvatar.h"

class ABattalionPlayerState;
class UBattalionOnline;

void UNUIPlayerAvatar::SetPlayer(ABattalionPlayerState* NewPlayerState) {
}

FString UNUIPlayerAvatar::GetPlayerID() {
    return TEXT("");
}

UBattalionOnline* UNUIPlayerAvatar::GetOnline() {
    return NULL;
}


void UNUIPlayerAvatar::AvatarLoaded() {
}

UNUIPlayerAvatar::UNUIPlayerAvatar() {
    this->bAvatarAvailable = false;
    this->Texture = NULL;
    this->Player = NULL;
}

