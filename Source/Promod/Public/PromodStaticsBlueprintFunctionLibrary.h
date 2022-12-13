#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PromodStaticsBlueprintFunctionLibrary.generated.h"

class UObject;
class UParticleSystemComponent;
class AGameModeBase;

UCLASS(Blueprintable)
class UPromodStaticsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPromodStaticsBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenLevel(const UObject* WorldContextObject, FName LevelName, bool bAbsolute, const FString& Options);
    
    UFUNCTION(BlueprintCallable)
    static void KillParticlesForced(UParticleSystemComponent* ParticleSystemComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSubclassOf<AGameModeBase> GetGameModeFromName(const UObject* WorldContextObject, const FString& ModeName);
    
};

