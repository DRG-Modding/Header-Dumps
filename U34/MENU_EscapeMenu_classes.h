// WidgetBlueprintGeneratedClass MENU_EscapeMenu.MENU_EscapeMenu_C
// Size: 0x4f8 (Inherited: 0x270)
struct UMENU_EscapeMenu_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x278(0x08)
	struct UBasic_MenuLabel_C* Basic_MenuLabel_C_1; // 0x280(0x08)
	struct UBasic_ButtonLargeImage_C* BTN_CallToAction2; // 0x288(0x08)
	struct UBasic_ButtonCutCorner_C* BTN_ChangeProfile; // 0x290(0x08)
	struct UBasic_ButtonScalable_C* BTN_Controls; // 0x298(0x08)
	struct UBasic_ButtonScalable_C* BTN_Credits; // 0x2a0(0x08)
	struct UBasic_ButtonScalable_C* BTN_Discord; // 0x2a8(0x08)
	struct UBasic_ButtonCutCorner_C* BTN_Exit; // 0x2b0(0x08)
	struct UITM_Special_ButtonCutCorner_C* BTN_Leave; // 0x2b8(0x08)
	struct UHeader_ButtonCutCorner_C* BTN_MinersManual; // 0x2c0(0x08)
	struct UHeader_ButtonCutCorner_C* BTN_Modding; // 0x2c8(0x08)
	struct UHeader_ButtonCutCorner_C* BTN_News; // 0x2d0(0x08)
	struct UHeader_ButtonCutCorner_C* BTN_Options; // 0x2d8(0x08)
	struct UHeader_ButtonCutCorner_C* BTN_PatchNotes; // 0x2e0(0x08)
	struct UITM_Special_ButtonCutCorner_C* BTN_Reconnect; // 0x2e8(0x08)
	struct UBasic_ButtonScalable_C* BTN_Resume; // 0x2f0(0x08)
	struct UHeader_ButtonCutCorner_C* BTN_Social; // 0x2f8(0x08)
	struct UHeader_ButtonCutCorner_C* BTN_Status; // 0x300(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Survey2; // 0x308(0x08)
	struct UVerticalBox* ConsoleBox; // 0x310(0x08)
	struct UImage* DRG_Logo; // 0x318(0x08)
	struct UImage* Icon_GhostShip; // 0x320(0x08)
	struct UITM_MenuBackground_C* ITM_EscapeMenuBackground; // 0x328(0x08)
	struct UITM_MenuDamageIndicator_C* ITM_MenuDamageIndicator; // 0x330(0x08)
	struct UITM_RestoreSave_C* ITM_RestoreSave; // 0x338(0x08)
	struct UBasic_Menu_LargeWindowNoHeader_C* MainMenu; // 0x340(0x08)
	struct UMENU_Credits_C* MENU_Credits; // 0x348(0x08)
	struct UMenu_StatusScreen_C* Menu_StatusScreen; // 0x350(0x08)
	struct UUI_AdvancedLabel_C* OptionIconNext; // 0x358(0x08)
	struct UUI_AdvancedLabel_C* OptionIconPrev; // 0x360(0x08)
	struct UOverlay* Overlay_Status; // 0x368(0x08)
	struct UOverlay* Overlay_SubMenuHolder; // 0x370(0x08)
	struct UMenu_Options_C* OptionsPane; // 0x378(0x08)
	struct UOptions_ControlLayout_C* ControlLayout; // 0x380(0x08)
	bool WasUsingCustomScale; // 0x388(0x01)
	bool ApplySettingsOnClose; // 0x389(0x01)
	char UnknownData_38A[0x6]; // 0x38a(0x06)
	struct FBlueprintSessionResult RejoinSearchResult; // 0x390(0x108)
	enum class ESlateVisibility GSG Logo Visibility; // 0x498(0x01)
	char UnknownData_499[0x7]; // 0x499(0x07)
	struct U_MENU_MinersManual_C* Menu_MinersManual; // 0x4a0(0x08)
	struct TArray<struct UHeader_ButtonCutCorner_C*> buttons; // 0x4a8(0x10)
	struct UHeader_ButtonCutCorner_C* SelectedButton; // 0x4b8(0x08)
	struct UWindowWidget* SelectedSection; // 0x4c0(0x08)
	enum class EMinersManualSection MMPendingSection; // 0x4c8(0x01)
	char UnknownData_4C9[0x3]; // 0x4c9(0x03)
	struct FGuid MMPending_ID; // 0x4cc(0x10)
	float MMNotificationShownTime; // 0x4dc(0x04)
	bool IsClosingSection; // 0x4e0(0x01)
	char UnknownData_4E1[0x7]; // 0x4e1(0x07)
	struct UMENU_PatchNotes_C* MENU_PatchNotes; // 0x4e8(0x08)
	struct UMENU_Modding_C* MENU_Modding; // 0x4f0(0x08)

	void OnMinersManualOpen(struct UObject* IdentifyingObject, bool Open Specific Page, enum class EMinersManualSinglePage Page); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualOpen
	void OnMinersManualNotification(enum class EMinersManualSection PendingSection, struct FGuid Pending_ID, struct FText Text); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualNotification
	void ToggleButton(struct UHeader_ButtonCutCorner_C* InButton); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.ToggleButton
	void OpenSection(struct UWindowWidget* InSection, bool AddToWindowManager); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenSection
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMouseButtonUp
	void SetHUDVisible(bool Visible); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible
	bool NotInParty(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty
	void UpdateDebugTerrainHash(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash
	void SetupLeaveButton(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp
	void OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE
	void OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE
	void OnFailure_2723501B4F5B15367D2461B5F901451A(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_2723501B4F5B15367D2461B5F901451A
	void OnSuccess_2723501B4F5B15367D2461B5F901451A(struct FBlueprintSessionResult Result); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_2723501B4F5B15367D2461B5F901451A
	void OnFailure_2445084B4952F2116D9957A0465D5CFB(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_2445084B4952F2116D9957A0465D5CFB
	void OnSuccess_2445084B4952F2116D9957A0465D5CFB(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_2445084B4952F2116D9957A0465D5CFB
	void OnFailure_D3AC1B41459DE7C179341F9A3024CEE9(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_D3AC1B41459DE7C179341F9A3024CEE9
	void OnSuccess_D3AC1B41459DE7C179341F9A3024CEE9(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_D3AC1B41459DE7C179341F9A3024CEE9
	void No_AE1052D648D3B4733E52C594A5522CE9(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_AE1052D648D3B4733E52C594A5522CE9
	void Yes_AE1052D648D3B4733E52C594A5522CE9(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_AE1052D648D3B4733E52C594A5522CE9
	void No_1ADE94D8445F020C5D27B8822516025E(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_1ADE94D8445F020C5D27B8822516025E
	void Yes_1ADE94D8445F020C5D27B8822516025E(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_1ADE94D8445F020C5D27B8822516025E
	void No_7D7D93E642CD15AC8E341D8B5ED1ACA8(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_7D7D93E642CD15AC8E341D8B5ED1ACA8
	void Yes_7D7D93E642CD15AC8E341D8B5ED1ACA8(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_7D7D93E642CD15AC8E341D8B5ED1ACA8
	void Construct(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct
	void FSDSetFocus(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.FSDSetFocus
	void BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct
	void OnShown(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown
	void OnClosed(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed
	void BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	void BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	void BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	void OpenMinersManualSection(struct UObject* IdentifyingObject); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualSection
	void BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(struct UHeader_ButtonCutCorner_C* Button); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	void BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(struct UHeader_ButtonCutCorner_C* Button); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	void BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(struct UHeader_ButtonCutCorner_C* Button); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	void OpenMinersManualPage(enum class EMinersManualSinglePage Page); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualPage
	void SelectNextButton(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectNextButton
	void SelectPrevButton(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectPrevButton
	void OnInputSourceChanged(enum class EFSDInputSource InputSource); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnInputSourceChanged
	void BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UBasic_ButtonCutCorner_C* Button); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	void BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	void BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UBasic_ButtonCutCorner_C* Button); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void OpenMinersManualFromID(enum class EMinersManualSection Section, struct FGuid ID); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualFromID
	void OnNewTopWindow(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnNewTopWindow
	void OnCreditsClicked(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCreditsClicked
	void BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UHeader_ButtonCutCorner_C* Button); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void BndEvt__BTN_Modding_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UHeader_ButtonCutCorner_C* Button); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Modding_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	void BndEvt__ITM_RestoreSave_K2Node_ComponentBoundEvent_6_OnShowRestoreSaveClicked__DelegateSignature(); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__ITM_RestoreSave_K2Node_ComponentBoundEvent_6_OnShowRestoreSaveClicked__DelegateSignature
	void ExecuteUbergraph_MENU_EscapeMenu(int32_t EntryPoint); // Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu
};

