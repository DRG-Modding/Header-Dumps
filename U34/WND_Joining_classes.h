// WidgetBlueprintGeneratedClass WND_Joining.WND_Joining_C
// Size: 0x2b1 (Inherited: 0x270)
struct UWND_Joining_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* FadeOut; // 0x278(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x280(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x288(0x08)
	struct UBasic_ButtonScalable2_C* Button_Close; // 0x290(0x08)
	struct UCircularThrobber* CircularThrobber_3; // 0x298(0x08)
	struct UImage* FadeImage; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_1; // 0x2a8(0x08)
	bool ShowCancelButton; // 0x2b0(0x01)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WND_Joining.WND_Joining_C.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WND_Joining.WND_Joining_C.OnKeyDown
	void BeginFadeOut(float Duration); // Function WND_Joining.WND_Joining_C.BeginFadeOut
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WND_Joining.WND_Joining_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function WND_Joining.WND_Joining_C.PreConstruct
	void HideCancel(); // Function WND_Joining.WND_Joining_C.HideCancel
	void OnShown(); // Function WND_Joining.WND_Joining_C.OnShown
	void Close(); // Function WND_Joining.WND_Joining_C.Close
	void ExecuteUbergraph_WND_Joining(int32_t EntryPoint); // Function WND_Joining.WND_Joining_C.ExecuteUbergraph_WND_Joining
};

