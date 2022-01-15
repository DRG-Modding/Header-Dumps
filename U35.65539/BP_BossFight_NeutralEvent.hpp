#ifndef UE4SS_SDK_BP_BossFight_NeutralEvent_HPP
#define UE4SS_SDK_BP_BossFight_NeutralEvent_HPP

class UBP_BossFight_NeutralEvent_C : UObject
{
    FBossFight BossFight;

    AActor* GetBossActor();
    TSubclassOf<UBossFightWidget> GetWidgetClass();
    bool IsStillValid(bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
