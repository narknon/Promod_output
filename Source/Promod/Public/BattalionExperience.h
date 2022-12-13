#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BattalionExperience.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UBattalionExperience : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* XPLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoundTo;
    
    UBattalionExperience();
    UFUNCTION(BlueprintCallable)
    int32 CalculateLevelFromExperience(int32 ExperiencePoints);
    
    UFUNCTION(BlueprintCallable)
    int32 CalculateExperienceToNextLevel(int32 CurrentExperience);
    
    UFUNCTION(BlueprintCallable)
    int32 CalculateExperienceRequiredForLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    int32 CalculateExperienceOfferedByLevel(int32 CurrentLevel);
    
};

