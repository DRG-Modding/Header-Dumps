// WidgetBlueprintGeneratedClass Popup_ReconnectController.Popup_ReconnectController_C
// Size: 0x290 (Inherited: 0x270)
struct UPopup_ReconnectController_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_ButtonScalable2_C* Basic_ButtonScalable2; // 0x278(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x280(0x08)
	UBlurBackground_C* BlurBackground; // 0x288(0x08)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void Close();
	void ExecuteUbergraph_Popup_ReconnectController(int32_t EntryPoint);
};

