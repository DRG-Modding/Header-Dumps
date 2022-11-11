#ifndef UE4SS_SDK_AnalyticsBlueprintLibrary_HPP
#define UE4SS_SDK_AnalyticsBlueprintLibrary_HPP

struct FAnalyticsEventAttr
{
    FString Name;
    FString Value;

};

class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool StartSessionWithAttributes(const TArray<FAnalyticsEventAttr>& Attributes);
    bool StartSession();
    void SetUserId(FString UserId);
    void SetSessionId(FString sessionId);
    void SetLocation(FString Location);
    void SetGender(FString Gender);
    void SetBuildInfo(FString BuildInfo);
    void SetAge(int32 Age);
    void RecordSimpleItemPurchaseWithAttributes(FString ItemID, int32 ItemQuantity, const TArray<FAnalyticsEventAttr>& Attributes);
    void RecordSimpleItemPurchase(FString ItemID, int32 ItemQuantity);
    void RecordSimpleCurrencyPurchaseWithAttributes(FString GameCurrencyType, int32 GameCurrencyAmount, const TArray<FAnalyticsEventAttr>& Attributes);
    void RecordSimpleCurrencyPurchase(FString GameCurrencyType, int32 GameCurrencyAmount);
    void RecordProgressWithFullHierarchyAndAttributes(FString ProgressType, const TArray<FString>& ProgressNames, const TArray<FAnalyticsEventAttr>& Attributes);
    void RecordProgressWithAttributes(FString ProgressType, FString ProgressName, const TArray<FAnalyticsEventAttr>& Attributes);
    void RecordProgress(FString ProgressType, FString ProgressName);
    void RecordItemPurchase(FString ItemID, FString Currency, int32 PerItemCost, int32 ItemQuantity);
    void RecordEventWithAttributes(FString EventName, const TArray<FAnalyticsEventAttr>& Attributes);
    void RecordEventWithAttribute(FString EventName, FString AttributeName, FString AttributeValue);
    void RecordEvent(FString EventName);
    void RecordErrorWithAttributes(FString Error, const TArray<FAnalyticsEventAttr>& Attributes);
    void RecordError(FString Error);
    void RecordCurrencyPurchase(FString GameCurrencyType, int32 GameCurrencyAmount, FString RealCurrencyType, float RealMoneyCost, FString PaymentProvider);
    void RecordCurrencyGivenWithAttributes(FString GameCurrencyType, int32 GameCurrencyAmount, const TArray<FAnalyticsEventAttr>& Attributes);
    void RecordCurrencyGiven(FString GameCurrencyType, int32 GameCurrencyAmount);
    FAnalyticsEventAttr MakeEventAttribute(FString AttributeName, FString AttributeValue);
    FString GetUserId();
    FString GetSessionId();
    void FlushEvents();
    void EndSession();
};

#endif
