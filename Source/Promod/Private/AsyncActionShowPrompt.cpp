#include "AsyncActionShowPrompt.h"

class UObject;
class UAsyncActionShowPrompt;

UAsyncActionShowPrompt* UAsyncActionShowPrompt::ShowPrompt(UObject* NewWorldContextObject, const FText TitleText, const FText MessageText, const FText AcceptText, const FText CancelText) {
    return NULL;
}

UAsyncActionShowPrompt::UAsyncActionShowPrompt() {
    this->WorldContextObject = NULL;
}

