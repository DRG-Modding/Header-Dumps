// WidgetBlueprintGeneratedClass WND_Joining.WND_Joining_C
// Size: 0x2b1 (Inherited: 0x270)
struct UWND_Joining_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* FadeOut; // 0x278(0x08)
	UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x280(0x08)
	UBlurBackground_C* BlurBackground; // 0x288(0x08)
	UBasic_ButtonScalable2_C* Button_Close; // 0x290(0x08)
	UCircularThrobber* CircularThrobber_3; // 0x298(0x08)
	UImage* FadeImage; // 0x2a0(0x08)
	UTextBlock* TextBlock_1; // 0x2a8(0x08)
	bool ShowCancelButton; // 0x2b0(0x01)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void BeginFadeOut(float Duration);
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void HideCancel();
	void OnShown();
	void Close();
	void ExecuteUbergraph_WND_Joining(int32_t EntryPoint);
};

