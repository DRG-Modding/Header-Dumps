#ifndef UE4SS_SDK_W_TutorialDigDirt_HPP
#define UE4SS_SDK_W_TutorialDigDirt_HPP

class UW_TutorialDigDirt_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    class ABP_TutorialTriggerManager_C* Manager;

    void OnShown();
    void UpdateText();
    void MessageReceived(FName TriggerName);
    void ExecuteUbergraph_W_TutorialDigDirt(int32 EntryPoint);
};

#endif
