#ifndef UE4SS_SDK_ITM_Overclocks_Equip_HPP
#define UE4SS_SDK_ITM_Overclocks_Equip_HPP

class UITM_Overclocks_Equip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimPopUpSelection;
    class UWidgetAnimation* AnimHoverButton;
    class UWidgetAnimation* AnimFadeIn;
    class UButton* BlockCursorInput;
    class UImage* ButtonFrame;
    class UTextBlock* DATA_Overclock_CategoryName;
    class UTextBlock* DATA_Overclock_Title;
    class UWidgetSwitcher* DetailsSwitcher;
    class UBorder* EquipBorder;
    class UButton* EquipButton;
    class UBorder* HeaderBorder;
    class UOverlay* HeaderOverlay;
    class USizeBox* HeaderSize;
    class UImage* ImgLocked;
    class UITM_Overclock_Details_C* ITM_Overclock_Details;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class UTextBlock* LabelLocked;
    class UVerticalBox* LockedNoOverclocks;
    class UVerticalBox* LockedRequirementBox;
    class UITM_ItemUnlockedIcon_C* Notification_NewOverclock;
    class USizeBox* OverclockSlotISizer;
    class UCanvasPanel* RootCanvas;
    class UWrapBox* SelectionBox;
    class UBackgroundBlur* SelectorBlur;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_361;
    class UVerticalBox* VerticalBox_Menu;
    FLinearColor TintClean;
    FLinearColor TintBalanced;
    FLinearColor TintUnstable;
    TSubclassOf<class APlayerCharacter> CharacterClass;
    TSubclassOf<class AActor> itemClass;
    class UUpgradableItemComponent* UpgradableComponent;
    bool SelectionOpen;
    bool MenuActive;
    bool Hovering;
    bool MenuLocked;
    TArray<class UItemUpgrade*> Overclocks;
    class UItemUpgrade* DisplayedOverclock;
    bool OverclockUnlocked;

    void TryToggleSelection();
    void OnRefreshItem(bool WasCreated, class UUserWidget* Widget, int32 ActiveIndex);
    void SetMenuLocked(bool InLocked, bool InRequirementMet, bool OverclockEquipped);
    void SetMenuActive(bool Inactive, bool& ActiveChanged);
    void ShowOverclock(class UItemUpgrade* Overclock);
    void SetSelectionVisible(bool InVisible);
    void OnItemUnhovered(class UITM_Overclocks_Equip_Item_C* Widget);
    void OnItemHovered(class UITM_Overclocks_Equip_Item_C* Widget);
    void OnItemClicked(class UITM_Overclocks_Equip_Item_C* Widget);
    void Refresh();
    void SetData(TSubclassOf<class APlayerCharacter> InCharacterClass, TSubclassOf<class AActor> InItemClass);
    void SetBackgroundTint(FLinearColor Tint);
    void OnItemUpgradeCrafted_Event(class UItemUpgrade* Upgrade);
    void OnPopupStarted();
    void OnPopUpFinished();
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void CloseMenuNicely();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_Overclocks_Equip(int32 EntryPoint);
};

#endif
