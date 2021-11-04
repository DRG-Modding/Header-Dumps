// WidgetBlueprintGeneratedClass WND_JoinFailed.WND_JoinFailed_C
// Size: 0x298 (Inherited: 0x270)
struct UWND_JoinFailed_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x278(0x08)
	UBlurBackground_C* BlurBackground; // 0x280(0x08)
	UBasic_ButtonScalable2_C* BTN_Cancel; // 0x288(0x08)
	UTextBlock* TextBlock_129; // 0x290(0x08)

	void OnFailure_EF9B242446B45E709293BAB20166BCB2();
	void OnSuccess_EF9B242446B45E709293BAB20166BCB2();
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Cancel();
	void ExecuteUbergraph_WND_JoinFailed(int32_t EntryPoint);
};

