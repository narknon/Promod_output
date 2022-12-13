#pragma once
#include "CoreMinimal.h"
#include "MapIconAppearanceChangedSignatureDelegate.h"
#include "Components/BillboardComponent.h"
#include "MapIconMaterialChangedSignatureDelegate.h"
#include "MapIconMaterialInstancesChangedSignatureDelegate.h"
#include "MapIconEnteredViewSignatureDelegate.h"
#include "MapIconDestroyedSignatureDelegate.h"
#include "MapIconLeftViewSignatureDelegate.h"
#include "MapIconHoverStartSignatureDelegate.h"
#include "MapIconHoverEndSignatureDelegate.h"
#include "MapIconClickedSignatureDelegate.h"
#include "EIconSizeUnit.h"
#include "EIconBackgroundInteraction.h"
#include "UObject/NoExportTypes.h"
#include "EIconFogInteraction.h"
#include "MapIconComponent.generated.h"

class UMapViewComponent;
class UTexture2D;
class UMaterialInterface;
class UUserWidget;
class UMaterialInstanceDynamic;
class UMapRendererComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MINIMAPPLUGIN_API UMapIconComponent : public UBillboardComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconAppearanceChangedSignature OnIconAppearanceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconMaterialChangedSignature OnIconMaterialChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconMaterialInstancesChangedSignature OnIconMaterialInstancesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconEnteredViewSignature OnIconEnteredView;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconLeftViewSignature OnIconLeftView;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconDestroyedSignature OnIconDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconHoverStartSignature OnIconHoverStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconHoverEndSignature OnIconHoverEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconClickedSignature OnIconClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* IconMaterial_UMG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* IconMaterial_Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIconVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIconRotates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIconSizeUnit IconSizeUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconDrawColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObjectiveArrowEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ObjectiveArrowTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ObjectiveArrowMaterial_UMG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ObjectiveArrowMaterial_Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObjectiveArrowRotates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectiveArrowSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIconInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconTooltipText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIconBackgroundInteraction IconBackgroundInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIconFogInteraction IconFogInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconFogRevealThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideOwnerInsideFog;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMapViewComponent*, bool> IsRenderedPerView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* InitialIconMaterial_UMG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* InitialIconMaterial_Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UUserWidget*, UMaterialInstanceDynamic*> IconMaterialInstances_UMG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMapRendererComponent*, UMaterialInstanceDynamic*> IconMaterialInstances_Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMapRendererComponent*, UMaterialInstanceDynamic*> ObjectiveArrowMaterialInstances_Canvas;
    
public:
    UMapIconComponent();
private:
    UFUNCTION(BlueprintCallable)
    void StartIconFade(float Time);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetObjectiveArrowTexture(UTexture2D* NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveArrowSize(const float NewObjectiveArrowSize);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveArrowRotates(const bool bNewRotates);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveArrowEnabled(const bool bNewObjectiveArrowEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIconZOrder(const int32 NewZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetIconVisible(const bool bNewVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIconTooltipText(FName NewIconName);
    
    UFUNCTION(BlueprintCallable)
    void SetIconTexture(UTexture2D* NewIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetIconSize(const float NewIconSize, const EIconSizeUnit NewIconSizeUnit);
    
    UFUNCTION(BlueprintCallable)
    void SetIconRotates(const bool bNewRotates);
    
    UFUNCTION(BlueprintCallable)
    void SetIconMaterialForUMG(UMaterialInterface* NewMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetIconMaterialForCanvas(UMaterialInterface* NewMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetIconInteractable(const bool bNewInteractable);
    
    UFUNCTION(BlueprintCallable)
    void SetIconFogRevealThreshold(const float NewFogRevealThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetIconFogInteraction(const EIconFogInteraction NewFogInteraction);
    
    UFUNCTION(BlueprintCallable)
    void SetIconDrawColor(const FLinearColor& NewDrawColor);
    
    UFUNCTION(BlueprintCallable)
    void SetIconBackgroundInteraction(const EIconBackgroundInteraction NewBackgroundInteraction);
    
    UFUNCTION(BlueprintCallable)
    void ResetIconMaterialForUMG();
    
    UFUNCTION(BlueprintCallable)
    void ResetIconMaterialForCanvas();
    
    UFUNCTION(BlueprintCallable)
    void RegisterMaterialInstanceFromUMG(UUserWidget* IconWidget, UMaterialInstanceDynamic* MatInst);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveHoverStart();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveHoverEnd();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveClicked(const bool bIsLeftMouseButton);
    
    UFUNCTION(BlueprintCallable)
    bool MarkRenderedInView(UMapViewComponent* View, const bool bNewIsRendered);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRenderedInView(UMapViewComponent* View) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveArrowEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIconVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIconInteractable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetObjectiveArrowTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObjectiveArrowSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetObjectiveArrowMaterialForUMG() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetObjectiveArrowMaterialForCanvas() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIconZOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIconTooltipText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIconSizeUnit GetIconSizeUnit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIconSize() const;
    
    UFUNCTION(BlueprintCallable)
    void GetIconMaterialInstancesForUMG(TArray<UMaterialInstanceDynamic*>& MaterialInstances);
    
    UFUNCTION(BlueprintCallable)
    void GetIconMaterialInstancesForCanvas(TArray<UMaterialInstanceDynamic*>& MaterialInstances);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetIconMaterialForUMG() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetIconMaterialForCanvas() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIconFogRevealThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIconFogInteraction GetIconFogInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetIconDrawColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIconBackgroundInteraction GetIconBackgroundInteraction() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeIcon(float InitialDelay, float FadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesObjectiveArrowRotate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesIconRotate() const;
    
};

