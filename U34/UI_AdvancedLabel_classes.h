// WidgetBlueprintGeneratedClass UI_AdvancedLabel.UI_AdvancedLabel_C
// Size: 0x330 (Inherited: 0x268)
struct UUI_AdvancedLabel_C : UFSDAdvancedLabel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UVerticalBox* Lines; // 0x270(0x08)
	struct FSlateFontInfo Font; // 0x278(0x50)
	struct UHorizontalBox* CurrentLine; // 0x2c8(0x08)
	int32_t Icon Size; // 0x2d0(0x04)
	struct FLinearColor Text Tint; // 0x2d4(0x10)
	struct FLinearColor Key Name Tint; // 0x2e4(0x10)
	struct FLinearColor PC  Icon Tint; // 0x2f4(0x10)
	struct FLinearColor Controller Icon Tint; // 0x304(0x10)
	int32_t Icon Size_ControllerOverride; // 0x314(0x04)
	struct FLinearColor Shadow Color; // 0x318(0x10)
	struct FVector2D Shadow Offset; // 0x328(0x08)

	void SetPreviewAs(char PreviewAs); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetPreviewAs
	void SetTints(struct FLinearColor Text Tint, struct FLinearColor Key Name Tint, struct FLinearColor PC  Icon Tint, struct FLinearColor Controller Icon Tint); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTints
	void SetKeyNameTint(struct FLinearColor Key Name Tint); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetKeyNameTint
	void SetIconTint(struct FLinearColor PC  Icon Tint, struct FLinearColor Controller Icon Tint); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconTint
	void SetTextTint(struct FLinearColor Text Tint); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTextTint
	void OnNewLine(int32_t Index); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnNewLine
	void OnAddIcon(struct FString Name, struct FActionIconMapping Icon); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddIcon
	void OnAddKeyName(struct FString Name); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddKeyName
	void OnAddString(struct FString Value); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddString
	void OnReset(); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnReset
	void ExecuteUbergraph_UI_AdvancedLabel(int32_t EntryPoint); // Function UI_AdvancedLabel.UI_AdvancedLabel_C.ExecuteUbergraph_UI_AdvancedLabel
};

