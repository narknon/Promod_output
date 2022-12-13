#pragma once
#include "CoreMinimal.h"
#include "NUIBaseUIElement.h"
#include "UObject/NoExportTypes.h"
#include "NUIScoreboardRow.generated.h"

class UNUIScoreboardGroup;
class ABattalionPlayerState;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNUIScoreboardRow : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNUIScoreboardGroup* ParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText PlayerLatency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerLatencyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHighlighted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText playerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* LevelIcon;
    
    UNUIScoreboardRow();
    UFUNCTION(BlueprintCallable)
    void Unhighlight();
    
    UFUNCTION(BlueprintCallable)
    void Unfocus();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerState(ABattalionPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void Select();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnhighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnfocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataUpdated();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerTalking();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerOnSameTeam();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerMuted();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerABot();
    
    UFUNCTION(BlueprintCallable)
    void Highlight();
    
    UFUNCTION(BlueprintCallable)
    void Focus();
    
};

