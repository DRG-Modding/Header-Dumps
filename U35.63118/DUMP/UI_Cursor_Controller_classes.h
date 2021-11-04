// WidgetBlueprintGeneratedClass UI_Cursor_Controller.UI_Cursor_Controller_C
// Size: 0x270 (Inherited: 0x258)
struct UUI_Cursor_Controller_C : UMouseCursorWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UWidgetAnimation* Hover; // 0x260(0x08)
	UImage* Controller; // 0x268(0x08)

	void OnHover();
	void OnUnhover();
	void ExecuteUbergraph_UI_Cursor_Controller(int32_t EntryPoint);
};

