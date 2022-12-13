#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PromodReplicatedObject.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPromodReplicatedObject : public UObject {
    GENERATED_BODY()
public:
    UPromodReplicatedObject();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningActor() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Destroy();
    
};

