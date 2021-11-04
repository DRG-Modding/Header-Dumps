// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSelector_ToolTip.ITM_Wardrobe_ItemSelector_ToolTip_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_Wardrobe_ItemSelector_ToolTip_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Label_C* DescriptionLabel; // 0x238(0x08)
	UBasic_Label_C* TextLabel; // 0x240(0x08)
	UBorder* ToolTipBorder; // 0x248(0x08)

	void SetText(FText Text);
	void ExecuteUbergraph_ITM_Wardrobe_ItemSelector_ToolTip(int32_t EntryPoint);
};

