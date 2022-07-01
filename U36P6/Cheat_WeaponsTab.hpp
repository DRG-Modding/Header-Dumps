#ifndef UE4SS_SDK_Cheat_WeaponsTab_HPP
#define UE4SS_SDK_Cheat_WeaponsTab_HPP

class UCheat_WeaponsTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheat_List_Skins_C* Cheat_List_Frameworks;
    class UCheat_List_Overclocks_C* Cheat_List_Overclocks;
    class UCheat_List_Skins_C* Cheat_List_PaintJobs;
    class UScrollBox* Content_ScrollBox;
    class UBasic_ButtonScalable2_C* Reload_Button;

    void Refresh();
    void BndEvt__Reload_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnListChanged();
    void Construct();
    void ExecuteUbergraph_Cheat_WeaponsTab(int32 EntryPoint);
};

#endif
