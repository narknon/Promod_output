#include "PromodMetricsSystem.h"

class UPromodMetric;

UPromodMetric* UPromodMetricsSystem::GetMetric(const FName& Name) const {
    return NULL;
}

UPromodMetric* UPromodMetricsSystem::FindOrAddMetric(const FName& Name) {
    return NULL;
}

UPromodMetricsSystem::UPromodMetricsSystem() {
    this->FrameTime = NULL;
    this->ClientFPS = NULL;
    this->IdleTime = NULL;
    this->GameThreadTime = NULL;
    this->RenderThreadTime = NULL;
    this->RHIThreadTime = NULL;
    this->GameLatency = NULL;
    this->RenderLatency = NULL;
    this->GameToRenderLatency = NULL;
    this->GPUTemp = NULL;
}

