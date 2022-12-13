#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "EMapFogRevealMode.h"
#include "MapRevealerComponent.generated.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MINIMAPPLUGIN_API UMapRevealerComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* RevealMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapFogRevealMode RevealMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevealDropOffDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    bool bTempEngineBugWorkaround;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RevealMaterialInstance;
    
public:
    UMapRevealerComponent();
    UFUNCTION(BlueprintCallable)
    void SetRevealMode(const EMapFogRevealMode NewRevealMode);
    
    UFUNCTION(BlueprintCallable)
    void SetRevealExtent(const float NewRevealExtentX, const float NewRevealExtentY);
    
    UFUNCTION(BlueprintCallable)
    void SetRevealDropOffDistance(const float NewRevealDropOffDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMapFogRevealMode GetRevealMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRevealExtent(float& RevealExtentX, float& RevealExtentY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRevealDropOffDistance() const;
    
};

