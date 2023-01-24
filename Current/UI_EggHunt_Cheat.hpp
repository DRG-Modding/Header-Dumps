#ifndef UE4SS_SDK_UI_EggHunt_Cheat_HPP
#define UE4SS_SDK_UI_EggHunt_Cheat_HPP

class UUI_EggHunt_Cheat_C : public UUI_MissionCheat_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* Left;
    TArray<class ABP_AlienEgg_C*> Eggs;
    TArray<class UCheatMenu_BasicButtonWText_C*> EggButtons;

    void Construct();
    void CustomEvent_1(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_UI_EggHunt_Cheat(int32 EntryPoint);
};

#endif
