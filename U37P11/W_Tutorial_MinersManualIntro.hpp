#ifndef UE4SS_SDK_W_Tutorial_MinersManualIntro_HPP
#define UE4SS_SDK_W_Tutorial_MinersManualIntro_HPP

class UW_Tutorial_MinersManualIntro_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    class ABP_TutorialTriggerManager_C* manager;

    void OnShown();
    void UpdateText();
    void MessageReceived(FName TriggerName);
    void ExecuteUbergraph_W_Tutorial_MinersManualIntro(int32 EntryPoint);
};

#endif
