// WidgetBlueprintGeneratedClass SkipAssignmentPopup.SkipAssignmentPopup_C
// Size: 0x2c8 (Inherited: 0x288)
struct USkipAssignmentPopup_C : UYesNoPromptWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x290(0x08)
	UBasic_ButtonScalable2_C* BTN_No; // 0x298(0x08)
	UBasic_ButtonScalable2_C* BTN_Yes; // 0x2a0(0x08)
	UTextBlock* DATA_Content; // 0x2a8(0x08)
	UTextBlock* DATA_Header; // 0x2b0(0x08)
	UITM_MenuBackground_C* ITM_MenuBackground; // 0x2b8(0x08)
	UTextBlock* TextBlock_1; // 0x2c0(0x08)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void OnShow(FText Title, FText Message);
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Yes();
	void No();
	void ExecuteUbergraph_SkipAssignmentPopup(int32_t EntryPoint);
};

