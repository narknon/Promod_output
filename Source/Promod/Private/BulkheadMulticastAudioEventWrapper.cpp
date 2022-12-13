#include "BulkheadMulticastAudioEventWrapper.h"
#include "Net/UnrealNetwork.h"

class APawn;

void UBulkheadMulticastAudioEventWrapper::SetOwningPawn(APawn* Pawn) {
}

void UBulkheadMulticastAudioEventWrapper::SERVER_Stop_Implementation() {
}

void UBulkheadMulticastAudioEventWrapper::Server_Play_Implementation() {
}

void UBulkheadMulticastAudioEventWrapper::Multicast_Stop_Implementation() {
}

void UBulkheadMulticastAudioEventWrapper::Multicast_Play_Implementation() {
}

void UBulkheadMulticastAudioEventWrapper::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBulkheadMulticastAudioEventWrapper, OwningPawn);
}

UBulkheadMulticastAudioEventWrapper::UBulkheadMulticastAudioEventWrapper() {
    this->OwningPawn = NULL;
}

