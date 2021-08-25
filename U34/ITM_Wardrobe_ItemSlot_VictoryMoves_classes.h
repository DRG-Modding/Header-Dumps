// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C
// Size: 0x350 (Inherited: 0x329)
struct UITM_Wardrobe_ItemSlot_VictoryMoves_C : UITM_Wardrobe_ItemSlot_Base_C {
	char UnknownData_329[0x7]; // 0x329(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct TArray<struct UVictoryPose*> VictoryPoses; // 0x338(0x10)
	struct UWidget* SelectedWidget; // 0x348(0x08)

	void ReceiveEquipItem(int32_t InIndex, bool OutSuccess); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveEquipItem
	void PreviewItem(struct UVictoryPose* Item, bool Show, bool OutSuccess); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.PreviewItem
	void ReceivePreviewItem(int32_t Index, bool Show, bool OutSuccess); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceivePreviewItem
	void ReceiveItemNotificationData(int32_t Index, struct TArray<struct UObject*> Array); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveItemNotificationData
	void ReceiveInitialize(int32_t AvailableItems); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveInitialize
	void ReceiveGetSelectedIndex(int32_t OutIndex); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGetSelectedIndex
	void UpdateOrCreateItemWidget(struct UVictoryPose* InVictoryMove, struct UWidget* InReuseWidget, bool InShowToolTip, struct UWidget* OutWidget); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.UpdateOrCreateItemWidget
	void ReceiveGenerateItems(struct TArray<struct UWidget*> OutItemWidgets); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGenerateItems
	void UpdateEquipped(); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.UpdateEquipped
	void ReceivePreConstruct(); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceivePreConstruct
	void SetHovered(bool InSlotHovered); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.SetHovered
	void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves(int32_t EntryPoint); // Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves
};

