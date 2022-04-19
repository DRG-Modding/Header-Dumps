#ifndef UE4SS_SDK_ITM_Tab_Modding_HPP
#define UE4SS_SDK_ITM_Tab_Modding_HPP

class UITM_Tab_Modding_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonScalable2_C* ApplyButton;
    class UHorizontalBox* ApplyCancelBox;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBlurBackground_C* BlurBackground;
    class UButton* ButtonTermsAndConditions;
    class UBasic_ButtonScalable2_C* CancelButton;
    class UTextBlock* DisclaimerLabel;
    class UVerticalBox* InstalledBox;
    class UBasic_ButtonScalable2_C* InstallNewModsButton;
    class UBasic_ButtonScalable2_C* InstallNewModsButtonCenter;
    class UITM_Modding_LoadoutSelection_C* ITM_Modding_LoadoutSelection;
    class UBasic_Label_C* LBL_ModCount;
    class UBorder* LockBorder;
    class UVerticalBox* NoModsBox;
    class UTextBlock* NoModsInstalledLabel;
    class UVerticalBox* PendingBox;
    class UScrollBox* ScrollBar;
    class USetting_Modding_CheckVersion_C* Setting_CheckVersion;
    class UBasic_BoolUserSetting_C* Setting_CompactView;
    class USetting_ShowSandboxLabel_C* Setting_ShowSandboxNotification;
    class UVerticalBox* Settings_Box;
    class UUI_Modding_SortBy_C* SortByBox;
    class UCircularThrobber* TermsOfServiceThrobber;
    class URichTextBlock* TextTermsAndConditionsBlocked;
    class UVerticalBox* WaitBox;
    TArray<class UUGCPackage*> ModsPendingInstall;
    TArray<class UUGCPackage*> ModsPendingUninstall;
    TMap<class FString, class UITM_PendingMod_C*> WidgetsPendingInstall;
    FTimerHandle RefreshWaitHandle;
    bool CompactView;
    EPackageSortField SortField;
    bool SortAscending;
    TArray<class UITM_Mod_C*> ModWidgetsDueForUpdate;
    class UITM_Mod_C* ModWidgetDueForUpdate;

    void ApplyChangedMods();
    void GatherChangedMods();
    void IsUGCSubsystemAndRegistryValid(bool& IsValid);
    void RefreshApplyCancelButtons();
    void RemovePendingRequests();
    void ReorderInstalledMods(EPackageSortField InField, bool InAscending);
    void OnModOverlayClosed(FString LastURL);
    void UpdateModCounter();
    void SetCompactMode(bool CompactView);
    void SetInteractability();
    void GetOrCreatePendingInstallWidget(FString InModName, class UITM_PendingMod_C*& OutWidget);
    void OnDownloadExtractMods(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total);
    void JoinWithTitle(FText InTitle, TArray<FString>& Install, FString& OutResult);
    void GetPendingModStatus(FText& ModStatus);
    void On Fetched Terms and Conditions(class UModioTermsWrapper* Terms);
    void OnTermsAndConditionAnswered(bool Agree);
    void CheckTermsAndConditions(bool& Accepted);
    void No_EC976CB74898DAEE8DC237B1C9A04A9B();
    void Yes_EC976CB74898DAEE8DC237B1C9A04A9B();
    void OnFailure_DA32360A4EE3DEB5BB1F39BA00736B96();
    void OnSuccess_DA32360A4EE3DEB5BB1F39BA00736B96();
    void No_EC976CB74898DAEE8DC237B1445BDAB0();
    void Yes_EC976CB74898DAEE8DC237B1445BDAB0();
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
    void BndEvt__SortByBox_K2Node_ComponentBoundEvent_4_OnSortByChanged__DelegateSignature(EPackageSortField InField, bool InAscending);
    void BndEvt__SortByBox_K2Node_ComponentBoundEvent_6_OnEnableDisableAll__DelegateSignature(bool InEnableAll);
    void BndEvt__CancelButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void UpdateButtonsAndCounter();
    void OnModActivationChanged(class UITM_Mod_C* ManipulatedModItem);
    void BndEvt__ITM_Tab_Modding_ITM_Modding_LoadoutSelection_K2Node_ComponentBoundEvent_8_OnSlotLoaded__DelegateSignature();
    void ExecuteUbergraph_ITM_Tab_Modding(int32 EntryPoint);
};

#endif
