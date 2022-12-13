#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MapEditorObjectDetailsWidget.generated.h"

class AMapEditorObject;

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UMapEditorObjectDetailsWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapEditorObject* LinkedObject;
    
    UMapEditorObjectDetailsWidget();
    UFUNCTION(BlueprintCallable)
    void SetStringValue(const FName& ValueName, const FString& CurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetObject(AMapEditorObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetIntValue(const FName& ValueName, int32 CurrentValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatValue(const FName& ValueName, float CurrentValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolValue(const FName& ValueName, bool CurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateStringValue(const FName& ValueName, const FString& CurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateIntValue(const FName& ValueName, int32 CurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateFloatValue(const FName& ValueName, float CurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBoolValue(const FName& ValueName, bool CurrentValue);
    
};

