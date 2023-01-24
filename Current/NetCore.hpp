#ifndef UE4SS_SDK_NetCore_HPP
#define UE4SS_SDK_NetCore_HPP

struct FNetAnalyticsDataConfig
{
    FName DataName;
    bool bEnabled;

};

class UNetAnalyticsAggregatorConfig : public UObject
{
    TArray<FNetAnalyticsDataConfig> NetAnalyticsData;

};

#endif
