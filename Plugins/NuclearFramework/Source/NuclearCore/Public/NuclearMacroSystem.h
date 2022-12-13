#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "NuclearMacroSystem.generated.h"

UCLASS(Blueprintable)
class NUCLEARCORE_API UNuclearMacroSystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UNuclearMacroSystem();
    UFUNCTION(BlueprintCallable)
    void StopMacro();
    
    UFUNCTION(BlueprintCallable)
    void RecordMacro(const FString& MacroName);
    
    UFUNCTION(BlueprintCallable)
    void PlayMacro(const FString& MacroName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
};

