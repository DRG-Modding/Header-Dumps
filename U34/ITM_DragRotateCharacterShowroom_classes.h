// WidgetBlueprintGeneratedClass ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C
// Size: 0x241 (Inherited: 0x230)
struct UITM_DragRotateCharacterShowroom_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_1; // 0x238(0x08)
	bool GrabMouse; // 0x240(0x01)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonUp
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonDown
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseMove
	void Construct(); // Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.Construct
	void OnShowCharacterSelectorRotate(float Pitch, float Yaw); // Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnShowCharacterSelectorRotate
	void ExecuteUbergraph_ITM_DragRotateCharacterShowroom(int32_t EntryPoint); // Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.ExecuteUbergraph_ITM_DragRotateCharacterShowroom
};

