#ifndef UE4SS_SDK_Cheat_VanityTab_HPP
#define UE4SS_SDK_Cheat_VanityTab_HPP

class UCheat_VanityTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheat_List_Bosco_C* Cheat_List_Bosco;
    class UCheat_List_Pickaxe_C* Cheat_List_Pickaxe;
    class UCheat_List_VictoryMoves_C* Cheat_List_VictoryMoves;
    class UScrollBox* Content_ScrollBox;
    class UBasic_ButtonScalable2_C* Reload_Button;
    class UCheat_List_Vanity_C* Vanity_Armor;
    class UCheat_List_Vanity_C* Vanity_Hair;

    void Refresh();
    void BndEvt__Reload_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnListChanged();
    void Construct();
    void ExecuteUbergraph_Cheat_VanityTab(int32 EntryPoint);
};

#endif
