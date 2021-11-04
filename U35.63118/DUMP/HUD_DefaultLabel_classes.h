// WidgetBlueprintGeneratedClass HUD_DefaultLabel.HUD_DefaultLabel_C
// Size: 0x285 (Inherited: 0x230)
struct UHUD_DefaultLabel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* Label; // 0x238(0x08)
	FText Text; // 0x240(0x18)
	int32_t Font Size; // 0x258(0x04)
	enum class ENUM_AcuminCondensedTypeface Typeface; // 0x25c(0x01)
	enum class ETextJustify Justification; // 0x25d(0x01)
	FFontOutlineSettings Outline Settings; // 0x260(0x20)
	float Min Desired Width; // 0x280(0x04)
	enum class ENUM_MenuColors TextColor; // 0x284(0x01)

	void SetTextColor(enum class ENUM_MenuColors ColorSelector);
	void SetOutlineSettings(FFontOutlineSettings InFontInfo_OutlineSettings);
	void SetJustification(enum class ETextJustify InJustification);
	void SetTypeFace(enum class ENUM_AcuminCondensedTypeface Typeface);
	void SetFontSize(int32_t inFontSize);
	void SetText(FText NewText);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_DefaultLabel(int32_t EntryPoint);
};

