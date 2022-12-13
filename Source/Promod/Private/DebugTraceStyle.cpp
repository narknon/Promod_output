#include "DebugTraceStyle.h"

FDebugTraceStyle::FDebugTraceStyle() {
    this->bEnabled = false;
    this->Lifetime = 0.00f;
    this->DrawImpactNormal = false;
    this->ImpactNormalLength = 0.00f;
    this->ImpactNormalThickness = 0.00f;
    this->ShowImpactNormalLabel = false;
    this->ImpactNormalLabelSize = 0.00f;
    this->DrawTracePath = false;
    this->DrawTracePathFromCenterOfBody = false;
    this->TracePathThickness = 0.00f;
    this->FlagBeginPenetrating = false;
}

