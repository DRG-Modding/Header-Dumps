// WidgetBlueprintGeneratedClass UI_RichTextInput.UI_RichTextInput_C
// Size: 0x558 (Inherited: 0x518)
struct UUI_RichTextInput_C : URichTextInputWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	UImage* InputIcon; // 0x520(0x08)
	UTextBlock* InputText; // 0x528(0x08)
	UTextBlock* InteractionText; // 0x530(0x08)
	UOverlay* OverlayIcon; // 0x538(0x08)
	UOverlay* OverlayText; // 0x540(0x08)
	USizeBox* Sizer; // 0x548(0x08)
	UWidgetSwitcher* switcher; // 0x550(0x08)

	void ShowFromDisplayDetails(FInputDisplay details);
	void SetInteraction(enum class EInputInteraction InInteraction);
	void ShowAsText(FText InText, FLinearColor InTint);
	void SetSize(float InHeightOverride, float InWidthOverride, float InMinDesiredWidth);
	void ShowAsIcon(UTexture2D* InTexture, FLinearColor InTint);
	void ReceiveInputDetails(FInputDisplay InDisplay);
	void ReceiveInputUnknown();
	void ExecuteUbergraph_UI_RichTextInput(int32_t EntryPoint);
};

