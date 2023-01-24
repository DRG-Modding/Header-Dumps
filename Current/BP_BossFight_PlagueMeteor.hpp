#ifndef UE4SS_SDK_BP_BossFight_PlagueMeteor_HPP
#define UE4SS_SDK_BP_BossFight_PlagueMeteor_HPP

class UBP_BossFight_PlagueMeteor_C : public UObject
{
    class ABP_PlagueMeteor_C* MeteorRef;

    class AActor* GetBossActor();
    TSubclassOf<class UBossFightWidget> GetWidgetClass();
    bool IsStillValid();
};

#endif
