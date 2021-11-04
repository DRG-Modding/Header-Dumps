// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C
// Size: 0x380 (Inherited: 0x329)
struct UITM_Wardrobe_ItemSlot_Vanity_C : UITM_Wardrobe_ItemSlot_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	enum class EVanitySlot VanitySlot; // 0x338(0x01)
	UITM_GeneratedIcon_Item_C* SelectedIcon; // 0x340(0x08)
	TArray<UVanityItem*> vanityItems; // 0x348(0x10)
	UVanityItem* DefaultItem; // 0x358(0x08)
	UTexture2D* DefaultItemIcon; // 0x360(0x08)
	FText DefaultItemName; // 0x368(0x18)

	void ReceiveItemDLC(int32_t Index, UDLCBase* FromDLC);
	FText GetItemName(UVanityItem* InVanityItem);
	void UpdateItemWidget(UITM_GeneratedIcon_Item_C* InWidget, UVanityItem* InVanityItem, bool In Show Tool Tip);
	void ReceiveEquipItem(int32_t InIndex, bool OutSuccess);
	void ReceivePreviewItem(int32_t Index, bool Show, bool OutSuccess);
	void ReceiveItemNotificationData(int32_t Index, TArray<UObject*> Array);
	void ReceiveInitialize(int32_t AvailableItems);
	void ReceiveGetSelectedIndex(int32_t OutIndex);
	void CreateItemWidget(UVanityItem* InVanityItem, bool InBackgroundVisible, bool InShowToolTip, UITM_GeneratedIcon_Item_C* OutItemWidget);
	void SetSelectedItem(UVanityItem* Item, bool Equip);
	void ReceiveGenerateItems(TArray<UWidget*> OutItemWidgets);
	void ReceiveReleaseResource(UWidget* InWidget);
	void ReceivePreConstruct();
	void On Initialized();
	void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity(int32_t EntryPoint);
};

