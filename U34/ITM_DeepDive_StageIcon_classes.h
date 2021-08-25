// WidgetBlueprintGeneratedClass ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C
// Size: 0x281 (Inherited: 0x230)
struct UITM_DeepDive_StageIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* TextBlock_76; // 0x238(0x08)
	struct UTextBlock* TextBlock_88; // 0x240(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x248(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted_C_1; // 0x250(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted_C_5; // 0x258(0x08)
	bool Active; // 0x260(0x01)
	char UnknownData_261[0x7]; // 0x261(0x07)
	struct FText Text; // 0x268(0x18)
	bool ShowClaimStatusText; // 0x280(0x01)

	void SetClaimStatusActive(bool Index); // Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetClaimStatusActive
	void SetText(struct FText Text); // Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetText
	void SetActive(bool Index); // Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetActive
	void PreConstruct(bool IsDesignTime); // Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.PreConstruct
	void ExecuteUbergraph_ITM_DeepDive_StageIcon(int32_t EntryPoint); // Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.ExecuteUbergraph_ITM_DeepDive_StageIcon
};

