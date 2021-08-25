// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnalyticsBlueprintLibrary : UBlueprintFunctionLibrary {

	bool StartSessionWithAttributes(struct TArray<struct FAnalyticsEventAttr> Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
	bool StartSession(); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
	void SetUserId(struct FString userId); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
	void SetSessionId(struct FString sessionId); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
	void SetLocation(struct FString Location); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
	void SetGender(struct FString Gender); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
	void SetBuildInfo(struct FString BuildInfo); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
	void SetAge(int32_t Age); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
	void RecordSimpleItemPurchaseWithAttributes(struct FString ItemID, int32_t ItemQuantity, struct TArray<struct FAnalyticsEventAttr> Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
	void RecordSimpleItemPurchase(struct FString ItemID, int32_t ItemQuantity); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
	void RecordSimpleCurrencyPurchaseWithAttributes(struct FString GameCurrencyType, int32_t GameCurrencyAmount, struct TArray<struct FAnalyticsEventAttr> Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
	void RecordSimpleCurrencyPurchase(struct FString GameCurrencyType, int32_t GameCurrencyAmount); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
	void RecordProgressWithFullHierarchyAndAttributes(struct FString ProgressType, struct TArray<struct FString> ProgressNames, struct TArray<struct FAnalyticsEventAttr> Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
	void RecordProgressWithAttributes(struct FString ProgressType, struct FString ProgressName, struct TArray<struct FAnalyticsEventAttr> Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
	void RecordProgress(struct FString ProgressType, struct FString ProgressName); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
	void RecordItemPurchase(struct FString ItemID, struct FString Currency, int32_t PerItemCost, int32_t ItemQuantity); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
	void RecordEventWithAttributes(struct FString EventName, struct TArray<struct FAnalyticsEventAttr> Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
	void RecordEventWithAttribute(struct FString EventName, struct FString AttributeName, struct FString AttributeValue); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
	void RecordEvent(struct FString EventName); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
	void RecordErrorWithAttributes(struct FString Error, struct TArray<struct FAnalyticsEventAttr> Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
	void RecordError(struct FString Error); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
	void RecordCurrencyPurchase(struct FString GameCurrencyType, int32_t GameCurrencyAmount, struct FString RealCurrencyType, float RealMoneyCost, struct FString PaymentProvider); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
	void RecordCurrencyGivenWithAttributes(struct FString GameCurrencyType, int32_t GameCurrencyAmount, struct TArray<struct FAnalyticsEventAttr> Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
	void RecordCurrencyGiven(struct FString GameCurrencyType, int32_t GameCurrencyAmount); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
	struct FAnalyticsEventAttr MakeEventAttribute(struct FString AttributeName, struct FString AttributeValue); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
	struct FString GetUserId(); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
	struct FString GetSessionId(); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
	void FlushEvents(); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
	void EndSession(); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
};

