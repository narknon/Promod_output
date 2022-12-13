#include "NUIBreadCrumb.h"

void UNUIBreadCrumb::SetName(const FString& NewName) {
}


bool UNUIBreadCrumb::IsAlreadyVisited() {
    return false;
}

FString UNUIBreadCrumb::GetName() {
    return TEXT("");
}


UNUIBreadCrumb::UNUIBreadCrumb() : UUserWidget(FObjectInitializer::Get()) {
}

