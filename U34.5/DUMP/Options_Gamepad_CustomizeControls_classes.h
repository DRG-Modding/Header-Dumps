// WidgetBlueprintGeneratedClass Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C
// Size: 0x269 (Inherited: 0x230)
struct UOptions_Gamepad_CustomizeControls_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Option_C* Basic_Option; // 0x238(0x08)
	UVerticalBox* BindingsBox; // 0x240(0x08)
	UBasic_ButtonWithControls_C* BTN_ResetToDefaults; // 0x248(0x08)
	UBasic_ButtonCutCorner_C* Btn_Toggle; // 0x250(0x08)
	UVerticalBox* ContentBox; // 0x258(0x08)
	UOptions_Gamepad_SwapThumbsticks_C* Options_SwapThumbsticks; // 0x260(0x08)
	bool IsOpen; // 0x268(0x01)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void SetOpen(bool Index);
	void CreateBindingWidgets();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ExecuteUbergraph_Options_Gamepad_CustomizeControls(int32_t EntryPoint);
};

