#include "HUDPlayerName.h"

class ABattalionCharacter;
class APawn;







void UHUDPlayerName::ManualTick(float InDeltaTime, ABattalionCharacter* Owner, APawn* Spectator) {
}

UHUDPlayerName::UHUDPlayerName() : UUserWidget(FObjectInitializer::Get()) {
    this->CrossPlayGlobeVisiblity = ESlateVisibility::Collapsed;
    this->Health = 100.00f;
    this->Text = NULL;
    this->SpectatorCanvas = NULL;
    this->LinkedCharacter = NULL;
    this->PlayerPawn = NULL;
    this->DistanceScalarCurve = NULL;
    this->DistanceQualityCurve = NULL;
    this->bEnemy = false;
}

