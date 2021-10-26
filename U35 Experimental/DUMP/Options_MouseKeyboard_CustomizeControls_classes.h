// WidgetBlueprintGeneratedClass Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C
// Size: 0x261 (Inherited: 0x230)
struct UOptions_MouseKeyboard_CustomizeControls_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Option_C* Basic_Option; // 0x238(0x08)
	UVerticalBox* BindingsBox; // 0x240(0x08)
	UBasic_ButtonWithControls_C* BTN_ResetToDefaults; // 0x248(0x08)
	UBasic_ButtonCutCorner_C* Btn_Toggle; // 0x250(0x08)
	UVerticalBox* ContentBox; // 0x258(0x08)
	bool IsOpen; // 0x260(0x01)

	void ContainsAnyName(FCustomKeySetting Button, TArray<FName> ActionNames, bool Result);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void SetOpen(bool Index);
	void CreateBindingWidgets();
	void BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Construct();
	void BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls(int32_t EntryPoint);
};

