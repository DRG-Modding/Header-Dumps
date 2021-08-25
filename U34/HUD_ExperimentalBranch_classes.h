// WidgetBlueprintGeneratedClass HUD_ExperimentalBranch.HUD_ExperimentalBranch_C
// Size: 0x250 (Inherited: 0x230)
struct UHUD_ExperimentalBranch_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* BranchText; // 0x238(0x08)
	struct UImage* Image_Background; // 0x240(0x08)
	struct UImage* Image_Outline; // 0x248(0x08)

	void Construct(); // Function HUD_ExperimentalBranch.HUD_ExperimentalBranch_C.Construct
	void PreConstruct(bool IsDesignTime); // Function HUD_ExperimentalBranch.HUD_ExperimentalBranch_C.PreConstruct
	void ExecuteUbergraph_HUD_ExperimentalBranch(int32_t EntryPoint); // Function HUD_ExperimentalBranch.HUD_ExperimentalBranch_C.ExecuteUbergraph_HUD_ExperimentalBranch
};

