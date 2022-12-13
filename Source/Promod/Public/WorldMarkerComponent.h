#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "ETeamVisibility.h"
#include "UObject/NoExportTypes.h"
#include "WorldMarkerComponent.generated.h"

class UHUDWorldMarker;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWorldMarkerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NeutralLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendlyLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnemyLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NeutralColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NeutralOffColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FriendlyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FriendlyOffColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EnemyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EnemyOffColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconNeutralColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconFriendlyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconEnemyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreventColorOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAlliedTeamNeutralColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseProgressMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefualtTimerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideOnFinishLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIconUseOffColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CurrentMarkerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentMarkerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor CurrentMarkerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor CurrentMarkerOffColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor CurrentIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMarkerCurrentlyVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor CurrentCaptureColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInHighlightAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeCountingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOriginalShouldShowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTimerTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamAllegianceChanged, meta=(AllowPrivateAccess=true))
    int32 TeamAllegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamVisibilityChanged, meta=(AllowPrivateAccess=true))
    ETeamVisibility TeamVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAddedToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStuckToScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDWorldMarker* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDWorldMarker> WidgetClass;
    
public:
    UWorldMarkerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnstickMarker();
    
    UFUNCTION(BlueprintCallable)
    void StopHighlightMarker();
    
    UFUNCTION(BlueprintCallable)
    void StickMarker(FVector2D ScreenPosition, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetTimerInfo(const float TimeToShow);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamVisibility(ETeamVisibility NewTeamVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamAllegiance(int32 TeamId);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldHideOnLerp(bool ShouldHide);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldBeCountingDown(bool ShouldBe);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressInfo(const FLinearColor ProgressColor, const float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveLabel(const FString& NewLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetImage(UTexture2D* NewImage);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenByOpacity(bool Hidden);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamVisibilityChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamAllegianceChanged();
    
    UFUNCTION(BlueprintCallable)
    void HighlightMarker(float Duration);
    
    UFUNCTION(BlueprintCallable)
    bool GetShouldBeCountingDown();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsStuckToScreen();
    
};

