// WidgetBlueprintGeneratedClass WND_JoiningModded.WND_JoiningModded_C
// Size: 0x470 (Inherited: 0x270)
struct UWND_JoiningModded_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	URichTextSizable* AboutToJoinModdedText; // 0x278(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x280(0x08)
	UBasic_PasswordField_C* Basic_PasswordField; // 0x288(0x08)
	UBlurBackground_C* BlurBackground; // 0x290(0x08)
	UBorder* Border_1; // 0x298(0x08)
	UBasic_ButtonScalable2_C* BTN_Cancel; // 0x2a0(0x08)
	UBasic_ButtonScalable2_C* BTN_Join; // 0x2a8(0x08)
	URichTextSizable* DisclaimerModded; // 0x2b0(0x08)
	UWidgetSwitcher* HasMods_Switcher; // 0x2b8(0x08)
	UTextBlock* Header; // 0x2c0(0x08)
	UImage* Image_123; // 0x2c8(0x08)
	UVerticalBox* ModsInstalledBox; // 0x2d0(0x08)
	UVerticalBox* ModsPendingBox; // 0x2d8(0x08)
	UCircularThrobber* SubscribtionLoading; // 0x2e0(0x08)
	FBlueprintSessionResult Session; // 0x2e8(0x108)
	FMulticastInlineDelegate JoinModdedServer; // 0x3f0(0x10)
	FMulticastInlineDelegate OnCancel; // 0x400(0x10)
	bool EmptyMods; // 0x410(0x01)
	TArray<FString> ModsToInstall; // 0x418(0x10)
	TArray<FString> HostMods; // 0x428(0x10)
	TArray<FString> ModsToEnable; // 0x438(0x10)
	bool DependencyRecusivenessDone; // 0x448(0x01)
	TArray<FString> DependencyMods; // 0x450(0x10)
	FString DependencyRequestedMod; // 0x460(0x10)

	void UpdateHasModsInstalled();
	void OnGottonModDependencies(TArray<FString> ModIds, FString ParentMod);
	void UnbindEvents();
	void HiddenModsBlock(bool Hidden);
	void OnFetchedTermsOfUse(UModioTermsWrapper* Terms);
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
	void HasHiddenMods();
	void OnModMetaDataLoaded(FString ModId, enum class EUGCApprovalStatus ModStatus);
	void Cancel();
	void RequestDependenciesOfDependencies();
	void OnErrorInstallingMod(FString ModName, enum class EUGCPackageError ErrorType);
	void ExecuteUbergraph_WND_JoiningModded(int32_t EntryPoint);
	void OnCancel__DelegateSignature();
	void JoinModdedServer__DelegateSignature(FBlueprintSessionResult Session, FString Password);
};

