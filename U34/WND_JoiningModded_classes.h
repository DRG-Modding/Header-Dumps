// WidgetBlueprintGeneratedClass WND_JoiningModded.WND_JoiningModded_C
// Size: 0x408 (Inherited: 0x270)
struct UWND_JoiningModded_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct URichTextSizable* AboutToJoinModdedText; // 0x278(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x280(0x08)
	struct UBasic_PasswordField_C* Basic_PasswordField; // 0x288(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x290(0x08)
	struct UBorder* Border_1; // 0x298(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Cancel; // 0x2a0(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Join; // 0x2a8(0x08)
	struct URichTextSizable* DisclaimerModded; // 0x2b0(0x08)
	struct UTextBlock* Header; // 0x2b8(0x08)
	struct UImage* Image_123; // 0x2c0(0x08)
	struct UTextBlock* ModName; // 0x2c8(0x08)
	struct UVerticalBox* ModnameContainer; // 0x2d0(0x08)
	struct FBlueprintSessionResult Session; // 0x2d8(0x108)
	struct FMulticastInlineDelegate JoinModdedServer; // 0x3e0(0x10)
	struct UTextBlock* NewVar_1; // 0x3f0(0x08)
	struct FMulticastInlineDelegate OnCancel; // 0x3f8(0x10)

	void SetColors(); // Function WND_JoiningModded.WND_JoiningModded_C.SetColors
	void SetModNames(); // Function WND_JoiningModded.WND_JoiningModded_C.SetModNames
	void SetSession(struct FBlueprintSessionResult Session); // Function WND_JoiningModded.WND_JoiningModded_C.SetSession
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature(); // Function WND_JoiningModded.WND_JoiningModded_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature(); // Function WND_JoiningModded.WND_JoiningModded_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function WND_JoiningModded.WND_JoiningModded_C.PreConstruct
	void ExecuteUbergraph_WND_JoiningModded(int32_t EntryPoint); // Function WND_JoiningModded.WND_JoiningModded_C.ExecuteUbergraph_WND_JoiningModded
	void OnCancel__DelegateSignature(); // Function WND_JoiningModded.WND_JoiningModded_C.OnCancel__DelegateSignature
	void JoinModdedServer__DelegateSignature(struct FBlueprintSessionResult Session, struct FString Password); // Function WND_JoiningModded.WND_JoiningModded_C.JoinModdedServer__DelegateSignature
};

