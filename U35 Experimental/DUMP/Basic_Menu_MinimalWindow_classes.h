// WidgetBlueprintGeneratedClass Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C
// Size: 0x310 (Inherited: 0x230)
struct UBasic_Menu_MinimalWindow_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	USizeBox* Arrow; // 0x238(0x08)
	UImage* Arrow_WindowBottom; // 0x240(0x08)
	UImage* Arrow_WindowBottomBG; // 0x248(0x08)
	UImage* ArrowMarker; // 0x250(0x08)
	UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Bottom_Left; // 0x258(0x08)
	UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Bottom_Right; // 0x260(0x08)
	UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Top; // 0x268(0x08)
	UBackgroundBlur* BlurBackground; // 0x270(0x08)
	UHorizontalBox* BottomBorder; // 0x278(0x08)
	UBorder* HeaderBorder; // 0x280(0x08)
	UBorder* MainBG; // 0x288(0x08)
	UNamedSlot* PutStuffHere; // 0x290(0x08)
	FMulticastInlineDelegate On Clicked; // 0x298(0x10)
	bool BottomArrow; // 0x2a8(0x01)
	FMulticastInlineDelegate ThickBars; // 0x2b0(0x10)
	bool Thick Bars; // 0x2c0(0x01)
	bool MouseOver; // 0x2c1(0x01)
	FMulticastInlineDelegate OnCursorEnter; // 0x2c8(0x10)
	FMulticastInlineDelegate OnCursorLeave; // 0x2d8(0x10)
	FMulticastInlineDelegate OnReceivedFocus; // 0x2e8(0x10)
	FMulticastInlineDelegate OnLostFocus; // 0x2f8(0x10)
	float WindowOpacity; // 0x308(0x04)
	float BlurStrength; // 0x30c(0x04)

	void IsMouseOver(bool MouseOver);
	FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void OnFocusLost(FFocusEvent InFocusEvent);
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void OnMouseLeave(FPointerEvent MouseEvent);
	void ExecuteUbergraph_Basic_Menu_MinimalWindow(int32_t EntryPoint);
	void OnLostFocus__DelegateSignature(UBasic_Menu_MinimalWindow_C* Window);
	void OnReceivedFocus__DelegateSignature(UBasic_Menu_MinimalWindow_C* Window);
	void OnCursorLeave__DelegateSignature(UBasic_Menu_MinimalWindow_C* Window);
	void OnCursorEnter__DelegateSignature(UBasic_Menu_MinimalWindow_C* Window);
	void ThickBars__DelegateSignature();
	void On Clicked__DelegateSignature();
};

