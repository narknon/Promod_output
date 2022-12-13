#pragma once
#include "CoreMinimal.h"
#include "EconomyReportItemResult.h"
#include "EconomyUpdateInventoryPropertiesItemsResult.h"
#include "EconomyUpdateBundleResult.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EconomyUpdateDraftItemResult.h"
#include "EconomySearchForItemsContainingItemResult.h"
#include "EconomyUpdateSubscriptionResult.h"
#include "EconomySearchBundlesResult.h"
#include "EconomyUpdateStoreResult.h"
#include "EconomyCatalogSearchResult.h"
#include "EconomyGetReviewsResult.h"
#include "EconomyUpdateRecipeResult.h"
#include "EconomyCreateStoreResult.h"
#include "EconomyGetDraftItemsResult.h"
#include "EconomyPurchaseItemResult.h"
#include "EconomyUpdateCurrencyResult.h"
#include "EconomyGetDraftItemResult.h"
#include "EconomyUpdateCatalogConfigResult.h"
#include "EconomyGetCatalogConfigResult.h"
#include "EconomyTakedownReviewsResult.h"
#include "EconomySubtractVirtualCurrenciesResult.h"
#include "EconomySetVirtualCurrenciesResult.h"
#include "EconomyDeleteSubscriptionResult.h"
#include "EconomyGetSubscriptionResult.h"
#include "EconomySetUgcItemModerationStateResult.h"
#include "EconomySetInventoryItemsResult.h"
#include "EconomySearchSubscriptionsResult.h"
#include "EconomySearchStoresResult.h"
#include "EconomySearchRecipesResult.h"
#include "EconomySearchInStoreResult.h"
#include "EconomyReviewSummaryResult.h"
#include "EconomyReportReviewResult.h"
#include "EconomyPublishStatusResult.h"
#include "EconomyCreateRecipeResult.h"
#include "EconomyGetCurrencyByIdResult.h"
#include "EconomyPublishItemResult.h"
#include "EconomyHelpfulnessVoteResult.h"
#include "EconomyGrantInventoryItemsResult.h"
#include "EconomyCreateOrUpdateReviewResult.h"
#include "EconomyGetVirtualCurrenciesResult.h"
#include "EconomyGetUgcItemModerationStateResult.h"
#include "EconomyDeleteStoreResult.h"
#include "EconomyGetStoreResult.h"
#include "EconomyCreateBundleResult.h"
#include "EconomyDeleteItemResult.h"
#include "EconomyGetRecipeResult.h"
#include "EconomyGetPublishedItemResult.h"
#include "EconomyGetMyReviewResult.h"
#include "EconomyGetInventoryItemsResult.h"
#include "EconomyGetBundleResult.h"
#include "EconomyDeleteRecipeResult.h"
#include "EconomyDeleteBundleResult.h"
#include "EconomyCreateUploadUrlsResult.h"
#include "EconomyCreateSubscriptionResult.h"
#include "EconomyCreateDraftItemResult.h"
#include "EconomyCreateCurrencyResult.h"
#include "EconomyCraftRecipeResult.h"
#include "EconomyConsumeInventoryItemsResult.h"
#include "EconomyAddVirtualCurrenciesResult.h"
#include "PlayFabEconomyModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabEconomyModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabEconomyModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateSubscriptionResult decodeUpdateSubscriptionResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateStoreResult decodeUpdateStoreResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateRecipeResult decodeUpdateRecipeResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateInventoryPropertiesItemsResult decodeUpdateInventoryPropertiesItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateDraftItemResult decodeUpdateDraftItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateCurrencyResult decodeUpdateCurrencyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateCatalogConfigResult decodeUpdateCatalogConfigResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateBundleResult decodeUpdateBundleResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyTakedownReviewsResult decodeTakedownReviewsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySubtractVirtualCurrenciesResult decodeSubtractVirtualCurrenciesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySetVirtualCurrenciesResult decodeSetVirtualCurrenciesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySetUgcItemModerationStateResult decodeSetUgcItemModerationStateResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySetInventoryItemsResult decodeSetInventoryItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySearchSubscriptionsResult decodeSearchSubscriptionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySearchStoresResult decodeSearchStoresResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySearchRecipesResult decodeSearchRecipesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySearchInStoreResult decodeSearchInStoreResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySearchForItemsContainingItemResult decodeSearchForItemsContainingItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySearchBundlesResult decodeSearchBundlesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyReviewSummaryResult decodeReviewSummaryResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyReportReviewResult decodeReportReviewResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyReportItemResult decodeReportItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyPurchaseItemResult decodePurchaseItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyPublishStatusResult decodePublishStatusResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyPublishItemResult decodePublishItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyHelpfulnessVoteResult decodeHelpfulnessVoteResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGrantInventoryItemsResult decodeGrantInventoryItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetVirtualCurrenciesResult decodeGetVirtualCurrenciesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetUgcItemModerationStateResult decodeGetUgcItemModerationStateResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetSubscriptionResult decodeGetSubscriptionResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetStoreResult decodeGetStoreResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetReviewsResult decodeGetReviewsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetRecipeResult decodeGetRecipeResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetPublishedItemResult decodeGetPublishedItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetMyReviewResult decodeGetMyReviewResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetInventoryItemsResult decodeGetInventoryItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetDraftItemsResult decodeGetDraftItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetDraftItemResult decodeGetDraftItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetCurrencyByIdResult decodeGetCurrencyByIdResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetCatalogConfigResult decodeGetCatalogConfigResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetBundleResult decodeGetBundleResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyDeleteSubscriptionResult decodeDeleteSubscriptionResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyDeleteStoreResult decodeDeleteStoreResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyDeleteRecipeResult decodeDeleteRecipeResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyDeleteItemResult decodeDeleteItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyDeleteBundleResult decodeDeleteBundleResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateUploadUrlsResult decodeCreateUploadUrlsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateSubscriptionResult decodeCreateSubscriptionResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateStoreResult decodeCreateStoreResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateRecipeResult decodeCreateRecipeResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateOrUpdateReviewResult decodeCreateOrUpdateReviewResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateDraftItemResult decodeCreateDraftItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateCurrencyResult decodeCreateCurrencyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateBundleResult decodeCreateBundleResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCraftRecipeResult decodeCraftRecipeResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyConsumeInventoryItemsResult decodeConsumeInventoryItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCatalogSearchResult decodeCatalogSearchResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyAddVirtualCurrenciesResult decodeAddVirtualCurrenciesResultResponse(UPlayFabJsonObject* response);
    
};

