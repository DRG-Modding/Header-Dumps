#ifndef UE4SS_SDK_GoogleAnalytics_HPP
#define UE4SS_SDK_GoogleAnalytics_HPP

class UGoogleAnalyticsBlueprintLibrary : UBlueprintFunctionLibrary
{

    void SetTrackingId(FString TrackingId);
    void SetAnonymizeIP(const bool Anonymize);
    void RecordGoogleUserTiming(FString TimingCategory, const int32 TimingValue, FString TimingName, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics);
    void RecordGoogleSocialInteraction(FString SocialNetwork, FString SocialAction, FString SocialTarget, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics);
    void RecordGoogleScreen(FString ScreenName, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics);
    void RecordGoogleEvent(FString EventCategory, FString EventAction, FString EventLabel, const int32 EventValue, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics);
    FString GetTrackingId();
}

class UGoogleAnalyticsSettings : UObject
{
    bool bEnableIDFACollection;
}

struct UCustomMetric
{
    int32 Index;
    float Value;
}

struct UCustomDimension
{
    int32 Index;
    FString Value;
}

#endif
