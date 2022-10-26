#ifndef UE4SS_SDK_W_TutorialCombat_HPP
#define UE4SS_SDK_W_TutorialCombat_HPP

class UW_TutorialCombat_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    class ABP_TutorialTriggerManager_C* manager;

    void OnShown();
    void UpdateText();
    void MessageReceived(FName TriggerName);
    void ExecuteUbergraph_W_TutorialCombat(int32 EntryPoint);
};

#endif
