// WidgetBlueprintGeneratedClass ITM_MisDesMutator.ITM_MisDesMutator_C
// Size: 0x288 (Inherited: 0x230)
struct UITM_MisDesMutator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* BlinkMutator; // 0x238(0x08)
	struct UWidgetAnimation* BlinkWarning; // 0x240(0x08)
	struct UImage* BlinkOverlay; // 0x248(0x08)
	struct UTextBlock* DATA_Modifier; // 0x250(0x08)
	struct UImage* GradientBG; // 0x258(0x08)
	struct UImage* IconModifier; // 0x260(0x08)
	struct USizeBox* SizeBox_Height; // 0x268(0x08)
	struct FLinearColor WarningTint; // 0x270(0x10)
	bool IsWarning; // 0x280(0x01)
	bool LeftAlign; // 0x281(0x01)
	char UnknownData_282[0x2]; // 0x282(0x02)
	float Heigh; // 0x284(0x04)

	void SetWarning(struct UMissionWarning* Warning); // Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetWarning
	void SetAnomaly(struct UMissionMutator* Mutator); // Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetAnomaly
	void SetVisuals(struct FText Title, struct UTexture2D* Icon, char Color); // Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetVisuals
	void PreConstruct(bool IsDesignTime); // Function ITM_MisDesMutator.ITM_MisDesMutator_C.PreConstruct
	void ExecuteUbergraph_ITM_MisDesMutator(int32_t EntryPoint); // Function ITM_MisDesMutator.ITM_MisDesMutator_C.ExecuteUbergraph_ITM_MisDesMutator
};

