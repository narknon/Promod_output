#include "PromodStaticsBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class UParticleSystemComponent;
class AGameModeBase;

void UPromodStaticsBlueprintFunctionLibrary::OpenLevel(const UObject* WorldContextObject, FName LevelName, bool bAbsolute, const FString& Options) {
}

void UPromodStaticsBlueprintFunctionLibrary::KillParticlesForced(UParticleSystemComponent* ParticleSystemComponent) {
}

TSubclassOf<AGameModeBase> UPromodStaticsBlueprintFunctionLibrary::GetGameModeFromName(const UObject* WorldContextObject, const FString& ModeName) {
    return NULL;
}

UPromodStaticsBlueprintFunctionLibrary::UPromodStaticsBlueprintFunctionLibrary() {
}

