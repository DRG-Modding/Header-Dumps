// WidgetBlueprintGeneratedClass TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C
// Size: 0x290 (Inherited: 0x230)
struct UTOOLTIP_MasteryIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	UTextBlock* HeaderLabel; // 0x240(0x08)
	UVerticalBox* LinesBox; // 0x248(0x08)
	TArray<UUnlockReward*> Unlocks; // 0x250(0x10)
	UItemID* Item; // 0x260(0x08)
	TSoftClassPtr<UObject> BoscoSoftRef; // 0x268(0x28)

	void SetUnlocks(TArray<UUnlockReward*> Array);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TOOLTIP_MasteryIcon(int32_t EntryPoint);
};

