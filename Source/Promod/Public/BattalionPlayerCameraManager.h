#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "BattalionPlayerCameraManager.generated.h"

class UBattalionSettings;
class AActor;
class ABattalionCharacter;
class UBattalionGameInstance;
class APlayerState;

UCLASS(Blueprintable, NonTransient)
class ABattalionPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentCamBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HigherScoreBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentActionBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SingleEnemyProximityBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastThirdPersonTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonCameraSmoothingSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* ViewingCharacter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSettings* BattSettings;
    
public:
    ABattalionPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    bool IsViewingPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool IsViewedPlayerAlive();
    
    UFUNCTION(BlueprintCallable)
    APlayerState* GetViewedPlayerState();
    
    UFUNCTION(BlueprintCallable)
    ABattalionCharacter* GetViewedCharacter();
    
};

