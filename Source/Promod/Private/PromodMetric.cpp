#include "PromodMetric.h"

void UPromodMetric::SetNumSamples(int32 NumSamples) {
}

float UPromodMetric::GetValue(bool bAverage) const {
    return 0.0f;
}

int32 UPromodMetric::GetMinMaxValues(float& Min, float& Max) const {
    return 0;
}

void UPromodMetric::AddSample(float Value, bool bForceRaw) {
}

UPromodMetric::UPromodMetric() {
    this->bSmoothSamples = true;
    this->SmoothingFactor = 0.10f;
}

