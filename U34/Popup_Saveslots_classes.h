// WidgetBlueprintGeneratedClass Popup_Saveslots.Popup_Saveslots_C
// Size: 0x288 (Inherited: 0x270)
struct UPopup_Saveslots_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Close; // 0x278(0x08)
	struct UMenu_SaveSlots_C* Menu_SaveSlots; // 0x280(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Popup_Saveslots.Popup_Saveslots_C.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Popup_Saveslots.Popup_Saveslots_C.OnKeyDown
	void BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function Popup_Saveslots.Popup_Saveslots_C.BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void Close(); // Function Popup_Saveslots.Popup_Saveslots_C.Close
	void ExecuteUbergraph_Popup_Saveslots(int32_t EntryPoint); // Function Popup_Saveslots.Popup_Saveslots_C.ExecuteUbergraph_Popup_Saveslots
};

