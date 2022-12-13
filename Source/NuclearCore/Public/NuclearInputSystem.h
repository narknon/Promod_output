#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NuclearInputChangeDelegateDelegate.h"
#include "ENuclearInputType.h"
#include "NuclearInputSystem.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class NUCLEARCORE_API UNuclearInputSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerAnalogThreshold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNuclearInputChangeDelegate OnInputTypeChanged;
    
    UNuclearInputSystem();
    UFUNCTION(BlueprintCallable)
    void SetInputType(ENuclearInputType InputType, bool bForceOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENuclearInputType GetInputType() const;
    
};

