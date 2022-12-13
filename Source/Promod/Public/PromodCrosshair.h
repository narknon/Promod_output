#pragma once
#include "CoreMinimal.h"
#include "EGrenadeType.h"
#include "Blueprint/UserWidget.h"
#include "ECrosshairType.h"
#include "ESpecialGrenadeType.h"
#include "PromodCrosshair.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPromodCrosshair : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGrenadeType, ECrosshairType> GrenadeCrosshairs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecialGrenadeType, ECrosshairType> SpecialGrenadeCrosshairs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrosshairType CurrentCrosshairType;
    
public:
    UPromodCrosshair();
    UFUNCTION(BlueprintCallable)
    void SetCrosshairType(const ECrosshairType NewCrosshairType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetCrosshairType(const ECrosshairType NewCrosshairType);
    
};

