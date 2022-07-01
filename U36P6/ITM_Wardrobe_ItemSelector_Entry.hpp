#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSelector_Entry_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSelector_Entry_HPP

class UITM_Wardrobe_ItemSelector_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BlankImage;
    class UBorder* Border_Inner;
    class UBorder* Border_Selection;
    class UOverlay* ChildOverlay;
    class UWidgetSwitcher* ContentSwitcher;
    class UUI_DLC_Indicator_C* DLC_Indicator;
    class UButton* EntryButton;
    class UITM_ItemUnlockedIcon_C* Notification_NewItem;
    int32 Index;
    FITM_Wardrobe_ItemSelector_Entry_COnEntryHovered OnEntryHovered;
    void OnEntryHovered(int32 Index, class UWidget* Widget);
    FITM_Wardrobe_ItemSelector_Entry_COnEntryUnhovered OnEntryUnhovered;
    void OnEntryUnhovered(int32 Index, class UWidget* Widget);
    FITM_Wardrobe_ItemSelector_Entry_COnEntryClicked OnEntryClicked;
    void OnEntryClicked(int32 Index, class UWidget* Widget);
    class UWidget* Widget;
    bool Hovered;
    TEnumAsByte<ENUM_MenuColors::Type> BorderColor;
    bool Selected;
    bool IsNewItem;
    class UDLCBase* FromDLC;

    void SetFromDLC(class UDLCBase* InDLC);
    void SetHovered(bool InHovered);
    void SetSelected(bool InSelected);
    void SetIsNewItem(bool IsNew);
    void UpdateBorder();
    void CreateChild(TSoftClassPtr<UUserWidget> InChildClass, class UWidget*& OutChild);
    void SetChild(class UWidget* InWidget);
    void BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry(int32 EntryPoint);
    void OnEntryClicked__DelegateSignature(int32 Index, class UWidget* Widget);
    void OnEntryUnhovered__DelegateSignature(int32 Index, class UWidget* Widget);
    void OnEntryHovered__DelegateSignature(int32 Index, class UWidget* Widget);
};

#endif
