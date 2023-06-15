#ifndef UE4SS_SDK__MENU_Pickaxe_HPP
#define UE4SS_SDK__MENU_Pickaxe_HPP

class U_MENU_Pickaxe_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_Wardrobe_ClassSelector_C* ClassSelector;
    class UITM_Wardrobe_ItemSelector_C* ItemSelectorLeft;
    class UITM_Wardrobe_ItemSelector_C* ItemSelectorRight;
    class UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    class UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    class UITM_Pickaxe_Slot_C* ITM_Pickaxe_PaintJob;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRig;
    class UButton* ShuffleButton;
    class UVerticalBox* Slots_Left;
    class UVerticalBox* Slots_Right;
    class UUI_RandomizeLoadoutWithUndo_C* UI_RandomizeLoadoutWithUndo;
    class UPlayerCharacterID* PlayerCharacter;
    float FadeInAnimTime;
    bool PrevUseRandom;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void PlayIntroAnimations();
    void InitSlots();
    void GetPickaxeID(class UItemID*& Output);
    void ShowPickaxe();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetCharacter(class APlayerCharacter*& Character);
    void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(TSubclassOf<class APlayerCharacter> Character);
    void OnShown();
    void BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature();
    void ReceiveCloseCommand();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature();
    void Refresh();
    void SetCharacter(class UPlayerCharacterID* PlayerCharacter);
    void OnClosed();
    void OnEquippedChanged();
    void LoadoutRefreshed();
    void ExecuteUbergraph__MENU_Pickaxe(int32 EntryPoint);
};

#endif
