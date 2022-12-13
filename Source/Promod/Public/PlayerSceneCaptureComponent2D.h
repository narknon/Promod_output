#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "PlayerSceneCaptureComponent2D.generated.h"

class ABattalionCharacter;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerSceneCaptureComponent2D : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* CachedCharacter;
    
public:
    UPlayerSceneCaptureComponent2D();
};

