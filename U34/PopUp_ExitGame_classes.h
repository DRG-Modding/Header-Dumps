// WidgetBlueprintGeneratedClass PopUp_ExitGame.Popup_ExitGame_C
// Size: 0x2e8 (Inherited: 0x288)
struct UPopup_ExitGame_C : UYesNoPromptWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Middle; // 0x290(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x298(0x08)
	struct UBasic_ButtonScalable2_C* BTN_No; // 0x2a0(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Survey2; // 0x2a8(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Yes; // 0x2b0(0x08)
	struct UTextBlock* DATA_Content; // 0x2b8(0x08)
	struct UTextBlock* DATA_Header; // 0x2c0(0x08)
	struct UITM_MenuBackground_C* ITM_MenuBackground; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_1; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_2; // 0x2d8(0x08)
	struct UVerticalBox* VerticalBox_Survey; // 0x2e0(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function PopUp_ExitGame.Popup_ExitGame_C.OnKeyUp
	void OnShow(struct FText Title, struct FText Message); // Function PopUp_ExitGame.Popup_ExitGame_C.OnShow
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function PopUp_ExitGame.Popup_ExitGame_C.PreConstruct
	void Yes(); // Function PopUp_ExitGame.Popup_ExitGame_C.Yes
	void No(); // Function PopUp_ExitGame.Popup_ExitGame_C.No
	void BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void ExecuteUbergraph_Popup_ExitGame(int32_t EntryPoint); // Function PopUp_ExitGame.Popup_ExitGame_C.ExecuteUbergraph_Popup_ExitGame
};

