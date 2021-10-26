// WidgetBlueprintGeneratedClass Basic_FlatGradientButton.Basic_FlatGradientButton_C
// Size: 0x340 (Inherited: 0x230)
struct UBasic_FlatGradientButton_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* Button; // 0x238(0x08)
	UBasic_Image_C* Button_Background; // 0x240(0x08)
	UBorder* Button_Border; // 0x248(0x08)
	UOverlay* Button_Overlay; // 0x250(0x08)
	USizeBox* Button_SizeBox; // 0x258(0x08)
	UUI_AdvancedLabel_C* Button_Text; // 0x260(0x08)
	UScaleBox* Button_TextScale; // 0x268(0x08)
	enum class ENUM_MenuColors TextTint; // 0x270(0x01)
	enum class ENUM_MenuColors ButtonTint; // 0x271(0x01)
	enum class ENUM_MenuColors BorderTint; // 0x272(0x01)
	enum class ENUM_MenuColors ButtonHoveredTint; // 0x273(0x01)
	enum class ENUM_MenuColors BorderHoverdTint; // 0x274(0x01)
	enum class EHorizontalAlignment ContentHorizontalAlignment; // 0x275(0x01)
	FText Text; // 0x278(0x18)
	FText TextControllerOverride; // 0x290(0x18)
	FSlateFontInfo TextFont; // 0x2a8(0x50)
	FSizeBoxSettings ButtonSize; // 0x2f8(0x20)
	FMargin TextPadding; // 0x318(0x10)
	enum class EStretch TextScale; // 0x328(0x01)
	FMulticastInlineDelegate OnClicked; // 0x330(0x10)

	void SetFontSize(int32_t inFontSize);
	void SetText(FText NewText, FText OverrideControllerText);
	void Update();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Basic_FlatGradientButton(int32_t EntryPoint);
	void OnClicked__DelegateSignature();
};

