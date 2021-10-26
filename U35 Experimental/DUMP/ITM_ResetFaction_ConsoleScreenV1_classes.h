// WidgetBlueprintGeneratedClass ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C
// Size: 0x2a0 (Inherited: 0x230)
struct UITM_ResetFaction_ConsoleScreenV1_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	UTextBlock* CostTextBlock; // 0x240(0x08)
	USizeBox* CurrentSizebox; // 0x248(0x08)
	UImage* FactionLogo; // 0x250(0x08)
	UImage* Image_430; // 0x258(0x08)
	UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x260(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x268(0x08)
	UCommunityGoalFaction* CurrentFaction; // 0x270(0x08)
	int32_t Cost; // 0x278(0x04)
	FMulticastInlineDelegate CheckState; // 0x280(0x10)
	TArray<UCommunityGoalFaction*> FactionArray; // 0x290(0x10)

	int32_t CurrentFactionID();
	void PreConstruct(bool IsDesignTime);
	void Set Faction(UCommunityGoalFaction* Faction);
	void ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1(int32_t EntryPoint);
	void CheckState__DelegateSignature();
};

