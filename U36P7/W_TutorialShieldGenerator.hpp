#ifndef UE4SS_SDK_W_TutorialShieldGenerator_HPP
#define UE4SS_SDK_W_TutorialShieldGenerator_HPP

class UW_TutorialShieldGenerator_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    class AWPN_ShieldRegeneratorItem_C* ShieldItem;

    void OnShown();
    void UpdateTaskText();
    void Shield Used(int32 Amount);
    void ExecuteUbergraph_W_TutorialShieldGenerator(int32 EntryPoint);
};

#endif
