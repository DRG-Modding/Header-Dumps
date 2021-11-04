// WidgetBlueprintGeneratedClass UI_NetworkErrorScreen.UI_NetworkErrorScreen_C
// Size: 0x2c0 (Inherited: 0x270)
struct UUI_NetworkErrorScreen_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* FadeIn; // 0x278(0x08)
	UWidgetAnimation* FadeOut; // 0x280(0x08)
	UWidgetAnimation* BlinkText; // 0x288(0x08)
	UBasic_ButtonScalable2_C* Basic_ButtonScalable2; // 0x290(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x298(0x08)
	UBlurBackground_C* BlurBackground; // 0x2a0(0x08)
	UTextBlock* DisconnectReasonText; // 0x2a8(0x08)
	UImage* FadeOverlay; // 0x2b0(0x08)
	UTextBlock* TEXT_Header; // 0x2b8(0x08)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void FadeIt(bool FadeIn, float Duration);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void Close();
	void ExecuteUbergraph_UI_NetworkErrorScreen(int32_t EntryPoint);
};

