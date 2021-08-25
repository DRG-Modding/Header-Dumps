// WidgetBlueprintGeneratedClass Basic_MenuLabel.Basic_MenuLabel_C
// Size: 0x266 (Inherited: 0x230)
struct UBasic_MenuLabel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* Label; // 0x238(0x08)
	struct FText Text; // 0x240(0x18)
	int32_t Font Size; // 0x258(0x04)
	char Typeface; // 0x25c(0x01)
	char Justification; // 0x25d(0x01)
	char UnknownData_25E[0x2]; // 0x25e(0x02)
	float Min Desired Width; // 0x260(0x04)
	char Text Color; // 0x264(0x01)
	bool UpperCase; // 0x265(0x01)

	void SetJustification(char InJustification); // Function Basic_MenuLabel.Basic_MenuLabel_C.SetJustification
	void SetTypeFace(char Typeface); // Function Basic_MenuLabel.Basic_MenuLabel_C.SetTypeFace
	void SetFontSize(int32_t inFontSize); // Function Basic_MenuLabel.Basic_MenuLabel_C.SetFontSize
	void SetText(struct FText NewText); // Function Basic_MenuLabel.Basic_MenuLabel_C.SetText
	void PreConstruct(bool IsDesignTime); // Function Basic_MenuLabel.Basic_MenuLabel_C.PreConstruct
	void ExecuteUbergraph_Basic_MenuLabel(int32_t EntryPoint); // Function Basic_MenuLabel.Basic_MenuLabel_C.ExecuteUbergraph_Basic_MenuLabel
};

