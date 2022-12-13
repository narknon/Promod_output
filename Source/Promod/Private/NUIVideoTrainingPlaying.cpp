#include "NUIVideoTrainingPlaying.h"

class UBattalionSubtitlesDataAsset;


void UNUIVideoTrainingPlaying::Setup(EVideoTrainingType VideoType, UBattalionSubtitlesDataAsset* Subtitles) {
}



UNUIVideoTrainingPlaying::UNUIVideoTrainingPlaying() {
    this->CurrentVideoType = EVideoTrainingType::Wartide;
    this->CurrentSubtitles = NULL;
    this->SubtitlesVisible = true;
}

