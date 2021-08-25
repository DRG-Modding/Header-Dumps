// WidgetBlueprintGeneratedClass Lore_InfoBox.Lore_InfoBox_C
// Size: 0x2a0 (Inherited: 0x230)
struct ULore_InfoBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_BG_CutCorner_C* Basic_BG_Window_60; // 0x238(0x08)
	struct UImage* Image_Icon; // 0x240(0x08)
	struct UTextBlock* TextBlock_Grayed; // 0x248(0x08)
	struct UTextBlock* TextBlock_TextBody; // 0x250(0x08)
	struct FText Text; // 0x258(0x18)
	struct FObjectiveMissionIcon Icon; // 0x270(0x18)
	struct FText GrayText; // 0x288(0x18)

	void SetData(struct FText Text, struct FObjectiveMissionIcon Icon, struct FText GrayText); // Function Lore_InfoBox.Lore_InfoBox_C.SetData
	void PreConstruct(bool IsDesignTime); // Function Lore_InfoBox.Lore_InfoBox_C.PreConstruct
	void SetColor(struct FLinearColor InColorAndOpacity); // Function Lore_InfoBox.Lore_InfoBox_C.SetColor
	void ExecuteUbergraph_Lore_InfoBox(int32_t EntryPoint); // Function Lore_InfoBox.Lore_InfoBox_C.ExecuteUbergraph_Lore_InfoBox
};

