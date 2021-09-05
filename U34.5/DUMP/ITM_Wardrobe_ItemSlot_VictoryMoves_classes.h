// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C
// Size: 0x350 (Inherited: 0x329)
struct UITM_Wardrobe_ItemSlot_VictoryMoves_C : UITM_Wardrobe_ItemSlot_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	TArray<UVictoryPose*> VictoryPoses; // 0x338(0x10)
	UWidget* SelectedWidget; // 0x348(0x08)

	void ReceiveEquipItem(int32_t InIndex, bool OutSuccess);
	void PreviewItem(UVictoryPose* Item, bool Show, bool OutSuccess);
	void ReceivePreviewItem(int32_t Index, bool Show, bool OutSuccess);
	void ReceiveItemNotificationData(int32_t Index, TArray<UObject*> Array);
	void ReceiveInitialize(int32_t AvailableItems);
	void ReceiveGetSelectedIndex(int32_t OutIndex);
	void UpdateOrCreateItemWidget(UVictoryPose* InVictoryMove, UWidget* InReuseWidget, bool InShowToolTip, UWidget* OutWidget);
	void ReceiveGenerateItems(TArray<UWidget*> OutItemWidgets);
	void UpdateEquipped();
	void ReceivePreConstruct();
	void SetHovered(bool InSlotHovered);
	void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves(int32_t EntryPoint);
};

