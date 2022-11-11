#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSelector_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSelector_HPP

class UITM_Wardrobe_ItemSelector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimOpen;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class UUniformGridPanel* SelectorGrid;
    int32 MaxColumns;
    int32 MinimumRows;
    int32 CellSize;
    FMargin InnerPadding;
    bool LeftSide;
    bool DesignTime;
    bool SelectorOpen;
    FITM_Wardrobe_ItemSelector_COnItemClicked OnItemClicked;
    void OnItemClicked(int32 Index, class UWidget* Widget);
    class UITM_Wardrobe_ItemSlot_Base_C* ItemSlot;
    float AnimOpenProgress;
    FITM_Wardrobe_ItemSelector_COnSelectorOpenChanged OnSelectorOpenChanged;
    void OnSelectorOpenChanged(bool IsOpen);
    class UITM_Wardrobe_ItemSelector_C* OtherSelector;

    void ItemUnhovered(int32 Index, class UWidget* Widget);
    void ItemHovered(int32 Index, class UWidget* Widget);
    void SetAnimOpenProgress(float InProgress);
    void ItemClicked(int32 Index, class UWidget* Widget);
    void SetOpen(bool InOpen);
    void PadRowWithBlanks();
    void ShowSlot(class UITM_Wardrobe_ItemSlot_Base_C* InSlot);
    void ClearItems();
    void AddItem(class UWidget* InChildWidget, bool InSelected, bool IsNewItem, class UDLCBase* FromDLC, class UITM_Wardrobe_ItemSelector_Entry_C*& OutEntry, class UWidget*& OutItemWidget);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnimOpenStarted();
    void OnAnimOpenFinished();
    void OnOtherSelectorOpen(bool IsOpen);
    void ExecuteUbergraph_ITM_Wardrobe_ItemSelector(int32 EntryPoint);
    void OnSelectorOpenChanged__DelegateSignature(bool IsOpen);
    void OnItemClicked__DelegateSignature(int32 Index, class UWidget* Widget);
};

#endif
