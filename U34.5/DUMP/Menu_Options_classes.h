// WidgetBlueprintGeneratedClass Menu_Options.Menu_Options_C
// Size: 0x368 (Inherited: 0x270)
struct UMenu_Options_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x278(0x08)
	UBasic_Window_CutCorner_C* Basic_Window_CutCorner; // 0x280(0x08)
	UBasic_ButtonTab_C* BTN_Audio; // 0x288(0x08)
	UBasic_ButtonTab_C* BTN_Controls; // 0x290(0x08)
	UBasic_ButtonTab_C* BTN_Credits; // 0x298(0x08)
	UBasic_ButtonTab_C* BTN_Gameplay; // 0x2a0(0x08)
	UBasic_ButtonTab_C* BTN_Graphics; // 0x2a8(0x08)
	UBasic_ButtonTab_C* BTN_Layout; // 0x2b0(0x08)
	UBasic_ButtonTab_C* BTN_Privacy; // 0x2b8(0x08)
	UBasic_ButtonTab_C* BTN_Saves; // 0x2c0(0x08)
	UBasic_ButtonTab_C* BTN_UI; // 0x2c8(0x08)
	UWidgetSwitcher* ContentSwitcher; // 0x2d0(0x08)
	UUI_AdvancedLabel_C* OptionIconNext; // 0x2d8(0x08)
	UUI_AdvancedLabel_C* OptionIconPrev; // 0x2e0(0x08)
	UOptions_Tab_Audio_C* Options_Tab_Audio; // 0x2e8(0x08)
	UOptions_ControlLayout_C* Options_Tab_ControlLayout; // 0x2f0(0x08)
	UOptions_Tab_Controls_C* Options_Tab_Controls; // 0x2f8(0x08)
	UOptions_Tab_Gameplay_C* Options_Tab_Gameplay; // 0x300(0x08)
	UOptions_Tab_GFX_C* Options_Tab_GFX; // 0x308(0x08)
	UOptions_Tab_Privacy_C* Options_Tab_Privacy; // 0x310(0x08)
	UOptions_Tab_Saves_C* Options_Tab_Saves; // 0x318(0x08)
	UOptions_Tab_UI_C* Options_Tab_UI; // 0x320(0x08)
	UBasic_ButtonTab_C* ActiveTabButton; // 0x328(0x08)
	int32_t CurrTabIndex; // 0x330(0x04)
	TArray<UBasic_ButtonTab_C*> Tabs; // 0x338(0x10)
	TArray<UUserWidget*> Pages; // 0x348(0x10)
	FMulticastInlineDelegate CreditsClicked; // 0x358(0x10)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void DeselectTab(UBasic_ButtonTab_C* Tab);
	void SelectTab(int32_t Index, bool WithSound);
	void Construct();
	void SelectFirstTab();
	void BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature();
	void BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature();
	void OnClosed();
	void OnShown();
	void BndEvt__BTN_Layout_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void UpdateTabs(enum class EFSDInputSource InputSource);
	void BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BTN_Saves_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void ExecuteUbergraph_Menu_Options(int32_t EntryPoint);
	void CreditsClicked__DelegateSignature();
};

