#include "HUDChatController.h"


void UHUDChatController::LoadChatLog() {
}

FString UHUDChatController::GetChannelString(EChatChannels Channel, bool IsDev) {
    return TEXT("");
}

void UHUDChatController::ChooseChannels(EChatChannels newChannel) {
}

UHUDChatController::UHUDChatController() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentChannel = EChatChannels::Global;
    this->ChatLog = NULL;
    this->ChannelText = NULL;
    this->ChatFadeTime = 0.00f;
    this->ScrollBox = NULL;
    this->OwnerController = NULL;
    this->ChatOpacity = 0.00f;
    this->IsTyping = false;
}

