#ifndef UE4SS_SDK_Menu_Loadout_Bosco_HPP
#define UE4SS_SDK_Menu_Loadout_Bosco_HPP

class UMENU_Loadout_Bosco_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* AllowBosco;
    class UMENU_UpgradeScreen_C* MENU_UpgradeScreen;
    int32 LoadAttemts;
    TSubclassOf<class APlayerCharacter> Character;

    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnShown();
    void OnClosed();
    void OneUpgradeInAllTiers(TSubclassOf<class AActor> Item);
    void OnCloseClicked_Event_0();
    void Construct();
    void ExecuteUbergraph_MENU_Loadout_Bosco(int32 EntryPoint);
};

#endif
