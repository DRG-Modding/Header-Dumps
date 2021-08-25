// WidgetBlueprintGeneratedClass Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C
// Size: 0x350 (Inherited: 0x270)
struct UOptions_MouseKeyboard_KeyCapture_C : UInputCaptureWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UButton* ClearButton; // 0x278(0x08)
	struct UImage* FocusedImage; // 0x280(0x08)
	struct UTextBlock* KeyLabel; // 0x288(0x08)
	struct FMulticastInlineDelegate OnKeyCaptureFinished; // 0x290(0x10)
	struct FMulticastInlineDelegate OnKeyCaptureError; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnKeyCaptureChanged; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnKeyCaptureCancelled; // 0x2c0(0x10)
	struct FKey CapturedKey; // 0x2d0(0x18)
	struct FCustomKeySetting ConflictingAction; // 0x2e8(0x38)
	struct FKey NoneKey; // 0x320(0x18)
	struct FKey CurrentKey; // 0x338(0x18)

	void UpdateClearButton(); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.UpdateClearButton
	void UpdateKeyInfo(struct FKey Key); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.UpdateKeyInfo
	void No_8623E71E42D4951E6FF011979EF3C667(); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.No_8623E71E42D4951E6FF011979EF3C667
	void Yes_8623E71E42D4951E6FF011979EF3C667(); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.Yes_8623E71E42D4951E6FF011979EF3C667
	void BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnMouseLeave
	void PreConstruct(bool IsDesignTime); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.PreConstruct
	void OnCustomKeyBindingsChanged(); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnCustomKeyBindingsChanged
	void Construct(); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.Construct
	void ReceiveKeyChanged(struct FKey InKey); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveKeyChanged
	void ReceiveKeyCaptured(struct FKey InKey); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveKeyCaptured
	void ReceiveCapturingChanged(bool InCapturing); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveCapturingChanged
	void ExecuteUbergraph_Options_MouseKeyboard_KeyCapture(int32_t EntryPoint); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ExecuteUbergraph_Options_MouseKeyboard_KeyCapture
	void OnKeyCaptureCancelled__DelegateSignature(); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureCancelled__DelegateSignature
	void OnKeyCaptureChanged__DelegateSignature(); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureChanged__DelegateSignature
	void OnKeyCaptureError__DelegateSignature(); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureError__DelegateSignature
	void OnKeyCaptureFinished__DelegateSignature(); // Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureFinished__DelegateSignature
};

