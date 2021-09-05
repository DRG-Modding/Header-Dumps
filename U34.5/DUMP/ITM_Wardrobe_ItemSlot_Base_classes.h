// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C
// Size: 0x329 (Inherited: 0x230)
struct UITM_Wardrobe_ItemSlot_Base_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimShuffle; // 0x238(0x08)
	UWidgetAnimation* IntroRight; // 0x240(0x08)
	UWidgetAnimation* IntroLeft; // 0x248(0x08)
	UWidgetAnimation* AnimHovered; // 0x250(0x08)
	UImage* IconImage; // 0x258(0x08)
	USizeBox* IconSizer; // 0x260(0x08)
	UITM_ItemUnlockedIcon_C* Notification_NewItemAny; // 0x268(0x08)
	UBorder* OuterBorder; // 0x270(0x08)
	UButton* ShuffleButton; // 0x278(0x08)
	UButton* SlotButton; // 0x280(0x08)
	UScaleBox* SlotContentBox; // 0x288(0x08)
	USizeBox* SlotSizer; // 0x290(0x08)
	UUI_GenericLabel_C* TextHeader; // 0x298(0x08)
	UOverlay* TextOverlay; // 0x2a0(0x08)
	UUI_GenericLabel_C* TextSubheader; // 0x2a8(0x08)
	UUI_RandomizeIcon_C* UI_RandomizeIcon; // 0x2b0(0x08)
	UTexture2D* TypeIcon; // 0x2b8(0x08)
	int32_t SlotSize; // 0x2c0(0x04)
	UITM_Wardrobe_ItemSelector_C* Selector; // 0x2c8(0x08)
	UPlayerCharacterID* characterID; // 0x2d0(0x08)
	TArray<UWidget*> ItemWidgets; // 0x2d8(0x10)
	TArray<int32_t> NewItemIndices; // 0x2e8(0x10)
	TArray<UITM_Wardrobe_ItemSlot_Base_C*> RefreshSlotsOnChange; // 0x2f8(0x10)
	bool SlotHovered; // 0x308(0x01)
	bool SlotSelected; // 0x309(0x01)
	bool TextToLeft; // 0x30a(0x01)
	bool PreviewingItem; // 0x30b(0x01)
	bool IsDesignTime; // 0x30c(0x01)
	FMulticastInlineDelegate OnEquippedChanged; // 0x310(0x10)
	UDialogDataAsset* ShoutOnEquipped; // 0x320(0x08)
	bool CanShuffle; // 0x328(0x01)

	void EquipRandomItem();
	void UpdateShuffleButton();
	void GetTextToLeft(bool TextToLeft);
	void SetHovered(bool InSlotHovered);
	void ReceivePreviewItem(int32_t Index, bool Show, bool OutSuccess);
	void SetRefreshSlotsOnChange(TArray<UITM_Wardrobe_ItemSlot_Base_C*> InOtherSlots);
	void ReceiveItemNotificationData(int32_t Index, TArray<UObject*> Array);
	void ReceiveInitialize(int32_t AvailableItems);
	void SelectorItemUnhovered(int32_t Index);
	void SelectorItemHovered(int32_t Index);
	void ReceiveGetSelectedIndex(int32_t OutIndex);
	void SetItemName(FText InName);
	void Refresh();
	void SelectorItemClicked(int32_t Index, bool OutCloseSelector);
	void ReceivePreConstruct();
	void GetItemWidgets(TArray<UWidget*> ItemWidgets, TArray<int32_t> NewItemIndices, int32_t OutSelectedIndex);
	void ReceiveReleaseResource(UWidget* InWidget);
	void SetTextToLeft(bool Index);
	void Initialize(UPlayerCharacterID* InCharacterID);
	void SetTypeIcon(UTexture2D* Texture);
	void SetSlotName(FText Title);
	void SetSlotSize(int32_t InSize);
	void SetSelected(bool InSelected);
	void ReleaseResources();
	void ReceiveEquipItem(int32_t InIndex, bool OutSuccess);
	void ReceiveGenerateItems(TArray<UWidget*> OutItemWidgets);
	void SetContentAsWidgetClass(TSoftClassPtr<UObject> InWidget, UUserWidget* OutWidget);
	void SetContentAsTexture(UTexture2D* Texture);
	void SetContentAsWidget(UWidget* InWidget);
	void UpdateSelectionBorder();
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void RefreshNextFrame();
	void PlayIntroAnim(bool IsLeftSide, float Duration);
	void PreConstruct(bool IsDesignTime);
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void OnMouseLeave(FPointerEvent MouseEvent);
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Base(int32_t EntryPoint);
	void OnEquippedChanged__DelegateSignature();
};

