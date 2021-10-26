// WidgetBlueprintGeneratedClass MENU_EscapeMenu.MENU_EscapeMenu_C
// Size: 0x4f8 (Inherited: 0x270)
struct UMENU_EscapeMenu_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x278(0x08)
	UBasic_MenuLabel_C* Basic_MenuLabel_C_1; // 0x280(0x08)
	UBasic_ButtonLargeImage_C* BTN_CallToAction2; // 0x288(0x08)
	UBasic_ButtonCutCorner_C* BTN_ChangeProfile; // 0x290(0x08)
	UBasic_ButtonScalable_C* BTN_Controls; // 0x298(0x08)
	UBasic_ButtonScalable_C* BTN_Credits; // 0x2a0(0x08)
	UBasic_ButtonScalable_C* BTN_Discord; // 0x2a8(0x08)
	UBasic_ButtonCutCorner_C* BTN_Exit; // 0x2b0(0x08)
	UITM_Special_ButtonCutCorner_C* BTN_Leave; // 0x2b8(0x08)
	UHeader_ButtonCutCorner_C* BTN_MinersManual; // 0x2c0(0x08)
	UHeader_ButtonCutCorner_C* BTN_Modding; // 0x2c8(0x08)
	UHeader_ButtonCutCorner_C* BTN_News; // 0x2d0(0x08)
	UHeader_ButtonCutCorner_C* BTN_Options; // 0x2d8(0x08)
	UHeader_ButtonCutCorner_C* BTN_PatchNotes; // 0x2e0(0x08)
	UITM_Special_ButtonCutCorner_C* BTN_Reconnect; // 0x2e8(0x08)
	UBasic_ButtonScalable_C* BTN_Resume; // 0x2f0(0x08)
	UHeader_ButtonCutCorner_C* BTN_Social; // 0x2f8(0x08)
	UHeader_ButtonCutCorner_C* BTN_Status; // 0x300(0x08)
	UBasic_ButtonScalable2_C* BTN_Survey2; // 0x308(0x08)
	UVerticalBox* ConsoleBox; // 0x310(0x08)
	UImage* DRG_Logo; // 0x318(0x08)
	UImage* Icon_GhostShip; // 0x320(0x08)
	UITM_MenuBackground_C* ITM_EscapeMenuBackground; // 0x328(0x08)
	UITM_MenuDamageIndicator_C* ITM_MenuDamageIndicator; // 0x330(0x08)
	UITM_RestoreSave_C* ITM_RestoreSave; // 0x338(0x08)
	UBasic_Menu_LargeWindowNoHeader_C* MainMenu; // 0x340(0x08)
	UMenu_StatusScreen_C* Menu_StatusScreen; // 0x348(0x08)
	UUI_AdvancedLabel_C* OptionIconNext; // 0x350(0x08)
	UUI_AdvancedLabel_C* OptionIconPrev; // 0x358(0x08)
	UOverlay* Overlay_Status; // 0x360(0x08)
	UOverlay* Overlay_SubMenuHolder; // 0x368(0x08)
	USafeZone* SafeZone_3; // 0x370(0x08)
	UMenu_Options_C* OptionsPane; // 0x378(0x08)
	UOptions_ControlLayout_C* ControlLayout; // 0x380(0x08)
	bool WasUsingCustomScale; // 0x388(0x01)
	bool ApplySettingsOnClose; // 0x389(0x01)
	FBlueprintSessionResult RejoinSearchResult; // 0x390(0x108)
	enum class ESlateVisibility GSG Logo Visibility; // 0x498(0x01)
	U_MENU_MinersManual_C* Menu_MinersManual; // 0x4a0(0x08)
	TArray<UHeader_ButtonCutCorner_C*> buttons; // 0x4a8(0x10)
	UHeader_ButtonCutCorner_C* SelectedButton; // 0x4b8(0x08)
	UWindowWidget* SelectedSection; // 0x4c0(0x08)
	enum class EMinersManualSection MMPendingSection; // 0x4c8(0x01)
	FGuid MMPending_ID; // 0x4cc(0x10)
	float MMNotificationShownTime; // 0x4dc(0x04)
	bool IsClosingSection; // 0x4e0(0x01)
	UMENU_PatchNotes_C* MENU_PatchNotes; // 0x4e8(0x08)
	UMENU_Modding_C* MENU_Modding; // 0x4f0(0x08)

	void OnMinersManualOpen(UObject* IdentifyingObject, bool Open Specific Page, enum class EMinersManualSinglePage Page);
	void OnMinersManualNotification(enum class EMinersManualSection PendingSection, FGuid Pending_ID, FText Text);
	void ToggleButton(UHeader_ButtonCutCorner_C* InButton);
	void OpenSection(UWindowWidget* InSection, bool AddToWindowManager);
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void SetHUDVisible(bool Visible);
	bool NotInParty();
	void UpdateDebugTerrainHash();
	void SetupLeaveButton();
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE();
	void OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE();
	void OnFailure_2445084B4952F2116D9957A0465D5CFB();
	void OnSuccess_2445084B4952F2116D9957A0465D5CFB();
	void OnFailure_D3AC1B41459DE7C179341F9A3024CEE9();
	void OnSuccess_D3AC1B41459DE7C179341F9A3024CEE9();
	void No_AE1052D648D3B4733E52C594A5522CE9();
	void Yes_AE1052D648D3B4733E52C594A5522CE9();
	void No_1ADE94D8445F020C5D27B8822516025E();
	void Yes_1ADE94D8445F020C5D27B8822516025E();
	void No_7D7D93E642CD15AC8E341D8B5ED1ACA8();
	void Yes_7D7D93E642CD15AC8E341D8B5ED1ACA8();
	void FSDSetFocus();
	void Construct();
	void BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void OnShown();
	void OnClosed();
	void BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
	void BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
	void OpenMinersManualSection(UObject* IdentifyingObject);
	void BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(UHeader_ButtonCutCorner_C* Button);
	void BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(UHeader_ButtonCutCorner_C* Button);
	void BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(UHeader_ButtonCutCorner_C* Button);
	void OpenMinersManualPage(enum class EMinersManualSinglePage Page);
	void SelectNextButton();
	void SelectPrevButton();
	void OnInputSourceChanged(enum class EFSDInputSource InputSource);
	void BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void OpenMinersManualFromID(enum class EMinersManualSection Section, FGuid ID);
	void OnNewTopWindow();
	void OnCreditsClicked();
	void BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(UHeader_ButtonCutCorner_C* Button);
	void BndEvt__BTN_Modding_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(UHeader_ButtonCutCorner_C* Button);
	void BndEvt__ITM_RestoreSave_K2Node_ComponentBoundEvent_6_OnShowRestoreSaveClicked__DelegateSignature();
	void ExecuteUbergraph_MENU_EscapeMenu(int32_t EntryPoint);
};

