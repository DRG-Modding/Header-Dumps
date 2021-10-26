// WidgetBlueprintGeneratedClass UI_FocusableCanvas.UI_FocusableCanvas_C
// Size: 0x260 (Inherited: 0x230)
struct UUI_FocusableCanvas_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UNamedSlot* Content; // 0x238(0x08)
	FMulticastInlineDelegate OnFocusChanged; // 0x240(0x10)
	FMulticastInlineDelegate OnHoverChanged; // 0x250(0x10)

	FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
	void Construct();
	void OnFocusLost(FFocusEvent InFocusEvent);
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void OnMouseLeave(FPointerEvent MouseEvent);
	void ExecuteUbergraph_UI_FocusableCanvas(int32_t EntryPoint);
	void OnHoverChanged__DelegateSignature(UWidget* Widget, bool IsHovered);
	void OnFocusChanged__DelegateSignature(UWidget* Widget, bool IsFocused);
};

