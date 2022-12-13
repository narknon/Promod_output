#include "CTFMode_FlagZone.h"
#include "WorldMarkerComponent.h"

class ACTFPlayerState;

void ACTFMode_FlagZone::Client_SetNeutralLabel_Implementation(const FString& NewLabel) {
}

void ACTFMode_FlagZone::Client_SetFriendlyLabel_Implementation(const FString& NewLabel, ACTFPlayerState* PlayerOnly) {
}

void ACTFMode_FlagZone::Client_SetEnemyLabel_Implementation(const FString& NewLabel, ACTFPlayerState* PlayerOnly) {
}

ACTFMode_FlagZone::ACTFMode_FlagZone() {
    this->flag = NULL;
    this->CollisionComp = NULL;
    this->TeamAllegiance = 246;
    this->DefaultWorldMarker = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("DefaultWorldMarker"));
}

