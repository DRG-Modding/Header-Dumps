// WidgetBlueprintGeneratedClass UI_AdvancedLabel.UI_AdvancedLabel_C
// Size: 0x330 (Inherited: 0x268)
struct UUI_AdvancedLabel_C : UFSDAdvancedLabel {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	UVerticalBox* Lines; // 0x270(0x08)
	FSlateFontInfo Font; // 0x278(0x50)
	UHorizontalBox* CurrentLine; // 0x2c8(0x08)
	int32_t Icon Size; // 0x2d0(0x04)
	FLinearColor Text Tint; // 0x2d4(0x10)
	FLinearColor Key Name Tint; // 0x2e4(0x10)
	FLinearColor PC  Icon Tint; // 0x2f4(0x10)
	FLinearColor Controller Icon Tint; // 0x304(0x10)
	int32_t Icon Size_ControllerOverride; // 0x314(0x04)
	FLinearColor Shadow Color; // 0x318(0x10)
	FVector2D Shadow Offset; // 0x328(0x08)

	void SetFont(FSlateFontInfo InFont, bool InKeepFontSize);
	void SetIconSize(int32_t Icon Size, int32_t Icon Size_ControllerOverride);
	void SetFontSize(int32_t Font Size);
	void SetPreviewAs(char PreviewAs);
	void SetTints(FLinearColor Text Tint, FLinearColor Key Name Tint, FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
	void SetKeyNameTint(FLinearColor Key Name Tint);
	void SetIconTint(FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
	void SetTextTint(FLinearColor Text Tint);
	void OnNewLine(int32_t Index);
	void OnAddIcon(FString Name, FActionIconMapping Icon);
	void OnAddKeyName(FString Name);
	void OnAddString(FString Value);
	void OnReset();
	void ExecuteUbergraph_UI_AdvancedLabel(int32_t EntryPoint);
};

