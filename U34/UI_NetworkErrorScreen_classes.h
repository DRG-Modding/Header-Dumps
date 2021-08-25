// WidgetBlueprintGeneratedClass UI_NetworkErrorScreen.UI_NetworkErrorScreen_C
// Size: 0x2c0 (Inherited: 0x270)
struct UUI_NetworkErrorScreen_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* FadeIn; // 0x278(0x08)
	struct UWidgetAnimation* FadeOut; // 0x280(0x08)
	struct UWidgetAnimation* BlinkText; // 0x288(0x08)
	struct UBasic_ButtonScalable2_C* Basic_ButtonScalable2; // 0x290(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x298(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x2a0(0x08)
	struct UTextBlock* DisconnectReasonText; // 0x2a8(0x08)
	struct UImage* FadeOverlay; // 0x2b0(0x08)
	struct UTextBlock* TEXT_Header; // 0x2b8(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.OnKeyUp
	void FadeIt(bool FadeIn, float Duration); // Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.FadeIt
	void PreConstruct(bool IsDesignTime); // Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.PreConstruct
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	void Close(); // Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.Close
	void ExecuteUbergraph_UI_NetworkErrorScreen(int32_t EntryPoint); // Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.ExecuteUbergraph_UI_NetworkErrorScreen
};

