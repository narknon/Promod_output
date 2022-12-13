#include "AudioEventWrapperInitializer.h"

FAudioEventWrapperInitializer::FAudioEventWrapperInitializer() {
    this->bIsLooped = false;
    this->LoopSafetyCutoffTime = 0.00f;
    this->AudioStartEvent = NULL;
    this->AudioStopEvent = NULL;
    this->AudioComponent = NULL;
}

