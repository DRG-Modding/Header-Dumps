// WidgetBlueprintGeneratedClass WND_JoiningModded.WND_JoiningModded_C
// Size: 0x440 (Inherited: 0x270)
struct UWND_JoiningModded_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	URichTextSizable* AboutToJoinModdedText; // 0x278(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x280(0x08)
	UBasic_PasswordField_C* Basic_PasswordField; // 0x288(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x290(0x08)
	UBlurBackground_C* BlurBackground; // 0x298(0x08)
	UBorder* Border_1; // 0x2a0(0x08)
	UBasic_ButtonScalable2_C* BTN_Cancel; // 0x2a8(0x08)
	UBasic_ButtonScalable2_C* BTN_Join; // 0x2b0(0x08)
	URichTextSizable* DisclaimerModded; // 0x2b8(0x08)
	UTextBlock* Header; // 0x2c0(0x08)
	UImage* Image_123; // 0x2c8(0x08)
	UVerticalBox* ModnameContainer; // 0x2d0(0x08)
	UCircularThrobber* SubscribtionLoading; // 0x2d8(0x08)
	FBlueprintSessionResult Session; // 0x2e0(0x108)
	FMulticastInlineDelegate JoinModdedServer; // 0x3e8(0x10)
	FMulticastInlineDelegate OnCancel; // 0x3f8(0x10)
	bool EmptyMods; // 0x408(0x01)
	TArray<FString> ModsToInstall; // 0x410(0x10)
	TArray<FString> HostMods; // 0x420(0x10)
	TArray<FString> ModsToEnable; // 0x430(0x10)

	void HiddenModsBlock(bool Hidden);
	void OnFetchedTermsOfUse(FModioTermsWrapper Terms);
	void StartJoinSession();
	void OnDownloadFinished(FString ModName, FString ModId);
	void SubscribeToMods();
	void SetDefaultModDescription();
	void SetColors();
	void SetModNames();
	void SetSession(FBlueprintSessionResult Session);
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ReceiveCloseCommand();
	void ReceiveOkCommand();
	void AnsweredTerms(bool Agree);
	void ReloadWorldAndJoin();
	void OnModioUserAuthenticated(bool Authenticated);
	void Construct();
	void ExecuteUbergraph_WND_JoiningModded(int32_t EntryPoint);
	void OnCancel__DelegateSignature();
	void JoinModdedServer__DelegateSignature(FBlueprintSessionResult Session, FString Password);
};

