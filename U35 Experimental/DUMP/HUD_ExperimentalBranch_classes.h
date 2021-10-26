// WidgetBlueprintGeneratedClass HUD_ExperimentalBranch.HUD_ExperimentalBranch_C
// Size: 0x250 (Inherited: 0x230)
struct UHUD_ExperimentalBranch_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* BranchText; // 0x238(0x08)
	UImage* Image_Background; // 0x240(0x08)
	UImage* Image_Outline; // 0x248(0x08)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_ExperimentalBranch(int32_t EntryPoint);
};

