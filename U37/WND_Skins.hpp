#ifndef UE4SS_SDK_WND_Skins_HPP
#define UE4SS_SDK_WND_Skins_HPP

class UWND_Skins_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ButtonHover;
    class UWidgetAnimation* WindowAppear;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UUI_FocusableCanvas_C* ItemsWindow;
    class UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    class UITM_SkinIcon_C* SelectedViewer;
    class UButton* SelectorButton;
    class UUniformGridPanel* SkinGrid;
    class UTextBlock* SkinLabel;
    class UItemID* ItemID;
    TArray<class UITM_SkinItem_C*> SkinWidgets;
    int32 Columns;
    bool MouseHovering;
    int32 MaxColumns;
    bool LeftToRight;
    int32 PreviewCount;
    FWND_Skins_CPingSkin PingSkin;
    void PingSkin(class UItemSkin* Skin);
    class UPlayerCharacterID* CharaterID;
    bool SkinHasNotification;
    EItemSkinType skinType;
    FWND_Skins_COnOpened OnOpened;
    void OnOpened();
    bool HighlightFirstItem;
    class UItemSkin* DefaultSkin;

    class UItemSkin* SelectSkinOrEquipped(class UItemSkin* InSkin);
    void RefreshLoadout();
    void ClearSkins();
    void OnUnlockedSkin(class UItemSkin* SkinItem);
    void RefreshSelectorButton();
    void RefreshWindowItems();
    void GetItemsWindow(class UWidget*& Widget);
    void UpdateBorder();
    void IsWindowVisible(bool& Visible);
    void PopulateSkinWindow(bool& isEmpty);
    void SetWindowVisible(bool IsVisible, bool& VisibilityChanged, bool& NewVisibility);
    void AddSkin(class UItemSkin* InSkin, TSubclassOf<class AActor> InItem, TSubclassOf<class APlayerCharacter> InPlayerCharacter, int32 InIndex, class UITM_SkinItem_C*& OutSkinWidget);
    void SetSkinData(class UItemID* itemClass, class UPlayerCharacterID* PlayerCharacterClass);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnSkinWidgetAdded(class UITM_SkinItem_C* SkinWidget);
    void OnSkinClicked(class UITM_SkinItem_C* Item);
    void BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void OnHoveringSkin(class UITM_SkinItem_C* SkinItem);
    void PreviewSkin(class UItemSkin* Skin);
    void OnUnhoveringSkin(class UITM_SkinItem_C* SkinItem);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature(class UWidget* Widget, bool IsHovered);
    void OnSkinChangedEvent_Event_0();
    void ExecuteUbergraph_WND_Skins(int32 EntryPoint);
    void OnOpened__DelegateSignature();
    void PingSkin__DelegateSignature(class UItemSkin* Skin);
};

#endif
