#include "GameModeMessage.h"

void UGameModeMessage::UpdateMessage(const FString& NewMessage) {
}


UGameModeMessage::UGameModeMessage() : UUserWidget(FObjectInitializer::Get()) {
    this->MessageVisibility = ESlateVisibility::Visible;
}

