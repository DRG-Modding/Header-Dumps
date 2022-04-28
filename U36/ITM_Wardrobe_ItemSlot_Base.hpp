#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSlot_Base_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSlot_Base_HPP

class UITM_Wardrobe_ItemSlot_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimShuffle;
    class UWidgetAnimation* IntroRight;
    class UWidgetAnimation* IntroLeft;
    class UWidgetAnimation* AnimHovered;
    class UImage* IconImage;
    class USizeBox* IconSizer;
    class UITM_ItemUnlockedIcon_C* Notification_NewItemAny;
    class UBorder* OuterBorder;
    class UButton* ShuffleButton;
    class UButton* SlotButton;
    class UScaleBox* SlotContentBox;
    class USizeBox* SlotSizer;
    class UBasic_Label_C* TextHeader;
    class UOverlay* TextOverlay;
    class UBasic_Label_C* TextSubheader;
    class UUI_RandomizeIcon_C* UI_RandomizeIcon;
    class UTexture2D* TypeIcon;
    int32 SlotSize;
    class UITM_Wardrobe_ItemSelector_C* Selector;
    class UPlayerCharacterID* characterID;
    TArray<class UWidget*> ItemWidgets;
    TArray<int32> NewItemIndices;
    TArray<class UITM_Wardrobe_ItemSlot_Base_C*> RefreshSlotsOnChange;
    bool SlotHovered;
    bool SlotSelected;
    bool TextToLeft;
    bool PreviewingItem;
    bool IsDesignTime;
    FITM_Wardrobe_ItemSlot_Base_COnEquippedChanged OnEquippedChanged;
    void OnEquippedChanged();
    class UDialogDataAsset* ShoutOnEquipped;
    bool CanShuffle;

    void ReceiveGetNumberOfItems(int32& Num);
    void ReceiveItemDLC(int32 Index, class UDLCBase*& FromDLC);
    void EquipRandomItem();
    void UpdateShuffleButton();
    void GetTextToLeft(bool& TextToLeft);
    void SetHovered(bool InSlotHovered);
    void ReceivePreviewItem(int32 Index, bool Show, bool& OutSuccess);
    void SetRefreshSlotsOnChange(TArray<class UITM_Wardrobe_ItemSlot_Base_C*>& InOtherSlots);
    void ReceiveItemNotificationData(int32 Index, TArray<class UObject*>& Array);
    void ReceiveInitialize(int32& AvailableItems);
    void SelectorItemUnhovered(int32 Index);
    void SelectorItemHovered(int32 Index);
    void ReceiveGetSelectedIndex(int32& OutIndex);
    void SetItemName(FText InName);
    void Refresh();
    void SelectorItemClicked(int32 Index, bool& OutCloseSelector);
    void ReceivePreConstruct();
    void GetItemWidgets(TArray<class UWidget*>& ItemWidgets, TArray<int32>& NewItemIndices, int32& OutSelectedIndex);
    void ReceiveReleaseResource(class UWidget* InWidget);
    void SetTextToLeft(bool Index);
    void Initialize(class UPlayerCharacterID* InCharacterID);
    void SetTypeIcon(class UTexture2D* Texture);
    void SetSlotName(const FText Title);
    void SetSlotSize(int32 InSize);
    void SetSelected(bool InSelected);
    void ReleaseResources();
    void ReceiveEquipItem(int32 InIndex, bool& OutSuccess);
    void ReceiveGenerateItems(TArray<class UWidget*>& OutItemWidgets);
    void SetContentAsWidgetClass(TSoftClassPtr<UUserWidget> InWidget, class UUserWidget*& OutWidget);
    void SetContentAsTexture(class UTexture2D* Texture);
    void SetContentAsWidget(class UWidget* InWidget);
    void UpdateSelectionBorder();
    void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void RefreshNextFrame();
    void PlayIntroAnim(bool IsLeftSide, float Duration);
    void PreConstruct(bool IsDesignTime);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Base(int32 EntryPoint);
    void OnEquippedChanged__DelegateSignature();
};

#endif
