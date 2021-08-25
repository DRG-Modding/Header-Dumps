// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C
// Size: 0x329 (Inherited: 0x230)
struct UITM_Wardrobe_ItemSlot_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimShuffle; // 0x238(0x08)
	struct UWidgetAnimation* IntroRight; // 0x240(0x08)
	struct UWidgetAnimation* IntroLeft; // 0x248(0x08)
	struct UWidgetAnimation* AnimHovered; // 0x250(0x08)
	struct UImage* IconImage; // 0x258(0x08)
	struct USizeBox* IconSizer; // 0x260(0x08)
	struct UITM_ItemUnlockedIcon_C* Notification_NewItemAny; // 0x268(0x08)
	struct UBorder* OuterBorder; // 0x270(0x08)
	struct UButton* ShuffleButton; // 0x278(0x08)
	struct UButton* SlotButton; // 0x280(0x08)
	struct UScaleBox* SlotContentBox; // 0x288(0x08)
	struct USizeBox* SlotSizer; // 0x290(0x08)
	struct UUI_GenericLabel_C* TextHeader; // 0x298(0x08)
	struct UOverlay* TextOverlay; // 0x2a0(0x08)
	struct UUI_GenericLabel_C* TextSubheader; // 0x2a8(0x08)
	struct UUI_RandomizeIcon_C* UI_RandomizeIcon; // 0x2b0(0x08)
	struct UTexture2D* TypeIcon; // 0x2b8(0x08)
	int32_t SlotSize; // 0x2c0(0x04)
	char UnknownData_2C4[0x4]; // 0x2c4(0x04)
	struct UITM_Wardrobe_ItemSelector_C* Selector; // 0x2c8(0x08)
	struct UPlayerCharacterID* characterID; // 0x2d0(0x08)
	struct TArray<struct UWidget*> ItemWidgets; // 0x2d8(0x10)
	struct TArray<int32_t> NewItemIndices; // 0x2e8(0x10)
	struct TArray<struct UITM_Wardrobe_ItemSlot_Base_C*> RefreshSlotsOnChange; // 0x2f8(0x10)
	bool SlotHovered; // 0x308(0x01)
	bool SlotSelected; // 0x309(0x01)
	bool TextToLeft; // 0x30a(0x01)
	bool PreviewingItem; // 0x30b(0x01)
	bool IsDesignTime; // 0x30c(0x01)
	char UnknownData_30D[0x3]; // 0x30d(0x03)
	struct FMulticastInlineDelegate OnEquippedChanged; // 0x310(0x10)
	struct UDialogDataAsset* ShoutOnEquipped; // 0x320(0x08)
	bool CanShuffle; // 0x328(0x01)

	void EquipRandomItem(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.EquipRandomItem
	void UpdateShuffleButton(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.UpdateShuffleButton
	void GetTextToLeft(bool TextToLeft); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.GetTextToLeft
	void SetHovered(bool InSlotHovered); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetHovered
	void ReceivePreviewItem(int32_t Index, bool Show, bool OutSuccess); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceivePreviewItem
	void SetRefreshSlotsOnChange(struct TArray<struct UITM_Wardrobe_ItemSlot_Base_C*> InOtherSlots); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetRefreshSlotsOnChange
	void ReceiveItemNotificationData(int32_t Index, struct TArray<struct UObject*> Array); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveItemNotificationData
	void ReceiveInitialize(int32_t AvailableItems); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveInitialize
	void SelectorItemUnhovered(int32_t Index); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemUnhovered
	void SelectorItemHovered(int32_t Index); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemHovered
	void ReceiveGetSelectedIndex(int32_t OutIndex); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveGetSelectedIndex
	void SetItemName(struct FText InName); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetItemName
	void Refresh(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.Refresh
	void SelectorItemClicked(int32_t Index, bool OutCloseSelector); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemClicked
	void ReceivePreConstruct(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceivePreConstruct
	void GetItemWidgets(struct TArray<struct UWidget*> ItemWidgets, struct TArray<int32_t> NewItemIndices, int32_t OutSelectedIndex); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.GetItemWidgets
	void ReceiveReleaseResource(struct UWidget* InWidget); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveReleaseResource
	void SetTextToLeft(bool Index); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetTextToLeft
	void Initialize(struct UPlayerCharacterID* InCharacterID); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.Initialize
	void SetTypeIcon(struct UTexture2D* Texture); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetTypeIcon
	void SetSlotName(struct FText Title); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSlotName
	void SetSlotSize(int32_t InSize); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSlotSize
	void SetSelected(bool inSelected); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSelected
	void ReleaseResources(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReleaseResources
	void ReceiveEquipItem(int32_t InIndex, bool OutSuccess); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveEquipItem
	void ReceiveGenerateItems(struct TArray<struct UWidget*> OutItemWidgets); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveGenerateItems
	void SetContentAsWidgetClass(SoftClassProperty InWidget, struct UUserWidget* OutWidget); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsWidgetClass
	void SetContentAsTexture(struct UTexture2D* Texture); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsTexture
	void SetContentAsWidget(struct UWidget* InWidget); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsWidget
	void UpdateSelectionBorder(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.UpdateSelectionBorder
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void RefreshNextFrame(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.RefreshNextFrame
	void PlayIntroAnim(bool IsLeftSide, float Duration); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.PlayIntroAnim
	void PreConstruct(bool IsDesignTime); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.PreConstruct
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnMouseLeave
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Base(int32_t EntryPoint); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Base
	void OnEquippedChanged__DelegateSignature(); // Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnEquippedChanged__DelegateSignature
};

