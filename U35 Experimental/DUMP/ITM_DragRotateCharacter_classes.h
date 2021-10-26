// WidgetBlueprintGeneratedClass ITM_DragRotateCharacter.ITM_DragRotateCharacter_C
// Size: 0x248 (Inherited: 0x230)
struct UITM_DragRotateCharacter_C : UUserWidget {
	UImage* Image_1; // 0x230(0x08)
	bool GrabMouse; // 0x238(0x01)
	ACharacterSelectionSwitcher_C* switcher; // 0x240(0x08)

	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent MouseEvent);
};

