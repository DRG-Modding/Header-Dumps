#ifndef UE4SS_SDK_BP_BossFight_Heartstone_HPP
#define UE4SS_SDK_BP_BossFight_Heartstone_HPP

class UBP_BossFight_Heartstone_C : public UObject
{
    class AEscortDestination* HearstoneRef;

    class AActor* GetBossActor();
    TSubclassOf<class UBossFightWidget> GetWidgetClass();
    bool IsStillValid();
};

#endif
