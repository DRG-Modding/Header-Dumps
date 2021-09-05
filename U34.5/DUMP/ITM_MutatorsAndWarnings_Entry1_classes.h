// WidgetBlueprintGeneratedClass ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C
// Size: 0x261 (Inherited: 0x230)
struct UITM_MutatorsAndWarnings_Entry1_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DATA_Warning; // 0x238(0x08)
	UHorizontalBox* hboxMutator; // 0x240(0x08)
	UImage* IconWarning; // 0x248(0x08)
	FLinearColor WarningTint; // 0x250(0x10)
	enum class ENUM_MutatorWarning MutatorOrWarning; // 0x260(0x01)

	void PreConstruct(bool IsDesignTime);
	void SetMutator(UMissionMutator* Mutator);
	void SetWarning(UMissionWarning* Warning);
	void SetInfo(FText Title, UTexture2D* Icon, FLinearColor Color);
	void ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1(int32_t EntryPoint);
};

