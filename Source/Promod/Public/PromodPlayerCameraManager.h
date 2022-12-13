#pragma once
#include "CoreMinimal.h"
#include "BattalionPlayerCameraManager.h"
#include "PromodPlayerCameraManager.generated.h"

class APromodCharacter;

UCLASS(Blueprintable, NonTransient)
class APromodPlayerCameraManager : public ABattalionPlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProneYawCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LadderYawCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProneViewPitchMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodCharacter* PlayerCharacter;
    
public:
    APromodPlayerCameraManager();
};

