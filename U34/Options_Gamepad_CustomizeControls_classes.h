// WidgetBlueprintGeneratedClass Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C
// Size: 0x269 (Inherited: 0x230)
struct UOptions_Gamepad_CustomizeControls_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Option_C* Basic_Option; // 0x238(0x08)
	struct UVerticalBox* BindingsBox; // 0x240(0x08)
	struct UBasic_ButtonWithControls_C* BTN_ResetToDefaults; // 0x248(0x08)
	struct UBasic_ButtonCutCorner_C* Btn_Toggle; // 0x250(0x08)
	struct UVerticalBox* ContentBox; // 0x258(0x08)
	struct UOptions_Gamepad_SwapThumbsticks_C* Options_SwapThumbsticks; // 0x260(0x08)
	bool IsOpen; // 0x268(0x01)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.OnKeyUp
	void SetOpen(bool Index); // Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.SetOpen
	void CreateBindingWidgets(); // Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.CreateBindingWidgets
	void PreConstruct(bool IsDesignTime); // Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.PreConstruct
	void Construct(); // Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.Construct
	void BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UBasic_ButtonCutCorner_C* Button); // Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	void BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void ExecuteUbergraph_Options_Gamepad_CustomizeControls(int32_t EntryPoint); // Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.ExecuteUbergraph_Options_Gamepad_CustomizeControls
};

