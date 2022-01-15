#ifndef UE4SS_SDK_NetCore_HPP
#define UE4SS_SDK_NetCore_HPP

class UNetAnalyticsAggregatorConfig : UObject
{
    TArray<FNetAnalyticsDataConfig> NetAnalyticsData;
}

struct UNetAnalyticsDataConfig
{
    FName DataName;
    bool bEnabled;
}

#endif
