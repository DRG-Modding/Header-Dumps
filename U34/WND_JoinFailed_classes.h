// WidgetBlueprintGeneratedClass WND_JoinFailed.WND_JoinFailed_C
// Size: 0x298 (Inherited: 0x270)
struct UWND_JoinFailed_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x278(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x280(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Cancel; // 0x288(0x08)
	struct UTextBlock* TextBlock_129; // 0x290(0x08)

	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WND_JoinFailed.WND_JoinFailed_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function WND_JoinFailed.WND_JoinFailed_C.PreConstruct
	void Cancel(); // Function WND_JoinFailed.WND_JoinFailed_C.Cancel
	void ExecuteUbergraph_WND_JoinFailed(int32_t EntryPoint); // Function WND_JoinFailed.WND_JoinFailed_C.ExecuteUbergraph_WND_JoinFailed
};

