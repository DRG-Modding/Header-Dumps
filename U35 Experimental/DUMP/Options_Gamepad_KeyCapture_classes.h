// WidgetBlueprintGeneratedClass Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C
// Size: 0x2b8 (Inherited: 0x270)
struct UOptions_Gamepad_KeyCapture_C : UInputCaptureWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetSwitcher* DisplaySwitcher; // 0x278(0x08)
	UImage* FocusedIndicator; // 0x280(0x08)
	USizeBox* IconSizeBox; // 0x288(0x08)
	UImage* InputImage; // 0x290(0x08)
	UBasic_Label_C* InputLabel; // 0x298(0x08)
	float IconSize; // 0x2a0(0x04)
	int32_t FontSize; // 0x2a4(0x04)
	FMulticastInlineDelegate OnCapturingChanged; // 0x2a8(0x10)

	void UpdateKeyDisplay(FKey InKey);
	bool IsInteractable();
	void ReceiveCapturingChanged(bool InCapturing);
	void ReceiveKeyChanged(FKey InKey);
	void Construct();
	void OnCustomKeyBindingsChanged();
	void ReceiveKeyCaptured(FKey InKey);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Options_Gamepad_KeyCapture(int32_t EntryPoint);
	void OnCapturingChanged__DelegateSignature(bool InCapturing);
};

