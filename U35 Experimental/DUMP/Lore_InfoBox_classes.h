// WidgetBlueprintGeneratedClass Lore_InfoBox.Lore_InfoBox_C
// Size: 0x2a0 (Inherited: 0x230)
struct ULore_InfoBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_BG_CutCorner_C* Basic_BG_Window_60; // 0x238(0x08)
	UImage* Image_Icon; // 0x240(0x08)
	UTextBlock* TextBlock_Grayed; // 0x248(0x08)
	UTextBlock* TextBlock_TextBody; // 0x250(0x08)
	FText Text; // 0x258(0x18)
	FObjectiveMissionIcon Icon; // 0x270(0x18)
	FText GrayText; // 0x288(0x18)

	void SetData(FText Text, FObjectiveMissionIcon Icon, FText GrayText);
	void PreConstruct(bool IsDesignTime);
	void SetColor(FLinearColor InColorAndOpacity);
	void ExecuteUbergraph_Lore_InfoBox(int32_t EntryPoint);
};

