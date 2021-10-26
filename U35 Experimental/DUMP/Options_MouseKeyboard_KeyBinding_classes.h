// WidgetBlueprintGeneratedClass Options_MouseKeyboard_KeyBinding.Options_MouseKeyboard_KeyBinding_C
// Size: 0x298 (Inherited: 0x230)
struct UOptions_MouseKeyboard_KeyBinding_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Error; // 0x238(0x08)
	UBasic_Option_C* Basic_Option; // 0x240(0x08)
	UTextBlock* ErrorLabel; // 0x248(0x08)
	UOptions_MouseKeyboard_KeyCapture_C* UI_KeyCapture_Primary; // 0x250(0x08)
	UOptions_MouseKeyboard_KeyCapture_C* UI_KeyCapture_Secondary; // 0x258(0x08)
	FCustomKeySetting KeySettings; // 0x260(0x38)

	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_0_OnKeyCaptureFinished__DelegateSignature();
	void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_0_OnKeyCaptureError__DelegateSignature();
	void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_1_OnKeyCaptureChanged__DelegateSignature();
	void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_2_OnKeyCaptureCancelled__DelegateSignature();
	void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_0_OnKeyCaptureFinished__DelegateSignature();
	void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_8_OnKeyCaptureError__DelegateSignature();
	void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_27_OnKeyCaptureChanged__DelegateSignature();
	void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_38_OnKeyCaptureCancelled__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_Options_MouseKeyboard_KeyBinding(int32_t EntryPoint);
};

