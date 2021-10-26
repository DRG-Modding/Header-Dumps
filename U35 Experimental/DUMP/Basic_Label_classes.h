// WidgetBlueprintGeneratedClass Basic_Label.Basic_Label_C
// Size: 0x2f0 (Inherited: 0x230)
struct UBasic_Label_C : UUserWidget {
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
	int32_t MaxLength; // 0x2d4(0x04)
	FText MaxLengthIndicator; // 0x2d8(0x18)

	void SelectTextColor(enum class ENUM_MenuColors FALSE, enum class ENUM_MenuColors TRUE, bool Condition);
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
	void ExecuteUbergraph_Basic_Label(int32_t EntryPoint);
};

