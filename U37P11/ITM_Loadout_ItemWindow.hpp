#ifndef UE4SS_SDK_ITM_Loadout_ItemWindow_HPP
#define UE4SS_SDK_ITM_Loadout_ItemWindow_HPP

class UITM_Loadout_ItemWindow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* IntroRight;
    class UWidgetAnimation* IntroLeft;
    class UWidgetAnimation* ClickAnim;
    class UWidgetAnimation* HoverAnim;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBorder* Brackets;
    class UButton* ButtonLeft;
    class UButton* ButtonRight;
    class UOverlay* ContentOverlay;
    class UTextBlock* DATA_ItemCount;
    class UTextBlock* DATA_ItemName2;
    class UImage* GearIcon_BG;
    class UImage* GearIcon_Outline;
    class UImage* HeaderGradient;
    class UITM_ItemUnlockedIcon_C* ItemNotification;
    class UITM_Loadout_UpgradeBar_C* ITM_Loadout_UpgradeBar_C_0;
    class UITM_MasteryBar_C* ITM_MasteryBar;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class UBorder* Main_BG;
    class UButton* MainButton;
    class UCanvasPanel* NavigationPanel;
    class UBorder* Upgrades_BG;
    FITM_Loadout_ItemWindow_COn Clicked On Clicked;
    void On Clicked(class UITM_Loadout_ItemWindow_C* Item);
    class UPlayerCharacterID* CharacterClass;
    EItemCategory Item Category;
    bool ItemHovered;
    class UItemID* itemClass;
    FITM_Loadout_ItemWindow_COn Hovered On Hovered;
    void On Hovered(class UITM_Loadout_ItemWindow_C* Item);
    FITM_Loadout_ItemWindow_COn Unhovered On Unhovered;
    void On Unhovered(class UITM_Loadout_ItemWindow_C* Item);
    TArray<class UItemID*> ItemsOwned;
    bool HideCounter;

    void SetHideCounter(bool HideCounter);
    void GetNextItem(int32 Direction, class UItemID*& NextItem);
    void GetOwnedItems(class UPlayerCharacterID* InCharacterClass, EItemCategory InCategory, TArray<class UItemID*>& Owned Items, bool& NewWeaponNotification);
    void GetSelectedItem(class UItemID*& itemClass, EItemCategory& Item Category);
    void SetCharacterClass(class UPlayerCharacterID* InCharacterClass);
    void SetHovered(bool InHovered);
    bool IsHovering();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SelectNext();
    void SelectPrevious();
    void Select Item(class UItemID* InItemClass);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature();
    void OnClickAnimFinished();
    void PlayIntroAnim(bool IsLeftSide, float Duration);
    void ExecuteUbergraph_ITM_Loadout_ItemWindow(int32 EntryPoint);
    void On Unhovered__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item);
    void On Hovered__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item);
    void On Clicked__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item);
};

#endif
