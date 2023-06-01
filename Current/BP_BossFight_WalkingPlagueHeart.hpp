#ifndef UE4SS_SDK_BP_BossFight_WalkingPlagueHeart_HPP
#define UE4SS_SDK_BP_BossFight_WalkingPlagueHeart_HPP

class UBP_BossFight_WalkingPlagueHeart_C : public UObject
{
    class AENE_WalkingPlagueheart_C* walkingPlagueheartRef;

    class AActor* GetBossActor();
    TSubclassOf<class UBossFightWidget> GetWidgetClass();
    bool IsStillValid();
};

#endif
