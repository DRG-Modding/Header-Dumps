// WidgetBlueprintGeneratedClass TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C
// Size: 0x290 (Inherited: 0x230)
struct UTOOLTIP_MasteryIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	struct UTextBlock* HeaderLabel; // 0x240(0x08)
	struct UVerticalBox* LinesBox; // 0x248(0x08)
	struct TArray<struct UUnlockReward*> Unlocks; // 0x250(0x10)
	struct UItemID* Item; // 0x260(0x08)
	SoftClassProperty BoscoSoftRef; // 0x268(0x28)

	void SetUnlocks(struct TArray<struct UUnlockReward*> Array); // Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.SetUnlocks
	void PreConstruct(bool IsDesignTime); // Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.PreConstruct
	void ExecuteUbergraph_TOOLTIP_MasteryIcon(int32_t EntryPoint); // Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.ExecuteUbergraph_TOOLTIP_MasteryIcon
};

