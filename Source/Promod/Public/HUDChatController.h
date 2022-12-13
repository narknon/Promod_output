#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EChatChannels.h"
#include "HUDChatController.generated.h"

class UHUDRichTextBlock;
class ABattalionPlayerControllerGMBase;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UHUDChatController : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatChannels CurrentChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDRichTextBlock* ChatLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDRichTextBlock* ChannelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GlobalChannelCol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TeamChannelCol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupChannelCol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DevMessageCol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MedalMessageCol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChallengeMessageCol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LineBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* OwnerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTyping;
    
    UHUDChatController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChatFocus(ABattalionPlayerControllerGMBase* PCOwner);
    
    UFUNCTION(BlueprintCallable)
    void LoadChatLog();
    
    UFUNCTION(BlueprintCallable)
    FString GetChannelString(EChatChannels Channel, bool IsDev);
    
    UFUNCTION(BlueprintCallable)
    void ChooseChannels(EChatChannels newChannel);
    
};

