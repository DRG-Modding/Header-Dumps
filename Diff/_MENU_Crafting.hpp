#ifndef UE4SS_SDK__MENU_Crafting_HPP
#define UE4SS_SDK__MENU_Crafting_HPP

class U_MENU_Crafting_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ScrollBarBox_C* BasicScrollBarBox;
    class UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_C_0;
    class UBlurBackground_C* BlurBackground;
    class UITM_Wardrobe_ClassSelector_C* ClassSelector;
    class UTextBlock* DATA_CategoryName;
    class UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    class UITM_ItemCategories_C* ITM_ItemCategories;
    class UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    class UUI_Crafting_MasteryBar_C* MasteryBar;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UVerticalBox* ScrollHolder;
    EVanitySlot CurrentSlot;
    class UBTN_ItemCategory_C* ActiveButton;
    class UPlayerCharacterID* Character;

    void RefreshCanAfford();
    void SetPreviewItem(TScriptInterface<class ICraftable> Item, bool Show);
    void GetNextAvailableRank(TArray<class UVanityItem*>& In Vanity Items, int32& VisibleRank);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void PrevGroup();
    void NextGroup();
    void ClearItems();
    void ShowItems(EVanitySlot Slot);
    void Construct();
    void OnChanged(TSubclassOf<class APlayerCharacter> CharacterClass, int32 Level, float Progress);
    void PreviewItem(TScriptInterface<class ICraftable> Item);
    void HidePreview(TScriptInterface<class ICraftable> Target);
    void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(TSubclassOf<class APlayerCharacter> Character);
    void OnShown();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature();
    void Update();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature();
    void OnClosed();
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature();
    void BndEvt___MENU_Crafting_MasteryBar_K2Node_ComponentBoundEvent_4_OnMasteryAnimFinished__DelegateSignature();
    void ScheduleRefreshCanAfford();
    void ExecuteUbergraph__MENU_Crafting(int32 EntryPoint);
};

#endif
