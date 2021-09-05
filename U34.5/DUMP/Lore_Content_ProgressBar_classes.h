// WidgetBlueprintGeneratedClass Lore_Content_ProgressBar.Lore_Content_ProgressBar_C
// Size: 0x278 (Inherited: 0x230)
struct ULore_Content_ProgressBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x238(0x08)
	UTextBlock* MainText; // 0x240(0x08)
	UProgressBar* ProgressBar_157; // 0x248(0x08)
	FText HeaderText; // 0x250(0x18)
	float NewVal; // 0x268(0x04)
	float StartTime; // 0x26c(0x04)
	float OldVal; // 0x270(0x04)
	float ChangeTime; // 0x274(0x04)

	void SetProgress(int32_t Progress);
	void PreConstruct(bool IsDesignTime);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_Lore_Content_ProgressBar(int32_t EntryPoint);
};

