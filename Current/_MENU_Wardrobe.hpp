#ifndef UE4SS_SDK__MENU_Wardrobe_HPP
#define UE4SS_SDK__MENU_Wardrobe_HPP

class U_MENU_Wardrobe_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_Wardrobe_ClassSelector_C* ClassSelector;
    class UITM_Wardrobe_ItemSelector_C* ItemSelector_Left;
    class UITM_Wardrobe_ItemSelector_C* ItemSelector_Right;
    class UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    class UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRig;
    class UButton* SleevelessButton_1;
    class UITM_Wardrobe_ItemSlot_ArmorVanity_C* Slot_Armor;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_ArmorColor;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Beard;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_BeardColor;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_EyeBrows;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Head;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Moustache;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_SideBurns;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_SkinColor;
    class UITM_Wardrobe_ItemSlot_VictoryMoves_C* Slot_VictoryMoves;
    class UVerticalBox* SlotsLeftBox;
    class UVerticalBox* SlotsRightBox;
    class UUI_RandomizeLoadoutWithUndo_C* UI_RandomizeLoadoutWithUndo;
    class UPlayerCharacterID* PlayerCharacter;
    TArray<class UITM_Wardrobe_ItemSlot_Base_C*> ItemSlots;
    float FadeInAnimTime;
    bool PrevUseRandom;

    void EquipRandomItems();
    void PlayIntroAnimations();
    void CheckArmorMasteryUnlocks();
    void InitSlotColumn(class UPanelWidget* InBox, class UITM_Wardrobe_ItemSelector_C* InSelector, bool InLeftSide);
    void RefreshSlots();
    void ReleaseRenderTargets();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetCharacter(bool IgnorePreviewCharacter, class APlayerCharacter*& Character);
    void BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature();
    void ReceiveCloseCommand();
    void PreConstruct(bool IsDesignTime);
    void OnShown();
    void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(TSubclassOf<class APlayerCharacter> Character);
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature();
    void Refresh();
    void SetCharacter(class UPlayerCharacterID* PlayerCharacter);
    void OnClosed();
    void Construct();
    void OnEquippedChanged_Event_0();
    void LoadoutRefreshed();
    void ExecuteUbergraph__MENU_Wardrobe(int32 EntryPoint);
};

#endif
