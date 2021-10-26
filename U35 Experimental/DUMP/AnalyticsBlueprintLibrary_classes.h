// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnalyticsBlueprintLibrary : UBlueprintFunctionLibrary {

	bool StartSessionWithAttributes(TArray<FAnalyticsEventAttr> Attributes);
	bool StartSession();
	void SetUserId(FString UserId);
	void SetSessionId(FString sessionId);
	void SetLocation(FString Location);
	void SetGender(FString Gender);
	void SetBuildInfo(FString BuildInfo);
	void SetAge(int32_t Age);
	void RecordSimpleItemPurchaseWithAttributes(FString ItemID, int32_t ItemQuantity, TArray<FAnalyticsEventAttr> Attributes);
	void RecordSimpleItemPurchase(FString ItemID, int32_t ItemQuantity);
	void RecordSimpleCurrencyPurchaseWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr> Attributes);
	void RecordSimpleCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount);
	void RecordProgressWithFullHierarchyAndAttributes(FString ProgressType, TArray<FString> ProgressNames, TArray<FAnalyticsEventAttr> Attributes);
	void RecordProgressWithAttributes(FString ProgressType, FString ProgressName, TArray<FAnalyticsEventAttr> Attributes);
	void RecordProgress(FString ProgressType, FString ProgressName);
	void RecordItemPurchase(FString ItemID, FString Currency, int32_t PerItemCost, int32_t ItemQuantity);
	void RecordEventWithAttributes(FString EventName, TArray<FAnalyticsEventAttr> Attributes);
	void RecordEventWithAttribute(FString EventName, FString AttributeName, FString AttributeValue);
	void RecordEvent(FString EventName);
	void RecordErrorWithAttributes(FString Error, TArray<FAnalyticsEventAttr> Attributes);
	void RecordError(FString Error);
	void RecordCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount, FString RealCurrencyType, float RealMoneyCost, FString PaymentProvider);
	void RecordCurrencyGivenWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr> Attributes);
	void RecordCurrencyGiven(FString GameCurrencyType, int32_t GameCurrencyAmount);
	FAnalyticsEventAttr MakeEventAttribute(FString AttributeName, FString AttributeValue);
	FString GetUserId();
	FString GetSessionId();
	void FlushEvents();
	void EndSession();
};

