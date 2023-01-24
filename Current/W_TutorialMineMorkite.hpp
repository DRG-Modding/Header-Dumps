#ifndef UE4SS_SDK_W_TutorialMineMorkite_HPP
#define UE4SS_SDK_W_TutorialMineMorkite_HPP

class UW_TutorialMineMorkite_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    class ABP_TutorialTriggerManager_C* manager;

    void OnShown();
    void UpdateText();
    void MessageReceived(FName TriggerName);
    void CustomEvent_0();
    void ExecuteUbergraph_W_TutorialMineMorkite(int32 EntryPoint);
};

#endif
