// WidgetBlueprintGeneratedClass Basic_MenuLabel.Basic_MenuLabel_C
// Size: 0x266 (Inherited: 0x230)
struct UBasic_MenuLabel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* Label; // 0x238(0x08)
	FText Text; // 0x240(0x18)
	int32_t Font Size; // 0x258(0x04)
	enum class ENUM_CarbonTypeface Typeface; // 0x25c(0x01)
	enum class ETextJustify Justification; // 0x25d(0x01)
	float Min Desired Width; // 0x260(0x04)
	enum class ENUM_MenuColors Text Color; // 0x264(0x01)
	bool UpperCase; // 0x265(0x01)

	void SetJustification(enum class ETextJustify InJustification);
	void SetTypeFace(enum class ENUM_CarbonTypeface Typeface);
	void SetFontSize(int32_t inFontSize);
	void SetText(FText NewText);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Basic_MenuLabel(int32_t EntryPoint);
};

