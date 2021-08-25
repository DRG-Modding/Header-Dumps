// WidgetBlueprintGeneratedClass ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C
// Size: 0x2a0 (Inherited: 0x230)
struct UITM_ResetFaction_ConsoleScreenV1_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	struct UTextBlock* CostTextBlock; // 0x240(0x08)
	struct USizeBox* CurrentSizebox; // 0x248(0x08)
	struct UImage* FactionLogo; // 0x250(0x08)
	struct UImage* Image_430; // 0x258(0x08)
	struct UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x260(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x268(0x08)
	struct UCommunityGoalFaction* CurrentFaction; // 0x270(0x08)
	int32_t Cost; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct FMulticastInlineDelegate CheckState; // 0x280(0x10)
	struct TArray<struct UCommunityGoalFaction*> FactionArray; // 0x290(0x10)

	int32_t CurrentFactionID(); // Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.CurrentFactionID
	void PreConstruct(bool IsDesignTime); // Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.PreConstruct
	void Set Faction(struct UCommunityGoalFaction* Faction); // Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.Set Faction
	void ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1(int32_t EntryPoint); // Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1
	void CheckState__DelegateSignature(); // Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.CheckState__DelegateSignature
};

