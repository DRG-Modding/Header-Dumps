// WidgetBlueprintGeneratedClass Lore_Container_CombatTip.Lore_Container_CombatTip_C
// Size: 0x298 (Inherited: 0x230)
struct ULore_Container_CombatTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Intro; // 0x238(0x08)
	struct UBasic_Window_CutCorner_C* Basic_Window; // 0x240(0x08)
	struct UImage* Image_ExclamaitonMark; // 0x248(0x08)
	struct URichTextBlock* RichTextBlock_Body; // 0x250(0x08)
	struct UTextBlock* TextBlock_Headline; // 0x258(0x08)
	struct UVerticalBox* VerticalBox_20; // 0x260(0x08)
	struct FText Headline; // 0x268(0x18)
	struct FText Text; // 0x280(0x18)

	void SetText(struct FText Headline, struct FText Body); // Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.SetText
	void PreConstruct(bool IsDesignTime); // Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PreConstruct
	void PlayIntro(); // Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PlayIntro
	void ExecuteUbergraph_Lore_Container_CombatTip(int32_t EntryPoint); // Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.ExecuteUbergraph_Lore_Container_CombatTip
};

