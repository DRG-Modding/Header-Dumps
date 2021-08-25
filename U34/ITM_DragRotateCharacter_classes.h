// WidgetBlueprintGeneratedClass ITM_DragRotateCharacter.ITM_DragRotateCharacter_C
// Size: 0x248 (Inherited: 0x230)
struct UITM_DragRotateCharacter_C : UUserWidget {
	struct UImage* Image_1; // 0x230(0x08)
	bool GrabMouse; // 0x238(0x01)
	char UnknownData_239[0x7]; // 0x239(0x07)
	struct ACharacterSelectionSwitcher_C* switcher; // 0x240(0x08)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_DragRotateCharacter.ITM_DragRotateCharacter_C.OnMouseButtonUp
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_DragRotateCharacter.ITM_DragRotateCharacter_C.OnMouseButtonDown
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_DragRotateCharacter.ITM_DragRotateCharacter_C.OnMouseMove
};

