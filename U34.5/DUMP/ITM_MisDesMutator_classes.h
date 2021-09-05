// WidgetBlueprintGeneratedClass ITM_MisDesMutator.ITM_MisDesMutator_C
// Size: 0x288 (Inherited: 0x230)
struct UITM_MisDesMutator_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* BlinkMutator; // 0x238(0x08)
	UWidgetAnimation* BlinkWarning; // 0x240(0x08)
	UImage* BlinkOverlay; // 0x248(0x08)
	UTextBlock* DATA_Modifier; // 0x250(0x08)
	UImage* GradientBG; // 0x258(0x08)
	UImage* IconModifier; // 0x260(0x08)
	USizeBox* SizeBox_Height; // 0x268(0x08)
	FLinearColor WarningTint; // 0x270(0x10)
	bool IsWarning; // 0x280(0x01)
	bool LeftAlign; // 0x281(0x01)
	float Heigh; // 0x284(0x04)

	void SetWarning(UMissionWarning* Warning);
	void SetAnomaly(UMissionMutator* Mutator);
	void SetVisuals(FText Title, UTexture2D* Icon, enum class ENUM_MenuColors Color);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MisDesMutator(int32_t EntryPoint);
};

