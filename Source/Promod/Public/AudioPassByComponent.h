#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AudioPassByComponent.generated.h"

class USphereComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAudioPassByComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SoundEffectColliderCollision;
    
    UAudioPassByComponent();
};

