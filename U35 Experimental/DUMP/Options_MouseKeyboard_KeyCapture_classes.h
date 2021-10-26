// WidgetBlueprintGeneratedClass Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C
// Size: 0x350 (Inherited: 0x270)
struct UOptions_MouseKeyboard_KeyCapture_C : UInputCaptureWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UButton* ClearButton; // 0x278(0x08)
	UImage* FocusedImage; // 0x280(0x08)
	UTextBlock* KeyLabel; // 0x288(0x08)
	FMulticastInlineDelegate OnKeyCaptureFinished; // 0x290(0x10)
	FMulticastInlineDelegate OnKeyCaptureError; // 0x2a0(0x10)
	FMulticastInlineDelegate OnKeyCaptureChanged; // 0x2b0(0x10)
	FMulticastInlineDelegate OnKeyCaptureCancelled; // 0x2c0(0x10)
	FKey CapturedKey; // 0x2d0(0x18)
	FCustomKeySetting ConflictingAction; // 0x2e8(0x38)
	FKey NoneKey; // 0x320(0x18)
	FKey CurrentKey; // 0x338(0x18)

	void UpdateClearButton();
	void UpdateKeyInfo(FKey Key);
	void No_8623E71E42D4951E6FF011979EF3C667();
	void Yes_8623E71E42D4951E6FF011979EF3C667();
	void BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void OnMouseLeave(FPointerEvent MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void OnCustomKeyBindingsChanged();
	void Construct();
	void ReceiveKeyChanged(FKey InKey);
	void ReceiveKeyCaptured(FKey InKey);
	void ReceiveCapturingChanged(bool InCapturing);
	void ExecuteUbergraph_Options_MouseKeyboard_KeyCapture(int32_t EntryPoint);
	void OnKeyCaptureCancelled__DelegateSignature();
	void OnKeyCaptureChanged__DelegateSignature();
	void OnKeyCaptureError__DelegateSignature();
	void OnKeyCaptureFinished__DelegateSignature();
};

