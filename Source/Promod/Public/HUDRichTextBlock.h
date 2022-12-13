#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "Fonts/SlateFontInfo.h"
#include "UObject/NoExportTypes.h"
#include "HUDRichTextBlock.generated.h"

UCLASS(Blueprintable)
class UHUDRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UHUDRichTextBlock();
};

