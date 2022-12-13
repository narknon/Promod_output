#include "VOVoice.h"

FVOVoice::FVOVoice() {
    this->Key = EVoiceKey::Empty;
    this->GermanEvent = NULL;
    this->RussianEvent = NULL;
    this->AmericaEvent = NULL;
    this->BritishEvent = NULL;
    this->IsVital = false;
}

