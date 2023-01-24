#ifndef UE4SS_SDK_Tutorial_Hint_BoscoAbility_HPP
#define UE4SS_SDK_Tutorial_Hint_BoscoAbility_HPP

class UTutorial_Hint_BoscoAbility_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    float AfterUseDelay;

    void ReceiveOnHidden();
    void ReceiveOnInitialized();
    void Mark Ready If(bool Condition);
    void OnBoscoChanged(class ABosco* Bosco);
    void OnLaserPointerEvent(const FLaserPointerTarget& HitInfo);
    void ExecuteUbergraph_Tutorial_Hint_BoscoAbility(int32 EntryPoint);
};

#endif
