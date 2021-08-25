// WidgetBlueprintGeneratedClass UI_GenericLabel.UI_GenericLabel_C
// Size: 0x2d1 (Inherited: 0x230)
struct UUI_GenericLabel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UFSDLabelWidget* Label; // 0x238(0x08)
	struct FText Text; // 0x240(0x18)
	bool ToUpper; // 0x258(0x01)
	char UnknownData_259[0x7]; // 0x259(0x07)
	struct FSlateFontInfo Font; // 0x260(0x50)
	char TextColor; // 0x2b0(0x01)
	char Justification; // 0x2b1(0x01)
	char UnknownData_2B2[0x2]; // 0x2b2(0x02)
	float MinDesiredWidth; // 0x2b4(0x04)
	struct FMargin TextMargin; // 0x2b8(0x10)
	bool AutoTextWrap; // 0x2c8(0x01)
	char UnknownData_2C9[0x3]; // 0x2c9(0x03)
	float WrapTextAt; // 0x2cc(0x04)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x2d0(0x01)

	void GetText(struct FText Text); // Function UI_GenericLabel.UI_GenericLabel_C.GetText
	void SetWrappingPolicy(enum class ETextWrappingPolicy WrappingPolicy); // Function UI_GenericLabel.UI_GenericLabel_C.SetWrappingPolicy
	void SetWrapTextAt(float WrapTextAt); // Function UI_GenericLabel.UI_GenericLabel_C.SetWrapTextAt
	void SetAutoWrapText(bool AutoTextWrap); // Function UI_GenericLabel.UI_GenericLabel_C.SetAutoWrapText
	void SetFontSize(int32_t inFontSize); // Function UI_GenericLabel.UI_GenericLabel_C.SetFontSize
	void SetMinDesiredWidth(float MinDesiredWidth); // Function UI_GenericLabel.UI_GenericLabel_C.SetMinDesiredWidth
	void SetJustification(char Justification); // Function UI_GenericLabel.UI_GenericLabel_C.SetJustification
	void SetTextColor(char TextColor); // Function UI_GenericLabel.UI_GenericLabel_C.SetTextColor
	void SetText(struct FText Text); // Function UI_GenericLabel.UI_GenericLabel_C.SetText
	void SetMargin(struct FMargin New Margin); // Function UI_GenericLabel.UI_GenericLabel_C.SetMargin
	void PreConstruct(bool IsDesignTime); // Function UI_GenericLabel.UI_GenericLabel_C.PreConstruct
	void ExecuteUbergraph_UI_GenericLabel(int32_t EntryPoint); // Function UI_GenericLabel.UI_GenericLabel_C.ExecuteUbergraph_UI_GenericLabel
};

