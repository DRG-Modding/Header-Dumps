// WidgetBlueprintGeneratedClass ITM_Tab_Modding.ITM_Tab_Modding_C
// Size: 0x328 (Inherited: 0x230)
struct UITM_Tab_Modding_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ButtonScalable2_C* ApplyButton; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	UBlurBackground_C* BlurBackground; // 0x248(0x08)
	UButton* ButtonTermsAndConditions; // 0x250(0x08)
	UTextBlock* DisclaimerLabel; // 0x258(0x08)
	UVerticalBox* InstalledBox; // 0x260(0x08)
	UBasic_ButtonScalable2_C* InstallNewModsButton; // 0x268(0x08)
	UBasic_ButtonScalable2_C* InstallNewModsButtonCenter; // 0x270(0x08)
	UBorder* LockBorder; // 0x278(0x08)
	UVerticalBox* NoModsBox; // 0x280(0x08)
	UTextBlock* NoModsInstalledLabel; // 0x288(0x08)
	UVerticalBox* PendingBox; // 0x290(0x08)
	UScrollBox* ScrollBar; // 0x298(0x08)
	UVerticalBox* WaitBox; // 0x2a0(0x08)
	bool ApplyButtonShouldBeEnabled; // 0x2a8(0x01)
	TArray<UUGCPackage*> ModsPendingInstall; // 0x2b0(0x10)
	TArray<UUGCPackage*> ModsPendingUninstall; // 0x2c0(0x10)
	TMap<FString, UITM_PendingMod_C*> WidgetsPendingInstall; // 0x2d0(0x50)
	FTimerHandle RefreshWaitHandle; // 0x320(0x08)

	void SetInteractability();
	void GetOrCreatePendingInstallWidget(FString InModName, UITM_PendingMod_C* OutWidget);
	void OnDownloadExtractMods(FString Name, TArray<FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
	void JoinWithTitle(FText InTitle, TArray<FString> Install, FString OutResult);
	void GetPendingModStatus(FText ModStatus);
	void On Fetched Terms and Conditions(FModioTermsWrapper Terms);
	void OnTermsAndConditionAnswered(bool Agree);
	void CheckTermsAndConditions();
	void No_EC976CB74898DAEE8DC237B1445BDAB0();
	void Yes_EC976CB74898DAEE8DC237B1445BDAB0();
	void OnFailure_DA32360A4EE3DEB5BB1F39BA00736B96();
	void OnSuccess_DA32360A4EE3DEB5BB1F39BA00736B96();
	void Construct();
	void Destruct();
	void RefreshApplyButton();
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__InstallNewModsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__ButtonTermsAndConditions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ConstructModUI();
	void BndEvt__InstallNewModsButtonCenter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnModManagementChanged(bool Enabled);
	void OnModDownloadFinished(FString ModName, FString ModId);
	void RefreshInstallModsButton();
	void RefreshModUI();
	void ExecuteUbergraph_ITM_Tab_Modding(int32_t EntryPoint);
};

