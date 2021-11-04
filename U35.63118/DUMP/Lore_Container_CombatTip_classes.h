// WidgetBlueprintGeneratedClass Lore_Container_CombatTip.Lore_Container_CombatTip_C
// Size: 0x298 (Inherited: 0x230)
struct ULore_Container_CombatTip_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Intro; // 0x238(0x08)
	UBasic_Window_CutCorner_C* Basic_Window; // 0x240(0x08)
	UImage* Image_ExclamaitonMark; // 0x248(0x08)
	URichTextBlock* RichTextBlock_Body; // 0x250(0x08)
	UTextBlock* TextBlock_Headline; // 0x258(0x08)
	UVerticalBox* VerticalBox_20; // 0x260(0x08)
	FText Headline; // 0x268(0x18)
	FText Text; // 0x280(0x18)

	void SetText(FText Headline, FText Body);
	void PreConstruct(bool IsDesignTime);
	void PlayIntro();
	void ExecuteUbergraph_Lore_Container_CombatTip(int32_t EntryPoint);
};

