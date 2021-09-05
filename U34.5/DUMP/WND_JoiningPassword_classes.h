// WidgetBlueprintGeneratedClass WND_JoiningPassword.WND_JoiningPassword_C
// Size: 0x3d0 (Inherited: 0x270)
struct UWND_JoiningPassword_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_PasswordField_C* Basic_PasswordField; // 0x278(0x08)
	UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x280(0x08)
	UBlurBackground_C* BlurBackground; // 0x288(0x08)
	UBasic_ButtonScalable2_C* BTN_Cancel; // 0x290(0x08)
	UBasic_ButtonScalable2_C* BTN_Join; // 0x298(0x08)
	UTextBlock* TextBlock_3; // 0x2a0(0x08)
	FBlueprintSessionResult Session; // 0x2a8(0x108)
	FMulticastInlineDelegate JoinWithPassword; // 0x3b0(0x10)
	FMulticastInlineDelegate OnCancel; // 0x3c0(0x10)

	void SetSession(FBlueprintSessionResult Session);
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WND_JoiningPassword(int32_t EntryPoint);
	void OnCancel__DelegateSignature();
	void JoinWithPassword__DelegateSignature(FBlueprintSessionResult Session, FString Password);
};

