// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C
// Size: 0x380 (Inherited: 0x329)
struct UITM_Wardrobe_ItemSlot_Vanity_C : UITM_Wardrobe_ItemSlot_Base_C {
	char UnknownData_329[0x7]; // 0x329(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	enum class EVanitySlot VanitySlot; // 0x338(0x01)
	char UnknownData_339[0x7]; // 0x339(0x07)
	struct UITM_GeneratedIcon_Item_C* SelectedIcon; // 0x340(0x08)
	struct TArray<struct UVanityItem*> vanityItems; // 0x348(0x10)
	struct UVanityItem* DefaultItem; // 0x358(0x08)
	struct UTexture2D* DefaultItemIcon; // 0x360(0x08)
	struct FText DefaultItemName; // 0x368(0x18)

	struct FText GetItemName(struct UVanityItem* InVanityItem); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.GetItemName
	void UpdateItemWidget(struct UITM_GeneratedIcon_Item_C* InWidget, struct UVanityItem* InVanityItem, bool In Show Tool Tip); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.UpdateItemWidget
	void ReceiveEquipItem(int32_t InIndex, bool OutSuccess); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveEquipItem
	void ReceivePreviewItem(int32_t Index, bool Show, bool OutSuccess); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceivePreviewItem
	void ReceiveItemNotificationData(int32_t Index, struct TArray<struct UObject*> Array); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveItemNotificationData
	void ReceiveInitialize(int32_t AvailableItems); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveInitialize
	void ReceiveGetSelectedIndex(int32_t OutIndex); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveGetSelectedIndex
	void CreateItemWidget(struct UVanityItem* InVanityItem, bool InBackgroundVisible, bool InShowToolTip, struct UITM_GeneratedIcon_Item_C* OutItemWidget); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.CreateItemWidget
	void SetSelectedItem(struct UVanityItem* Item, bool Equip); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.SetSelectedItem
	void ReceiveGenerateItems(struct TArray<struct UWidget*> OutItemWidgets); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveGenerateItems
	void ReceiveReleaseResource(struct UWidget* InWidget); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveReleaseResource
	void ReceivePreConstruct(); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceivePreConstruct
	void On Initialized(); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.On Initialized
	void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity(int32_t EntryPoint); // Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity
};

