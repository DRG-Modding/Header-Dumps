// WidgetBlueprintGeneratedClass OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C
// Size: 0x258 (Inherited: 0x230)
struct UOnScreenIndicator_SupplyDrop_Order_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall; // 0x238(0x08)
	struct UUI_AdvancedLabel_C* KeyLabel; // 0x240(0x08)
	struct UTextBlock* Text_Cost; // 0x248(0x08)
	struct UTextBlock* Text_Name; // 0x250(0x08)

	void SetDetails(struct FText Name, int32_t Cost, struct UResourceData* ResourceRequired); // Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.SetDetails
	void PreConstruct(bool IsDesignTime); // Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.PreConstruct
	void ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order(int32_t EntryPoint); // Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order
};

