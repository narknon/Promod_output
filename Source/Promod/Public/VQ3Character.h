#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UObject/NoExportTypes.h"
#include "VQ3Character.generated.h"

class UVQ3CharacterMovementComponent;

UCLASS(Blueprintable)
class AVQ3Character : public ACharacter {
    GENERATED_BODY()
public:
    AVQ3Character();
    UFUNCTION(BlueprintCallable)
    void Yaw(bool bIsPure, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void Pitch(bool bIsPure, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void Move(FVector Direction, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVQ3CharacterMovementComponent* GetCharacterMovementComponent() const;
    
};

