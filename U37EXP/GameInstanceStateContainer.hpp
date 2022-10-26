#ifndef UE4SS_SDK_GameInstanceStateContainer_HPP
#define UE4SS_SDK_GameInstanceStateContainer_HPP

class UGameInstanceStateContainer_C : public UGoogleAnalyticsWrapper
{
    TMap<class UClass*, class UObject*> State;

};

#endif
