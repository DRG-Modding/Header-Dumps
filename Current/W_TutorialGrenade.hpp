#ifndef UE4SS_SDK_W_TutorialGrenade_HPP
#define UE4SS_SDK_W_TutorialGrenade_HPP

class UW_TutorialGrenade_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;

    void OnShown();
    void UpdateTaskText();
    void GrenadeThrown();
    void ExecuteUbergraph_W_TutorialGrenade(int32 EntryPoint);
};

#endif
