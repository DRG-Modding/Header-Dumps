// WidgetBlueprintGeneratedClass Popup_Saveslots.Popup_Saveslots_C
// Size: 0x288 (Inherited: 0x270)
struct UPopup_Saveslots_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_ButtonScalable2_C* BTN_Close; // 0x278(0x08)
	UMenu_SaveSlots_C* Menu_SaveSlots; // 0x280(0x08)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Close();
	void ExecuteUbergraph_Popup_Saveslots(int32_t EntryPoint);
};

