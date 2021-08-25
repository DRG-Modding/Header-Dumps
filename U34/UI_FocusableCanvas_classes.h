// WidgetBlueprintGeneratedClass UI_FocusableCanvas.UI_FocusableCanvas_C
// Size: 0x260 (Inherited: 0x230)
struct UUI_FocusableCanvas_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UNamedSlot* Content; // 0x238(0x08)
	struct FMulticastInlineDelegate OnFocusChanged; // 0x240(0x10)
	struct FMulticastInlineDelegate OnHoverChanged; // 0x250(0x10)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusReceived
	void Construct(); // Function UI_FocusableCanvas.UI_FocusableCanvas_C.Construct
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusLost
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseLeave
	void ExecuteUbergraph_UI_FocusableCanvas(int32_t EntryPoint); // Function UI_FocusableCanvas.UI_FocusableCanvas_C.ExecuteUbergraph_UI_FocusableCanvas
	void OnHoverChanged__DelegateSignature(struct UWidget* Widget, bool IsHovered); // Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnHoverChanged__DelegateSignature
	void OnFocusChanged__DelegateSignature(struct UWidget* Widget, bool IsFocused); // Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusChanged__DelegateSignature
};

