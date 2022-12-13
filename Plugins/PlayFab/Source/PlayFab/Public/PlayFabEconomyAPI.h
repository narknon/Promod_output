#pragma once
#include "CoreMinimal.h"
#include "EconomyGetReviewsResult.h"
#include "EconomyCatalogSearchResult.h"
#include "EconomyUpdateRecipeResult.h"
#include "EconomyDeleteItemRequest.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EconomyUpdateDraftItemResult.h"
#include "EconomySearchForItemsContainingItemResult.h"
#include "EconomyUpdateSubscriptionResult.h"
#include "EconomyCreateStoreResult.h"
#include "EconomyGetDraftItemsResult.h"
#include "EconomyPurchaseItemResult.h"
#include "EconomyUpdateCurrencyResult.h"
#include "EconomyGetReviewsRequest.h"
#include "EconomyGetMyReviewResult.h"
#include "EconomySearchBundlesResult.h"
#include "EconomyUpdateStoreResult.h"
#include "EconomyReportItemResult.h"
#include "EconomyUpdateInventoryPropertiesItemsResult.h"
#include "EconomyUpdateCatalogConfigResult.h"
#include "EconomyGetDraftItemResult.h"
#include "EconomyUpdateBundleResult.h"
#include "EconomyGetCatalogConfigResult.h"
#include "EconomyTakedownReviewsResult.h"
#include "EconomySubtractVirtualCurrenciesResult.h"
#include "EconomyHelpfulnessVoteResult.h"
#include "EconomySetVirtualCurrenciesResult.h"
#include "EconomyDeleteSubscriptionResult.h"
#include "EconomyGetSubscriptionResult.h"
#include "EconomySetUgcItemModerationStateResult.h"
#include "EconomySetInventoryItemsResult.h"
#include "EconomySearchSubscriptionsResult.h"
#include "EconomySearchStoresResult.h"
#include "EconomySearchRecipesResult.h"
#include "EconomySearchInStoreResult.h"
#include "EconomyReportReviewResult.h"
#include "EconomyCreateRecipeResult.h"
#include "EconomyGetCurrencyByIdResult.h"
#include "EconomyGetBundleByMarketplaceOfferIdRequest.h"
#include "EconomyPublishItemResult.h"
#include "EconomyGrantInventoryItemsResult.h"
#include "EconomySearchRecipesRequest.h"
#include "EconomyCreateOrUpdateReviewResult.h"
#include "EconomyGetVirtualCurrenciesResult.h"
#include "EconomyPublishStatusResult.h"
#include "EconomyGetUgcItemModerationStateResult.h"
#include "EconomyDeleteStoreResult.h"
#include "EconomyGetStoreResult.h"
#include "EconomyCreateBundleResult.h"
#include "EconomyDeleteItemResult.h"
#include "EconomyUpdateDraftItemRequest.h"
#include "EconomyGetRecipeResult.h"
#include "EconomyGetPublishedItemResult.h"
#include "EconomyReviewSummaryResult.h"
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
#include "PlayFabError.h"
#include "EconomyAddVirtualCurrenciesResult.h"
#include "EconomyGetCatalogConfigRequest.h"
#include "OnPlayFabEconomyRequestCompletedDelegate.h"
#include "EconomySearchSubscriptionsRequest.h"
#include "EconomyUpdateSubscriptionRequest.h"
#include "EconomyUpdateStoreRequest.h"
#include "EconomyUpdateRecipeRequest.h"
#include "EconomyUpdateInventoryItemsPropertiesRequest.h"
#include "EconomyUpdateCurrencyRequest.h"
#include "EconomyUpdateCatalogConfigRequest.h"
#include "EconomyUpdateBundleRequest.h"
#include "EconomyTakedownReviewsRequest.h"
#include "EconomySubtractVirtualCurrenciesRequest.h"
#include "EconomyGetStoreByIdRequest.h"
#include "EconomyHelpfulnessVoteRequest.h"
#include "EconomySetVirtualCurrenciesRequest.h"
#include "EconomySetUgcItemModerationStateRequest.h"
#include "EconomyCraftRecipeByFriendlyIdRequest.h"
#include "EconomySetInventoryItemsRequest.h"
#include "EconomySearchStoresRequest.h"
#include "EconomyAddVirtualCurrenciesRequest.h"
#include "EconomySearchInStoreByIdRequest.h"
#include "EconomySearchInStoreByFriendlyIdRequest.h"
#include "EconomyDeleteBundleByFriendlyIdRequest.h"
#include "EconomySearchForItemsContainingItemByIdRequest.h"
#include "EconomySearchForItemsContainingItemByFriendlyIdRequest.h"
#include "EconomySearchBundlesRequest.h"
#include "EconomyCatalogSearchRequest.h"
#include "EconomyReportItemRequest.h"
#include "EconomyReportReviewRequest.h"
#include "EconomyPurchaseItemByIdRequest.h"
#include "EconomyPurchaseItemByFriendlyIdRequest.h"
#include "EconomyPublishItemRequest.h"
#include "PlayFabBaseModel.h"
#include "EconomyGetDraftItemsRequest.h"
#include "EconomyGrantInventoryItemsRequest.h"
#include "EconomyGetVirtualCurrenciesRequest.h"
#include "EconomyPublishStatusRequest.h"
#include "EconomyGetUgcItemModerationStateRequest.h"
#include "EconomyGetSubscriptionByMarketplaceOfferIdRequest.h"
#include "EconomyGetSubscriptionByIdRequest.h"
#include "EconomyGetSubscriptionByFriendlyIdRequest.h"
#include "EconomyGetStoreByFriendlyIdRequest.h"
#include "EconomyGetRecipeByMarketplaceOfferIdRequest.h"
#include "EconomyGetRecipeByIdRequest.h"
#include "EconomyGetRecipeByFriendlyIdRequest.h"
#include "EconomyGetPublishedItemRequest.h"
#include "EconomyReviewSummaryRequest.h"
#include "EconomyGetMyReviewRequest.h"
#include "EconomyGetInventoryItemsRequest.h"
#include "EconomyGetDraftItemRequest.h"
#include "EconomyGetCurrencyByIdRequest.h"
#include "EconomyGetBundleByIdRequest.h"
#include "EconomyGetBundleByFriendlyIdRequest.h"
#include "EconomyDeleteSubscriptionByIdRequest.h"
#include "EconomyDeleteSubscriptionByFriendlyIdRequest.h"
#include "EconomyDeleteStoreByIdRequest.h"
#include "EconomyDeleteStoreByFriendlyIdRequest.h"
#include "EconomyDeleteRecipeByIdRequest.h"
#include "EconomyDeleteRecipeByFriendlyIdRequest.h"
#include "EconomyDeleteBundleByIdRequest.h"
#include "EconomyCreateUploadUrlsRequest.h"
#include "EconomyCreateSubscriptionRequest.h"
#include "EconomyCreateStoreRequest.h"
#include "EconomyCreateRecipeRequest.h"
#include "EconomyCreateOrUpdateReviewRequest.h"
#include "EconomyCreateDraftItemRequest.h"
#include "EconomyCreateCurrencyRequest.h"
#include "EconomyCreateBundleRequest.h"
#include "EconomyCraftRecipeByIdRequest.h"
#include "EconomyConsumeInventoryItemsRequest.h"
#include "PlayFabEconomyAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabJsonObject;
class UPlayFabEconomyAPI;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabEconomyAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateSubscription, FEconomyUpdateSubscriptionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateStore, FEconomyUpdateStoreResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateRecipe, FEconomyUpdateRecipeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateInventoryItemsProperties, FEconomyUpdateInventoryPropertiesItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateDraftUgcItem, FEconomyUpdateDraftItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateDraftItem, FEconomyUpdateDraftItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCurrency, FEconomyUpdateCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCatalogConfig, FEconomyUpdateCatalogConfigResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateBundle, FEconomyUpdateBundleResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessTakedownReviews, FEconomyTakedownReviewsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubtractVirtualCurrencies, FEconomySubtractVirtualCurrenciesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubmitHelpfulnessVote, FEconomyHelpfulnessVoteResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetVirtualCurrencies, FEconomySetVirtualCurrenciesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetUgcItemModerationState, FEconomySetUgcItemModerationStateResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetInventoryItems, FEconomySetInventoryItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSearchSubscriptions, FEconomySearchSubscriptionsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSearchStores, FEconomySearchStoresResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSearchRecipes, FEconomySearchRecipesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSearchInStoreById, FEconomySearchInStoreResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSearchInStoreByFriendlyId, FEconomySearchInStoreResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSearchForItemsContainingItemById, FEconomySearchForItemsContainingItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSearchForItemsContainingItemByFriendlyId, FEconomySearchForItemsContainingItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSearchBundles, FEconomySearchBundlesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSearch, FEconomyCatalogSearchResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReportUgcItem, FEconomyReportItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReportReview, FEconomyReportReviewResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPurchaseItemById, FEconomyPurchaseItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPurchaseItemByFriendlyId, FEconomyPurchaseItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPublishUgcItem, FEconomyPublishItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPublishItem, FEconomyPublishItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantInventoryItems, FEconomyGrantInventoryItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetVirtualCurrencies, FEconomyGetVirtualCurrenciesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUgcPublishStatus, FEconomyPublishStatusResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUgcItemModerationState, FEconomyGetUgcItemModerationStateResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetSubscriptionByMarketplaceOfferId, FEconomyGetSubscriptionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetSubscriptionById, FEconomyGetSubscriptionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetSubscriptionByFriendlyId, FEconomyGetSubscriptionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetStoreById, FEconomyGetStoreResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetStoreByFriendlyId, FEconomyGetStoreResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetRecipeByMarketplaceOfferId, FEconomyGetRecipeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetRecipeById, FEconomyGetRecipeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetRecipeByFriendlyId, FEconomyGetRecipeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPublishStatus, FEconomyPublishStatusResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPublishedUgcItem, FEconomyGetPublishedItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPublishedItem, FEconomyGetPublishedItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetMyReview, FEconomyGetMyReviewResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItemReviewSummary, FEconomyReviewSummaryResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItemReviews, FEconomyGetReviewsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetInventoryItems, FEconomyGetInventoryItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetDraftUgcItems, FEconomyGetDraftItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetDraftUgcItem, FEconomyGetDraftItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetDraftItems, FEconomyGetDraftItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetDraftItem, FEconomyGetDraftItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCurrencyById, FEconomyGetCurrencyByIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCatalogConfig, FEconomyGetCatalogConfigResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetBundleByMarketplaceOfferId, FEconomyGetBundleResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetBundleById, FEconomyGetBundleResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetBundleByFriendlyId, FEconomyGetBundleResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteUgcItem, FEconomyDeleteItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteSubscriptionById, FEconomyDeleteSubscriptionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteSubscriptionByFriendlyId, FEconomyDeleteSubscriptionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteStoreById, FEconomyDeleteStoreResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteStoreByFriendlyId, FEconomyDeleteStoreResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteRecipeById, FEconomyDeleteRecipeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteRecipeByFriendlyId, FEconomyDeleteRecipeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteItem, FEconomyDeleteItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteBundleById, FEconomyDeleteBundleResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteBundleByFriendlyId, FEconomyDeleteBundleResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateUploadUrls, FEconomyCreateUploadUrlsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateUgcUploadUrls, FEconomyCreateUploadUrlsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateSubscription, FEconomyCreateSubscriptionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateStore, FEconomyCreateStoreResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateRecipe, FEconomyCreateRecipeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateOrUpdateReview, FEconomyCreateOrUpdateReviewResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateDraftUgcItem, FEconomyCreateDraftItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateDraftItem, FEconomyCreateDraftItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateCurrency, FEconomyCreateCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateBundle, FEconomyCreateBundleResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCraftRecipeById, FEconomyCraftRecipeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCraftRecipeByFriendlyId, FEconomyCraftRecipeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessConsumeInventoryItems, FEconomyConsumeInventoryItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddVirtualCurrencies, FEconomyAddVirtualCurrenciesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabEconomyRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabEconomyAPI();
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateSubscription(FEconomyUpdateSubscriptionRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateSubscription onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateStore(FEconomyUpdateStoreRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateStore onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateRecipe(FEconomyUpdateRecipeRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateRecipe onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateInventoryItemsProperties(FEconomyUpdateInventoryItemsPropertiesRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateInventoryItemsProperties onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateDraftUgcItem(FEconomyUpdateDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateDraftUgcItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateDraftItem(FEconomyUpdateDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateCurrency(FEconomyUpdateCurrencyRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateCurrency onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateCatalogConfig(FEconomyUpdateCatalogConfigRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateCatalogConfig onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateBundle(FEconomyUpdateBundleRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateBundle onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* TakedownReviews(FEconomyTakedownReviewsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessTakedownReviews onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SubtractVirtualCurrencies(FEconomySubtractVirtualCurrenciesRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSubtractVirtualCurrencies onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SubmitHelpfulnessVote(FEconomyHelpfulnessVoteRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSubmitHelpfulnessVote onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SetVirtualCurrencies(FEconomySetVirtualCurrenciesRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSetVirtualCurrencies onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SetUgcItemModerationState(FEconomySetUgcItemModerationStateRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSetUgcItemModerationState onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SetInventoryItems(FEconomySetInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSetInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SearchSubscriptions(FEconomySearchSubscriptionsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearchSubscriptions onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SearchStores(FEconomySearchStoresRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearchStores onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SearchRecipes(FEconomySearchRecipesRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearchRecipes onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SearchInStoreById(FEconomySearchInStoreByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearchInStoreById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SearchInStoreByFriendlyId(FEconomySearchInStoreByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearchInStoreByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SearchForItemsContainingItemById(FEconomySearchForItemsContainingItemByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearchForItemsContainingItemById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SearchForItemsContainingItemByFriendlyId(FEconomySearchForItemsContainingItemByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearchForItemsContainingItemByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SearchBundles(FEconomySearchBundlesRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearchBundles onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* Search(FEconomyCatalogSearchRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearch onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* ReportUgcItem(FEconomyReportItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessReportUgcItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* ReportReview(FEconomyReportReviewRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessReportReview onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* PurchaseItemById(FEconomyPurchaseItemByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessPurchaseItemById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* PurchaseItemByFriendlyId(FEconomyPurchaseItemByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessPurchaseItemByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* PublishUgcItem(FEconomyPublishItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessPublishUgcItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* PublishItem(FEconomyPublishItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessPublishItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateSubscription(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateStore(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateRecipe(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateInventoryItemsProperties(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateDraftUgcItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateDraftItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCatalogConfig(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateBundle(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperTakedownReviews(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSubtractVirtualCurrencies(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSubmitHelpfulnessVote(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetVirtualCurrencies(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetUgcItemModerationState(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetInventoryItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSearchSubscriptions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSearchStores(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSearchRecipes(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSearchInStoreById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSearchInStoreByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSearchForItemsContainingItemById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSearchForItemsContainingItemByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSearchBundles(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSearch(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReportUgcItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReportReview(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPurchaseItemById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPurchaseItemByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPublishUgcItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPublishItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGrantInventoryItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetVirtualCurrencies(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUgcPublishStatus(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUgcItemModerationState(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetSubscriptionByMarketplaceOfferId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetSubscriptionById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetSubscriptionByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetStoreById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetStoreByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetRecipeByMarketplaceOfferId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetRecipeById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetRecipeByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPublishStatus(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPublishedUgcItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPublishedItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetMyReview(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItemReviewSummary(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItemReviews(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetInventoryItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetDraftUgcItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetDraftUgcItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetDraftItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetDraftItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCurrencyById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCatalogConfig(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetBundleByMarketplaceOfferId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetBundleById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetBundleByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteUgcItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteSubscriptionById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteSubscriptionByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteStoreById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteStoreByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteRecipeById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteRecipeByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteBundleById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteBundleByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateUploadUrls(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateUgcUploadUrls(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateSubscription(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateStore(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateRecipe(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateOrUpdateReview(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateDraftUgcItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateDraftItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateBundle(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCraftRecipeById(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCraftRecipeByFriendlyId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperConsumeInventoryItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddVirtualCurrencies(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GrantInventoryItems(FEconomyGrantInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGrantInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetVirtualCurrencies(FEconomyGetVirtualCurrenciesRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetVirtualCurrencies onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetUgcPublishStatus(FEconomyPublishStatusRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetUgcPublishStatus onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetUgcItemModerationState(FEconomyGetUgcItemModerationStateRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetUgcItemModerationState onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetSubscriptionByMarketplaceOfferId(FEconomyGetSubscriptionByMarketplaceOfferIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetSubscriptionByMarketplaceOfferId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetSubscriptionById(FEconomyGetSubscriptionByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetSubscriptionById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetSubscriptionByFriendlyId(FEconomyGetSubscriptionByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetSubscriptionByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetStoreById(FEconomyGetStoreByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetStoreById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetStoreByFriendlyId(FEconomyGetStoreByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetStoreByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetRecipeByMarketplaceOfferId(FEconomyGetRecipeByMarketplaceOfferIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetRecipeByMarketplaceOfferId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetRecipeById(FEconomyGetRecipeByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetRecipeById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetRecipeByFriendlyId(FEconomyGetRecipeByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetRecipeByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetPublishStatus(FEconomyPublishStatusRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetPublishStatus onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetPublishedUgcItem(FEconomyGetPublishedItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetPublishedUgcItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetPublishedItem(FEconomyGetPublishedItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetPublishedItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetMyReview(FEconomyGetMyReviewRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetMyReview onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItemReviewSummary(FEconomyReviewSummaryRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemReviewSummary onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItemReviews(FEconomyGetReviewsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemReviews onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetInventoryItems(FEconomyGetInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetDraftUgcItems(FEconomyGetDraftItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetDraftUgcItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetDraftUgcItem(FEconomyGetDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetDraftUgcItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetDraftItems(FEconomyGetDraftItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetDraftItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetDraftItem(FEconomyGetDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetCurrencyById(FEconomyGetCurrencyByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetCurrencyById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetCatalogConfig(FEconomyGetCatalogConfigRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetCatalogConfig onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetBundleByMarketplaceOfferId(FEconomyGetBundleByMarketplaceOfferIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetBundleByMarketplaceOfferId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetBundleById(FEconomyGetBundleByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetBundleById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetBundleByFriendlyId(FEconomyGetBundleByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetBundleByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteUgcItem(FEconomyDeleteItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteUgcItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteSubscriptionById(FEconomyDeleteSubscriptionByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteSubscriptionById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteSubscriptionByFriendlyId(FEconomyDeleteSubscriptionByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteSubscriptionByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteStoreById(FEconomyDeleteStoreByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteStoreById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteStoreByFriendlyId(FEconomyDeleteStoreByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteStoreByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteRecipeById(FEconomyDeleteRecipeByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteRecipeById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteRecipeByFriendlyId(FEconomyDeleteRecipeByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteRecipeByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteItem(FEconomyDeleteItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteBundleById(FEconomyDeleteBundleByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteBundleById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteBundleByFriendlyId(FEconomyDeleteBundleByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteBundleByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateUploadUrls(FEconomyCreateUploadUrlsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateUploadUrls onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateUgcUploadUrls(FEconomyCreateUploadUrlsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateUgcUploadUrls onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateSubscription(FEconomyCreateSubscriptionRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateSubscription onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateStore(FEconomyCreateStoreRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateStore onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateRecipe(FEconomyCreateRecipeRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateRecipe onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateOrUpdateReview(FEconomyCreateOrUpdateReviewRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateOrUpdateReview onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateDraftUgcItem(FEconomyCreateDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateDraftUgcItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateDraftItem(FEconomyCreateDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateCurrency(FEconomyCreateCurrencyRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateCurrency onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateBundle(FEconomyCreateBundleRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateBundle onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CraftRecipeById(FEconomyCraftRecipeByIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCraftRecipeById onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CraftRecipeByFriendlyId(FEconomyCraftRecipeByFriendlyIdRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCraftRecipeByFriendlyId onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* ConsumeInventoryItems(FEconomyConsumeInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessConsumeInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* AddVirtualCurrencies(FEconomyAddVirtualCurrenciesRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessAddVirtualCurrencies onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

