// WidgetBlueprintGeneratedClass ITM_Tab_Modding.ITM_Tab_Modding_C
// Size: 0x380 (Inherited: 0x230)
struct UITM_Tab_Modding_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ButtonScalable2_C* ApplyButton; // 0x238(0x08)
	UHorizontalBox* ApplyCancelBox; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	UBlurBackground_C* BlurBackground; // 0x250(0x08)
	UButton* ButtonTermsAndConditions; // 0x258(0x08)
	UBasic_ButtonScalable2_C* CancelButton; // 0x260(0x08)
	UTextBlock* DisclaimerLabel; // 0x268(0x08)
	UVerticalBox* InstalledBox; // 0x270(0x08)
	UBasic_ButtonScalable2_C* InstallNewModsButton; // 0x278(0x08)
	UBasic_ButtonScalable2_C* InstallNewModsButtonCenter; // 0x280(0x08)
	UBasic_Label_C* LBL_ModCount; // 0x288(0x08)
	UBorder* LockBorder; // 0x290(0x08)
	UVerticalBox* NoModsBox; // 0x298(0x08)
	UTextBlock* NoModsInstalledLabel; // 0x2a0(0x08)
	UVerticalBox* PendingBox; // 0x2a8(0x08)
	UScrollBox* ScrollBar; // 0x2b0(0x08)
	USetting_Modding_CheckVersion_C* Setting_Modding_CheckVersion; // 0x2b8(0x08)
	USetting_ShowSandboxLabel_C* Setting_ShowSandboxNotification; // 0x2c0(0x08)
	UUI_Modding_SortBy_C* SortByBox; // 0x2c8(0x08)
	URichTextBlock* TextTermsAndConditionsBlocked; // 0x2d0(0x08)
	UBasic_BoolUserSetting_C* UserSetting_CompactView; // 0x2d8(0x08)
	UVerticalBox* WaitBox; // 0x2e0(0x08)
	TArray<UUGCPackage*> ModsPendingInstall; // 0x2e8(0x10)
	TArray<UUGCPackage*> ModsPendingUninstall; // 0x2f8(0x10)
	TMap<FString, UITM_PendingMod_C*> WidgetsPendingInstall; // 0x308(0x50)
	FTimerHandle RefreshWaitHandle; // 0x358(0x08)
	bool CompactView; // 0x360(0x01)
	enum class EPackageSortField SortField; // 0x361(0x01)
	bool SortAscending; // 0x362(0x01)
	TArray<UITM_Mod_C*> ModWidgetsDueForUpdate; // 0x368(0x10)
	UITM_Mod_C* ModWidgetDueForUpdate; // 0x378(0x08)

	void IsUGCSubsystemAndRegistryValid(bool IsValid);
	void RefreshApplyCancelButtons();
	void RemovePendingRequests();
	void ReorderInstalledMods(enum class EPackageSortField InField, bool InAscending);
	void OnModOverlayClosed(FString LastURL);
	void UpdateModCounter();
	void SetCompactMode(bool CompactView);
	void SetInteractability();
	void GetOrCreatePendingInstallWidget(FString InModName, UITM_PendingMod_C* OutWidget);
	void OnDownloadExtractMods(FString Name, TArray<FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
	void JoinWithTitle(FText inTitle, TArray<FString> Install, FString OutResult);
	void GetPendingModStatus(FText ModStatus);
	void On Fetched Terms and Conditions(UModioTermsWrapper* Terms);
	void OnTermsAndConditionAnswered(bool Agree);
	void CheckTermsAndConditions(bool Accepted);
	void No_EC976CB74898DAEE8DC237B1445BDAB0();
	void Yes_EC976CB74898DAEE8DC237B1445BDAB0();
	void OnFailure_DA32360A4EE3DEB5BB1F39BA00736B96();
	void OnSuccess_DA32360A4EE3DEB5BB1F39BA00736B96();
	void Construct();
	void Destruct();
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__InstallNewModsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__ButtonTermsAndConditions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ConstructModUI();
	void BndEvt__InstallNewModsButtonCenter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnModManagementChanged(bool Enabled);
	void OnModDownloadFinished(FString ModName, FString ModId);
	void RefreshInstallModsButton();
	void RefreshModUI();
	void BndEvt__UserSetting_CompactView_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__SortByBox_K2Node_ComponentBoundEvent_4_OnSortByChanged__DelegateSignature(enum class EPackageSortField InField, bool InAscending);
	void BndEvt__SortByBox_K2Node_ComponentBoundEvent_6_OnEnableDisableAll__DelegateSignature(bool InEnableAll);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void UpdateButtonsAndCounter();
	void OnModActivationChanged(UITM_Mod_C* ManipulatedModItem);
	void ExecuteUbergraph_ITM_Tab_Modding(int32_t EntryPoint);
};

