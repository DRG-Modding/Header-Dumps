#ifndef UE4SS_SDK_UI_Elimination_Cheat_HPP
#define UE4SS_SDK_UI_Elimination_Cheat_HPP

class UUI_Elimination_Cheat_C : public UUI_MissionCheat_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* Left;
    TArray<class UCheatMenu_BasicButtonWText_C*> EggButtons;
    TArray<class ABP_DreadnoughtEgg_C*> Eggs;

    void Construct();
    void CustomEvent_1(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_UI_Elimination_Cheat(int32 EntryPoint);
};

#endif
