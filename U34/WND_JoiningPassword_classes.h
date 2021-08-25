// WidgetBlueprintGeneratedClass WND_JoiningPassword.WND_JoiningPassword_C
// Size: 0x3d0 (Inherited: 0x270)
struct UWND_JoiningPassword_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_PasswordField_C* Basic_PasswordField; // 0x278(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x280(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x288(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Cancel; // 0x290(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Join; // 0x298(0x08)
	struct UTextBlock* TextBlock_3; // 0x2a0(0x08)
	struct FBlueprintSessionResult Session; // 0x2a8(0x108)
	struct FMulticastInlineDelegate JoinWithPassword; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x3c0(0x10)

	void SetSession(struct FBlueprintSessionResult Session); // Function WND_JoiningPassword.WND_JoiningPassword_C.SetSession
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature(); // Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature(); // Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function WND_JoiningPassword.WND_JoiningPassword_C.PreConstruct
	void ExecuteUbergraph_WND_JoiningPassword(int32_t EntryPoint); // Function WND_JoiningPassword.WND_JoiningPassword_C.ExecuteUbergraph_WND_JoiningPassword
	void OnCancel__DelegateSignature(); // Function WND_JoiningPassword.WND_JoiningPassword_C.OnCancel__DelegateSignature
	void JoinWithPassword__DelegateSignature(struct FBlueprintSessionResult Session, struct FString Password); // Function WND_JoiningPassword.WND_JoiningPassword_C.JoinWithPassword__DelegateSignature
};

