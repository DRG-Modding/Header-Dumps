// WidgetBlueprintGeneratedClass ITM_Modding_TermsAndConditions.ITM_Modding_TermsAndConditions_C
// Size: 0x310 (Inherited: 0x288)
struct UITM_Modding_TermsAndConditions_C : UYesNoPromptWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x290(0x08)
	UBasic_ButtonScalable2_C* BTN_No; // 0x298(0x08)
	UBasic_ButtonScalable2_C* BTN_Yes; // 0x2a0(0x08)
	UTextBlock* DATA_Content; // 0x2a8(0x08)
	UTextBlock* DATA_Header; // 0x2b0(0x08)
	URichTextBlock* Data_Privacy; // 0x2b8(0x08)
	URichTextBlock* Data_Terms; // 0x2c0(0x08)
	UITM_MenuBackground_C* ITM_MenuBackground; // 0x2c8(0x08)
	UButton* Privacy; // 0x2d0(0x08)
	UButton* Terms; // 0x2d8(0x08)
	FString TermsURL; // 0x2e0(0x10)
	FString PrivacyURL; // 0x2f0(0x10)
	FMulticastInlineDelegate OnAnswer; // 0x300(0x10)

	void OnModOverlayClosed(FString LastURL);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void Construct();
	void ShowTerms(UModioTermsWrapper* Terms);
	void BndEvt__Terms_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Privacy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Disagree();
	void Agree();
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void DummyEventThatLeadToNowhere(bool Yes);
	void ExecuteUbergraph_ITM_Modding_TermsAndConditions(int32_t EntryPoint);
	void OnAnswer__DelegateSignature(bool Agree);
};

