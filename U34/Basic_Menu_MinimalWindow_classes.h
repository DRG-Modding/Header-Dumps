// WidgetBlueprintGeneratedClass Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C
// Size: 0x310 (Inherited: 0x230)
struct UBasic_Menu_MinimalWindow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USizeBox* Arrow; // 0x238(0x08)
	struct UImage* Arrow_WindowBottom; // 0x240(0x08)
	struct UImage* Arrow_WindowBottomBG; // 0x248(0x08)
	struct UImage* ArrowMarker; // 0x250(0x08)
	struct UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Bottom_Left; // 0x258(0x08)
	struct UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Bottom_Right; // 0x260(0x08)
	struct UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Top; // 0x268(0x08)
	struct UBackgroundBlur* BlurBackground; // 0x270(0x08)
	struct UHorizontalBox* BottomBorder; // 0x278(0x08)
	struct UBorder* HeaderBorder; // 0x280(0x08)
	struct UBorder* MainBG; // 0x288(0x08)
	struct UNamedSlot* PutStuffHere; // 0x290(0x08)
	struct FMulticastInlineDelegate On Clicked; // 0x298(0x10)
	bool BottomArrow; // 0x2a8(0x01)
	char UnknownData_2A9[0x7]; // 0x2a9(0x07)
	struct FMulticastInlineDelegate ThickBars; // 0x2b0(0x10)
	bool Thick Bars; // 0x2c0(0x01)
	bool MouseOver; // 0x2c1(0x01)
	char UnknownData_2C2[0x6]; // 0x2c2(0x06)
	struct FMulticastInlineDelegate OnCursorEnter; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnCursorLeave; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnReceivedFocus; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnLostFocus; // 0x2f8(0x10)
	float WindowOpacity; // 0x308(0x04)
	float BlurStrength; // 0x30c(0x04)

	void IsMouseOver(bool MouseOver); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.IsMouseOver
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusReceived
	void PreConstruct(bool IsDesignTime); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.PreConstruct
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusLost
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseLeave
	void ExecuteUbergraph_Basic_Menu_MinimalWindow(int32_t EntryPoint); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ExecuteUbergraph_Basic_Menu_MinimalWindow
	void OnLostFocus__DelegateSignature(struct UBasic_Menu_MinimalWindow_C* Window); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnLostFocus__DelegateSignature
	void OnReceivedFocus__DelegateSignature(struct UBasic_Menu_MinimalWindow_C* Window); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnReceivedFocus__DelegateSignature
	void OnCursorLeave__DelegateSignature(struct UBasic_Menu_MinimalWindow_C* Window); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorLeave__DelegateSignature
	void OnCursorEnter__DelegateSignature(struct UBasic_Menu_MinimalWindow_C* Window); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorEnter__DelegateSignature
	void ThickBars__DelegateSignature(); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ThickBars__DelegateSignature
	void On Clicked__DelegateSignature(); // Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.On Clicked__DelegateSignature
};

