// Class GoogleAnalytics.GoogleAnalyticsBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGoogleAnalyticsBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetTrackingId(struct FString TrackingId); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId
	void SetAnonymizeIP(bool Anonymize); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP
	void RecordGoogleUserTiming(struct FString TimingCategory, int32_t TimingValue, struct FString TimingName, struct TArray<struct FCustomDimension> CustomDimensions, struct TArray<struct FCustomMetric> CustomMetrics); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming
	void RecordGoogleSocialInteraction(struct FString SocialNetwork, struct FString SocialAction, struct FString SocialTarget, struct TArray<struct FCustomDimension> CustomDimensions, struct TArray<struct FCustomMetric> CustomMetrics); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction
	void RecordGoogleScreen(struct FString ScreenName, struct TArray<struct FCustomDimension> CustomDimensions, struct TArray<struct FCustomMetric> CustomMetrics); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen
	void RecordGoogleEvent(struct FString EventCategory, struct FString EventAction, struct FString EventLabel, int32_t EventValue, struct TArray<struct FCustomDimension> CustomDimensions, struct TArray<struct FCustomMetric> CustomMetrics); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent
	struct FString GetTrackingId(); // Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId
};

// Class GoogleAnalytics.GoogleAnalyticsSettings
// Size: 0x30 (Inherited: 0x28)
struct UGoogleAnalyticsSettings : UObject {
	bool bEnableIDFACollection; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

