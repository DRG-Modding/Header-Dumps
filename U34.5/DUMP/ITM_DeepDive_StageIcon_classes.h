// WidgetBlueprintGeneratedClass ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C
// Size: 0x281 (Inherited: 0x230)
struct UITM_DeepDive_StageIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* TextBlock_76; // 0x238(0x08)
	UTextBlock* TextBlock_88; // 0x240(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x248(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_C_1; // 0x250(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_C_5; // 0x258(0x08)
	bool Active; // 0x260(0x01)
	FText Text; // 0x268(0x18)
	bool ShowClaimStatusText; // 0x280(0x01)

	void SetClaimStatusActive(bool Index);
	void SetText(FText Text);
	void SetActive(bool Index);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_DeepDive_StageIcon(int32_t EntryPoint);
};

