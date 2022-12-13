#include "BattalionAudio.h"

class AActor;
class UAkComponent;
class UAkAudioEvent;
class UWorld;

void UBattalionAudio::StopGlobalEvent() {
}

void UBattalionAudio::SetRTPCOnAKComp(UAkComponent* akComp, const FString& rtpcName, float Val, int32 interpolTime) {
}

bool UBattalionAudio::SetRTPCGlobalEvent(const FString& rtpcName, float Val, int32 interpolTime) {
    return false;
}

void UBattalionAudio::SetMusicState(FName MusicState) {
}

bool UBattalionAudio::PostGlobalEvent(UAkAudioEvent* AkEvent) {
    return false;
}

void UBattalionAudio::PostEventOnLocation(UAkAudioEvent* AkEvent, FVector Location, UWorld* World) {
}

bool UBattalionAudio::PostEventOnComp(UAkComponent* Component, UAkAudioEvent* AkEvent, bool bStopWhenActorDestroyed) {
    return false;
}

bool UBattalionAudio::PostEventOnActor(AActor* Actor, UAkAudioEvent* AkEvent, bool bStopWhenActorDestroyed) {
    return false;
}

UBattalionAudio::UBattalionAudio() {
}

