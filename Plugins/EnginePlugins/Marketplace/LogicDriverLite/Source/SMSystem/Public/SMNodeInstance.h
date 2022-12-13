#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SMInstanceInterface.h"
#include "UObject/NoExportTypes.h"
#include "SMGraphProperty.h"
#include "UObject/NoExportTypes.h"
#include "SMNodeInstance.generated.h"

class USMInstance;
class UTexture2D;
class USMStateMachineInstance;

UCLASS(Abstract, Blueprintable)
class SMSYSTEM_API USMNodeInstance : public UObject, public ISMInstanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoEvalExposedProperties;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSMGraphProperty> ExposedPropertyOverrides;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NodeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NodeIconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NodeIconTintColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TemplateGuid;
    
public:
    USMNodeInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEndState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUpdated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeInState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMInstance* GetStateMachineInstance(bool bTopMostInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateMachineInstance* GetOwningStateMachineNodeInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNodeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FLinearColor GetNodeIconTintColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector2D GetNodeIconSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UTexture2D* GetNodeIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetContext() const;
    
    UFUNCTION(BlueprintCallable)
    void EvaluateGraphProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConstructionScript();
    
    
    // Fix for true pure virtual functions not being implemented
};

