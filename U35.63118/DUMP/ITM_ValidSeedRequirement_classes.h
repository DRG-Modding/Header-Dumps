// WidgetBlueprintGeneratedClass ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C
// Size: 0x251 (Inherited: 0x230)
struct UITM_ValidSeedRequirement_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_1; // 0x238(0x08)
	UImage* Image_74; // 0x240(0x08)
	UTextBlock* TextBlock_439; // 0x248(0x08)
	bool RequirementMet; // 0x250(0x01)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ITM_ValidSeedRequirement(int32_t EntryPoint);
};

