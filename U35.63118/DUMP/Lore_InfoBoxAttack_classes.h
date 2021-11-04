// WidgetBlueprintGeneratedClass Lore_InfoBoxAttack.Lore_InfoBoxAttack_C
// Size: 0x300 (Inherited: 0x230)
struct ULore_InfoBoxAttack_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_BG_CutCorner_C* Basic_BG_Window_60; // 0x238(0x08)
	ULore_DamageTypeIcon_C* Lore_DamageTypeIcon; // 0x240(0x08)
	UTextBlock* TextBlock_Grayed; // 0x248(0x08)
	UTextBlock* TextBlock_TextBody; // 0x250(0x08)
	FText Text; // 0x258(0x18)
	FDamageTypeDescription Icon; // 0x270(0x78)
	FText GrayText; // 0x2e8(0x18)

	void SetData(FText Text, FDamageTypeDescription Icon, FText GrayText);
	void PreConstruct(bool IsDesignTime);
	void SetColor(FLinearColor InColorAndOpacity);
	void ExecuteUbergraph_Lore_InfoBoxAttack(int32_t EntryPoint);
};

