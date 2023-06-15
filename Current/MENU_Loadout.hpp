#ifndef UE4SS_SDK_MENU_Loadout_HPP
#define UE4SS_SDK_MENU_Loadout_HPP

class UMENU_Loadout_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    class UITM_CharacterSwitcherBar_C* ITM_Loadout_CharSelect;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_0;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_1;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_2;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_13;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_14;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_15;
    class UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_16;
    class UITM_Loadout_PerksEquip_C* ITM_Loadout_PerksEquip;
    class UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UUI_RandomizeLoadoutWithUndo_C* UI_RandomizeLoadoutWithUndo;
    class UVerticalBox* VerticalBox_Left;
    class UVerticalBox* VerticalBox_Right;
    FMENU_Loadout_CCharacterSelected CharacterSelected;
    void CharacterSelected();
    TArray<class UITM_Loadout_ItemWindow_C*> LoadoutItems;
    class UITM_Loadout_ItemWindow_C* HoveredItem;
    float FadeInAnimTime;

    void GetCharacter(class APlayerCharacter*& Character);
    void PlayIntroAnimations();
    void CheckForNotification();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void GetClassFromPlayerState(class UPlayerCharacterID*& SelectedCharacter);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnShown();
    void Refresh();
    void BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(TSubclassOf<class APlayerCharacter> Character);
    void Stop Ansel();
    void Start Ansel();
    void OnClosed();
    void Refresh Loadout Items();
    void Setup Loadout Items();
    void OnNewTopWindow();
    void ReceiveSelectCharacterCommand();
    void ReceiveSelectNextCommand();
    void ReceiveSelectPreviousCommand();
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature();
    void LoadoutRefreshed();
    void On Unhovered_Event(class UITM_Loadout_ItemWindow_C* Item);
    void On Hovered(class UITM_Loadout_ItemWindow_C* Item);
    void Open Item Window(class UITM_Loadout_ItemWindow_C* Item);
    void ExecuteUbergraph_MENU_Loadout(int32 EntryPoint);
    void CharacterSelected__DelegateSignature();
};

#endif
