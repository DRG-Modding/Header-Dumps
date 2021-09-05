// WidgetBlueprintGeneratedClass UI_GenericLabel.UI_GenericLabel_C
// Size: 0x2d1 (Inherited: 0x230)
struct UUI_GenericLabel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UFSDLabelWidget* Label; // 0x238(0x08)
	FText Text; // 0x240(0x18)
	bool ToUpper; // 0x258(0x01)
	FSlateFontInfo Font; // 0x260(0x50)
	enum class ENUM_MenuColors TextColor; // 0x2b0(0x01)
	enum class ETextJustify Justification; // 0x2b1(0x01)
	float MinDesiredWidth; // 0x2b4(0x04)
	FMargin TextMargin; // 0x2b8(0x10)
	bool AutoTextWrap; // 0x2c8(0x01)
	float WrapTextAt; // 0x2cc(0x04)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x2d0(0x01)

	void GetText(FText Text);
	void SetWrappingPolicy(enum class ETextWrappingPolicy WrappingPolicy);
	void SetWrapTextAt(float WrapTextAt);
	void SetAutoWrapText(bool AutoTextWrap);
	void SetFontSize(int32_t inFontSize);
	void SetMinDesiredWidth(float MinDesiredWidth);
	void SetJustification(enum class ETextJustify Justification);
	void SetTextColor(enum class ENUM_MenuColors TextColor);
	void SetText(FText Text);
	void SetMargin(FMargin New Margin);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_GenericLabel(int32_t EntryPoint);
};

