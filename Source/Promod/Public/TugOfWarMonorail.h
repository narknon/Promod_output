#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Monorail.h"
#include "TugOfWarMonorail.generated.h"

class ATugOfWarMonorailPath;

UCLASS(Blueprintable)
class PROMOD_API ATugOfWarMonorail : public AMonorail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ATugOfWarMonorailPath* SelectedPath_TugOfWar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator MonorailRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MonorailMovementScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentAttackerReEnableTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentDefenderSwapEnableTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentPayloadAllegiance;
    
public:
    ATugOfWarMonorail();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDefenderReEnablePercentage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAttackerReEnablePercentage();
    
};

