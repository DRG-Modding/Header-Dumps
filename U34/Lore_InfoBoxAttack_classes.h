// WidgetBlueprintGeneratedClass Lore_InfoBoxAttack.Lore_InfoBoxAttack_C
// Size: 0x300 (Inherited: 0x230)
struct ULore_InfoBoxAttack_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_BG_CutCorner_C* Basic_BG_Window_60; // 0x238(0x08)
	struct ULore_DamageTypeIcon_C* Lore_DamageTypeIcon; // 0x240(0x08)
	struct UTextBlock* TextBlock_Grayed; // 0x248(0x08)
	struct UTextBlock* TextBlock_TextBody; // 0x250(0x08)
	struct FText Text; // 0x258(0x18)
	struct FDamageTypeDescription Icon; // 0x270(0x78)
	struct FText GrayText; // 0x2e8(0x18)

	void SetData(struct FText Text, struct FDamageTypeDescription Icon, struct FText GrayText); // Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetData
	void PreConstruct(bool IsDesignTime); // Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.PreConstruct
	void SetColor(struct FLinearColor InColorAndOpacity); // Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetColor
	void ExecuteUbergraph_Lore_InfoBoxAttack(int32_t EntryPoint); // Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.ExecuteUbergraph_Lore_InfoBoxAttack
};

