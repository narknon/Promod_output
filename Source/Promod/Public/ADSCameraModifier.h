#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "ADSCameraModifier.generated.h"

class UBattalionGameInstance;
class ABattalionPlayerCameraManager;
class UBattalionSettings;

UCLASS(Blueprintable)
class UADSCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerCameraManager* BattCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSettings* BattSettings;
    
public:
    UADSCameraModifier();
};

