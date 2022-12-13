#include "BulkheadAudioEventWrapper.h"
#include "Net/UnrealNetwork.h"

void UBulkheadAudioEventWrapper::Update() {
}

void UBulkheadAudioEventWrapper::Stop() {
}

void UBulkheadAudioEventWrapper::Play() {
}

void UBulkheadAudioEventWrapper::Initialize(const FAudioEventWrapperInitializer& InitializationParams) {
}

void UBulkheadAudioEventWrapper::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBulkheadAudioEventWrapper, bIsLooped);
    DOREPLIFETIME(UBulkheadAudioEventWrapper, bLoopRunning);
    DOREPLIFETIME(UBulkheadAudioEventWrapper, LoopSafetyCutoffTime);
    DOREPLIFETIME(UBulkheadAudioEventWrapper, AudioStartEvent);
    DOREPLIFETIME(UBulkheadAudioEventWrapper, AudioStopEvent);
    DOREPLIFETIME(UBulkheadAudioEventWrapper, AudioComponent);
}

UBulkheadAudioEventWrapper::UBulkheadAudioEventWrapper() {
    this->bIsLooped = false;
    this->bLoopRunning = false;
    this->LoopSafetyCutoffTime = 1.00f;
    this->AudioStartEvent = NULL;
    this->AudioStopEvent = NULL;
    this->AudioComponent = NULL;
    this->OwningActor = NULL;
}

