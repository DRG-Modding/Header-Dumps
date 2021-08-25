// WidgetBlueprintGeneratedClass UI_Cursor.UI_Cursor_C
// Size: 0x270 (Inherited: 0x250)
struct UUI_Cursor_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UCanvasPanel* Root; // 0x258(0x08)
	struct UUI_Cursor_Controller_C* UI_Cursor_Controller; // 0x260(0x08)
	struct UUI_Cursor_Mouse_C* UI_Cursor_Mouse; // 0x268(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_Cursor.UI_Cursor_C.Tick
	void ExecuteUbergraph_UI_Cursor(int32_t EntryPoint); // Function UI_Cursor.UI_Cursor_C.ExecuteUbergraph_UI_Cursor
};

