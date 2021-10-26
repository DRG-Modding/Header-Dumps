// WidgetBlueprintGeneratedClass ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C
// Size: 0x241 (Inherited: 0x230)
struct UITM_DragRotateCharacterShowroom_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_1; // 0x238(0x08)
	bool GrabMouse; // 0x240(0x01)

	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void Construct();
	void OnShowCharacterSelectorRotate(float Pitch, float Yaw);
	void ExecuteUbergraph_ITM_DragRotateCharacterShowroom(int32_t EntryPoint);
};

