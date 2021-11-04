// Class GoogleAnalytics.GoogleAnalyticsBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGoogleAnalyticsBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetTrackingId(FString TrackingId);
	void SetAnonymizeIP(bool Anonymize);
	void RecordGoogleUserTiming(FString TimingCategory, int32_t TimingValue, FString TimingName, TArray<FCustomDimension> CustomDimensions, TArray<FCustomMetric> CustomMetrics);
	void RecordGoogleSocialInteraction(FString SocialNetwork, FString SocialAction, FString SocialTarget, TArray<FCustomDimension> CustomDimensions, TArray<FCustomMetric> CustomMetrics);
	void RecordGoogleScreen(FString ScreenName, TArray<FCustomDimension> CustomDimensions, TArray<FCustomMetric> CustomMetrics);
	void RecordGoogleEvent(FString EventCategory, FString EventAction, FString EventLabel, int32_t EventValue, TArray<FCustomDimension> CustomDimensions, TArray<FCustomMetric> CustomMetrics);
	FString GetTrackingId();
};

// Class GoogleAnalytics.GoogleAnalyticsSettings
// Size: 0x30 (Inherited: 0x28)
struct UGoogleAnalyticsSettings : UObject {
	bool bEnableIDFACollection; // 0x28(0x01)
};

