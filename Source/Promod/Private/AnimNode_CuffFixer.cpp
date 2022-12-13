#include "AnimNode_CuffFixer.h"

FAnimNode_CuffFixer::FAnimNode_CuffFixer() {
    this->bZeroOutYawRotation = false;
    this->bZeroOutPitchRotation = false;
    this->bZeroOutRollRotation = false;
    this->bZeroOutXTranslation = false;
    this->bZeroOutYTranslation = false;
    this->bZeroOutZTranslation = false;
    this->TranslationSpace = BCS_WorldSpace;
}

