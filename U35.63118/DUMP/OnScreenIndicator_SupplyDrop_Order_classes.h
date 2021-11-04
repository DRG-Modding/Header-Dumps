// WidgetBlueprintGeneratedClass OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C
// Size: 0x258 (Inherited: 0x230)
struct UOnScreenIndicator_SupplyDrop_Order_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall; // 0x238(0x08)
	UUI_AdvancedLabel_C* KeyLabel; // 0x240(0x08)
	UTextBlock* Text_Cost; // 0x248(0x08)
	UTextBlock* Text_Name; // 0x250(0x08)

	void SetDetails(FText Name, int32_t Cost, UResourceData* ResourceRequired);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order(int32_t EntryPoint);
};

