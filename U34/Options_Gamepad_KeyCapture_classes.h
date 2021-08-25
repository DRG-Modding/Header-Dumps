// WidgetBlueprintGeneratedClass Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C
// Size: 0x2b8 (Inherited: 0x270)
struct UOptions_Gamepad_KeyCapture_C : UInputCaptureWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetSwitcher* DisplaySwitcher; // 0x278(0x08)
	struct UImage* FocusedIndicator; // 0x280(0x08)
	struct USizeBox* IconSizeBox; // 0x288(0x08)
	struct UImage* InputImage; // 0x290(0x08)
	struct UUI_GenericLabel_C* InputLabel; // 0x298(0x08)
	float IconSize; // 0x2a0(0x04)
	int32_t FontSize; // 0x2a4(0x04)
	struct FMulticastInlineDelegate OnCapturingChanged; // 0x2a8(0x10)

	void UpdateKeyDisplay(struct FKey InKey); // Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.UpdateKeyDisplay
	bool IsInteractable(); // Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.IsInteractable
	void ReceiveCapturingChanged(bool InCapturing); // Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveCapturingChanged
	void ReceiveKeyChanged(struct FKey InKey); // Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveKeyChanged
	void Construct(); // Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.Construct
	void OnCustomKeyBindingsChanged(); // Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.OnCustomKeyBindingsChanged
	void ReceiveKeyCaptured(struct FKey InKey); // Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveKeyCaptured
	void PreConstruct(bool IsDesignTime); // Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.PreConstruct
	void ExecuteUbergraph_Options_Gamepad_KeyCapture(int32_t EntryPoint); // Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ExecuteUbergraph_Options_Gamepad_KeyCapture
	void OnCapturingChanged__DelegateSignature(bool InCapturing); // Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.OnCapturingChanged__DelegateSignature
};

