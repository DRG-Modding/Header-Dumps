#ifndef UE4SS_SDK_BP_BossFight_Heartstone_HPP
#define UE4SS_SDK_BP_BossFight_Heartstone_HPP

class UBP_BossFight_Heartstone_C : UObject
{
    AEscortDestination* HearstoneRef;

    AActor* GetBossActor();
    TSubclassOf<UBossFightWidget> GetWidgetClass();
    bool IsStillValid(bool CallFunc_IsValid_ReturnValue);
}

#endif
