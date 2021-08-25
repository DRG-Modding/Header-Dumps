// WidgetBlueprintGeneratedClass ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C
// Size: 0x261 (Inherited: 0x230)
struct UITM_MutatorsAndWarnings_Entry1_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* DATA_Warning; // 0x238(0x08)
	struct UHorizontalBox* hboxMutator; // 0x240(0x08)
	struct UImage* IconWarning; // 0x248(0x08)
	struct FLinearColor WarningTint; // 0x250(0x10)
	char MutatorOrWarning; // 0x260(0x01)

	void PreConstruct(bool IsDesignTime); // Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.PreConstruct
	void SetMutator(struct UMissionMutator* Mutator); // Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetMutator
	void SetWarning(struct UMissionWarning* Warning); // Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetWarning
	void SetInfo(struct FText Title, struct UTexture2D* Icon, struct FLinearColor Color); // Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetInfo
	void ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1(int32_t EntryPoint); // Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1
};

